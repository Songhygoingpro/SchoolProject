#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    std::string filePath = "C:\\filename.txt";
    std::ofstream file(filePath);
    if (!file) {
        std::cout << "Error opening the file." << std::endl;
        return 1;
    }
    file << "I am an ITE student from M3 class." << std::endl;
    file.close();

    return 0;
}