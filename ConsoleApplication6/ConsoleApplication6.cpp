#include <iostream>

using namespace std;

int main() {
    int length;
    cout << "Enter array length: ";
    cin >> length;

    int minValue, maxValue;
    cout << "Enter the minimum value: ";
    cin >> minValue;
    cout << "Enter maximum value: ";
    cin >> maxValue;

    if (minValue > maxValue) {
        cout << "Error: Minimum value is greater than maximum." << endl;
        return 1;
    }

    int* dynamicArray = new int[length];
    for (int i = 0; i < length; i++) {
        dynamicArray[i] = minValue + rand() % (maxValue - minValue + 1);
    }

    cout << "Array in reverse order: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    delete[] dynamicArray;

    return 0;
}