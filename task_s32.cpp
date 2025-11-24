#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX_SIZE = 256;
    char str[MAX_SIZE];
    
    cout << "Введите строку: ";
    cin.getline(str, MAX_SIZE);
    
    char *ptr = str;
    
    int length = strlen(str);
    
    cout << "Исходная строка: " << str << endl;
    
    for (int i = 0; i < length; i++) {
        if ((*ptr >= 'a' && *ptr < 'z') || (*ptr >= 'A' && *ptr < 'Z')) {
            (*ptr)++; 
        }
        else if (*ptr == 'z') {
            *ptr = 'a'; 
        }
        else if (*ptr == 'Z') {
            *ptr = 'A'; 
        }
        ptr++; 
    }
    
    cout << "Преобразованная строка: " << str << endl;
    
    return 0;
}