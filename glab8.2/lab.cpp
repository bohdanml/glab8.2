#include <iostream>
#include <string>
using namespace std;

bool Limit(char ch, int start, int end) {
    return (int(ch) >= start && int(ch) <= end);
}

string transformString(string inputString) {
    string result;
    size_t IndexOFfirstSpace = inputString.find_first_of(' ');

    for (int i = 0; i < IndexOFfirstSpace; i++) {
        char currentChar = inputString[i];

        if (Limit(currentChar, 97, 122) || Limit(currentChar, 48, 57)) {
            // Convert lowercase letters and numbers to uppercase
            result += char(int(currentChar) - 32);
        }
        else {
            result += currentChar;
        }
    }

    result += inputString.substr(IndexOFfirstSpace); // Append the rest of the string
    return result;
}

int main() {
    string inputStr;
    cout << " Enter string: " << endl;
    getline(cin, inputStr);

    if (inputStr.find_first_of(' ') != string::npos) {
        string outputStr = transformString(inputStr);
        cout << "  String after changes: " << endl << outputStr << endl;
    }
    else {
        cout << "No space!.Try again" << endl;
    }

    return 0;
}