#include <iostream>
#include <string>
using namespace std;

int main() {
    string digitNames[10] = {
        "zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"
    };
    
    int number;
    
    cout << "Введите число от 0 до 9: ";
    cin >> number;
    
    if (number >= 0 && number <= 9) {
        cout << "Название цифры: " << digitNames[number] << endl;
    } else {
        cout << "Ошибка! Введите число от 0 до 9." << endl;
    }
    
    return 0;
}