#include <iostream>
#include <unordered_map>
#include <sstream>

class Print {
public:
    Print& operator<<(const std::string& text) {
        std::cout << parseMinecraftColors(text);
        return *this;
    }

    Print& operator<<(const char* text) {
        std::cout << parseMinecraftColors(std::string(text));
        return *this;
    }

    template <typename T>
    Print& operator<<(const T& value) {
        std::ostringstream oss;
        oss << value;
        std::cout << oss.str();
        return *this;
    }

    Print& operator<<(std::ostream& (*manip)(std::ostream&)) {
        std::cout << manip;
        return *this;
    }

private:
    std::string parseMinecraftColors(const std::string& text) {
        static const std::unordered_map<char, std::string> colorMap = {
            {'0', "\033[30m"}, // Black
            {'1', "\033[34m"}, // Dark Blue
            {'2', "\033[32m"}, // Dark Green
            {'3', "\033[36m"}, // Dark Aqua
            {'4', "\033[31m"}, // Dark Red
            {'5', "\033[35m"}, // Dark Purple
            {'6', "\033[33m"}, // Gold
            {'7', "\033[37m"}, // Gray
            {'8', "\033[90m"}, // Dark Gray
            {'9', "\033[94m"}, // Blue
            {'a', "\033[92m"}, // Green
            {'b', "\033[96m"}, // Aqua
            {'c', "\033[91m"}, // Red
            {'d', "\033[95m"}, // Light Purple
            {'e', "\033[93m"}, // Yellow
            {'f', "\033[97m"}, // White
            {'l', "\033[1m"},  // Bold
            {'m', "\033[9m"},  // Strikethrough
            {'n', "\033[4m"},  // Underline
            {'o', "\033[3m"},  // Italic
            {'r', "\033[0m"}   // Reset
        };

        std::string result;
        for (size_t i = 0; i < text.size(); ++i) {
            if (text[i] == '&' && i + 1 < text.size()) {
                auto it = colorMap.find(text[i + 1]);
                if (it != colorMap.end()) {
                    result += it->second;
                    ++i;
                    continue;
                }
            }
            result += text[i];
        }
        result += "\033[0m";
        return result;
    }
};

Print print;