#include <iostream>
#include <fstream>
using namespace std;

void writeArrayToFile(int array[], int size, const string& filename) {
    ofstream outputFile(filename);
    if (outputFile.is_open()) {
        for (int i = 0; i < size; i++) {
            outputFile << array[i] << endl;
        }
        outputFile.close();
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Unable to open the file." << endl;
    }
}

int main() {
    int array[] = {20, 30, 40};
    int size = sizeof(array) / sizeof(array[0]);
    string filename = "output.txt";

    writeArrayToFile(array, size, filename);

    return 0;
}