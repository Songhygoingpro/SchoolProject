#include <iostream>
#include <fstream>
using namespace std;

void writeArrayToFile() {
    // Write the array to a file
    int array[] = {20, 30, 40};
    int size = sizeof(array) / sizeof(array[0]);

    ofstream outputFile("text.txt");
    if (outputFile.is_open()) {
        for (int i = 0; i < size; i++) {
            outputFile << array[i] << endl;
        }
        outputFile.close();
        cout << "Array written to file successfully." << endl;
    } else {
        cout << "Unable to open the file." << endl;
    }
}

void readArrayFromFile() {
    // Read the array values from the file
    ifstream inputFile("text.txt");
    if (inputFile.is_open()) {
        int value;
        while (inputFile >> value) {
            cout << value << endl;
        }
        inputFile.close();
    } else {
        cout << "Unable to open the file." << endl;
    }
}

int main() {
    writeArrayToFile();
    readArrayFromFile();

    return 0;
}