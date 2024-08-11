#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <sstream>
#include <string>
#include <mutex>
#include <windows.h>


// SEH-safe logging function
void SEH_SafeLog(const char* level, const char* message) {
    char buffer[1024];
    SYSTEMTIME st;
    GetLocalTime(&st);

    snprintf(buffer, sizeof(buffer), "[%04d-%02d-%02d %02d:%02d:%02d] [%s] %s\n",
        st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute, st.wSecond,
        level, message);

    // Open file, write, and close immediately
    FILE* file = fopen("seh_safe.log", "a");
    if (file) {
        fputs(buffer, file);
        fclose(file);
    }
}

// SEH-safe wrapper functions
void SEH_LOG_MESSAGE(const char* message) {
    SEH_SafeLog("MESSAGE", message);
}

void SEH_LOG_ERROR(const char* message) {
    SEH_SafeLog("ERROR", message);
}

class Logger {
private:
    static Logger* instance;
    std::ofstream logFile;
    std::string currentFileName;
    std::mutex mtx;

    Logger() {
        initializeLogFile();
    }

public:
    static Logger* getInstance() {
        if (instance == nullptr) {
            instance = new Logger();
        }
        return instance;
    }

    void initializeLogFile() {
        auto now = std::chrono::system_clock::now();
        auto in_time_t = std::chrono::system_clock::to_time_t(now);

        std::stringstream ss;
        ss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d_%H-%M-%S");
        currentFileName = ss.str() + ".log";

        logFile.open(currentFileName, std::ios::app);
        if (!logFile.is_open()) {
            std::cerr << "Failed to open log file: " << currentFileName << std::endl;
        }
    }

    void log(const std::string& level, const std::string& message) {
        std::lock_guard<std::mutex> lock(mtx);
        auto now = std::chrono::system_clock::now();
        auto in_time_t = std::chrono::system_clock::to_time_t(now);

        std::stringstream ss;
        ss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %H:%M:%S");
        std::string timestamp = ss.str();

        logFile << "[" << timestamp << "] [" << level << "] " << message << std::endl;
        logFile.flush();
    }

    ~Logger() {
        if (logFile.is_open()) {
            logFile.close();
        }
    }
};

Logger* Logger::instance = nullptr;

void LOG_MESSAGE(const std::string& message) {
    Logger::getInstance()->log("MESSAGE", message);
}

void LOG_ERROR(const std::string& message) {
    Logger::getInstance()->log("ERROR", message);
}