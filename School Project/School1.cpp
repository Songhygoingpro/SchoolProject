#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filePath = "C:\\filename.txt";
    std::ofstream file(filePath);
    if (!file) {
        std::cout << "Error opening the file." << std::endl;
        return 1;
    }
    file << "First string" << std::endl;
    file << "Second string" << std::endl;
    file.close();
    std::ifstream readFile(filePath);

    if (readFile.is_open()) {
        std::string lastString;
        std::string line;
        while (getline(readFile, line)) {
            lastString = line;
        }

        readFile.close();
        std::cout << "Second string in the file: " << lastString << std::endl;
    } else {
        std::cout << "Error opening the file for reading." << std::endl;
    }

    return 0;
}