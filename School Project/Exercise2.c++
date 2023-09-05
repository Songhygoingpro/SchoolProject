#include <iostream>
#include <string>
using namespace std;

string findName(string arrayName[], int size) {
    string name;
    cout << "Enter a name: ";
    cin >> name;

    for (int i = 0; i < size; i++) {
        if (name == arrayName[i]) {
            return arrayName[i];
        }
    }
    return "Not Found";
}

int main() {
    string arrayName[] = {"Lucy", "Udom", "Samnang", "July"};
    int size = sizeof(arrayName) / sizeof(arrayName[0]);

    string result = findName(arrayName, size);
    cout << "Result: " << result << endl;

    return 0;
}