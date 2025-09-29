#include <iostream>
using namespace std;

int main() {
    int a = 45;
    int b = 13;
    
    cout << "a = " << a << ", b = " << b << endl;

    cout << "Деление нацело:" << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    cout << "Остаток от деления:" << endl;
    cout << a << " % " << b << " = " << a % b << endl;

    return 0;
}