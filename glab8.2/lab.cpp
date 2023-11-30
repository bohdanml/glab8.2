#include <iostream>
#include <string>
using namespace std;

bool naLetter(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

string transformString(string inputString) {
    string result;

    for (int i = 0; i < inputString.length(); i++) {
        char currentChar = inputString[i];

        if (currentChar == ' ') {
            // Знайдено пробіл, відмінити трансформування
            result += inputString.substr(i);
            break;
        }
        else if (naLetter(currentChar)) {
            // Літера: збільшити літеру
            char transformedChar = (currentChar >= 'a' && currentChar <= 'z') ? char(currentChar - 'a' + 'A') : currentChar;
            result += transformedChar;
        }
        else {
            // Інший символ- незмінним
            result += currentChar;
        }
    }

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
        cout << "No space! Try again." << endl;
    }

    return 0;
}
