
#include <iostream>
#include <cstring>
using namespace std;

void reverseIt(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        // Swap characters from both ends of the string
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    const int MAX_LENGTH = 100; // Maximum string length
    char inputStr[MAX_LENGTH];

    cout << "Enter a string: ";
    cin.getline(inputStr, MAX_LENGTH);

    // Call the reverseIt function to reverse the string
    reverseIt(inputStr);

    cout << "Reversed string: " << inputStr << endl;

    return 0;
}
