#include <iostream>
#include <thread>
#include <chrono>

void clearScreen() {
#ifdef _WIN32
    system("CLS");
#else
    system("clear");
#endif
}

void drawHeart(int scale) {
    std::cout << std::string(scale, ' ') << "  **     **  \n";
    std::cout << std::string(scale - 1, ' ') << "****** ******\n";
    std::cout << std::string(scale - 2, ' ') << "*************\n";
    std::cout << std::string(scale - 1, ' ') << " *********** \n";
    std::cout << std::string(scale, ' ') << "   *******   \n";
    std::cout << std::string(scale + 1, ' ') << "     ***     \n";
    std::cout << std::string(scale + 2, ' ') << "      *      \n";
}

int main() {
    const int maxScale = 5;
    const int delay = 200; // milliseconds

    while (true) {
        for (int scale = 1; scale <= maxScale; ++scale) {
            clearScreen();
            drawHeart(scale);
            std::this_thread::sleep_for(std::chrono::milliseconds(delay));
        }

        for (int scale = maxScale; scale >= 1; --scale) {
            clearScreen();
            drawHeart(scale);
            std::this_thread::sleep_for(std::chrono::milliseconds(delay));
        }
    }

    return 0;
}