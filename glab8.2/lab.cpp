#include <iostream>
#include <string>
using namespace std;
//перевірка
bool Limit(char ch, int start, int end) {
    return (int(ch) >= start && int(ch) <= end);
}
// трансформація  до першого пробілу
string transformString(string inputString) {
    string result;
    // знаход перший пробілу 
    size_t IndexOFfirstSpace = inputString.find_first_of(' ');
    //проходжусь по символ до 1 пробілу
    for (int i = 0; i < IndexOFfirstSpace; i++) {
        char currentChar = inputString[i];

        if (Limit(currentChar, 97, 122) || Limit(currentChar, 48, 57)) {
            //  малі літери на великі
            result += char(int(currentChar) - 32);
        }
        else {
            //інші без змін
            result += currentChar;
        }
    }
    //решта без змін додаю
    result += inputString.substr(IndexOFfirstSpace); 
    return result;
}

int main() {
    string inputStr;
    cout << " Enter string: " << endl;
    getline(cin, inputStr);
    //знахід пробілу
    if (inputStr.find_first_of(' ') != string::npos) {
        string outputStr = transformString(inputStr);//якщо є пробіл трансформ
        cout << "  String after changes: " << endl << outputStr << endl;
    }
    else {
        cout << "No space!.Try again" << endl;
    }

    return 0;
}
