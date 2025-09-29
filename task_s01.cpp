#include <iostream>
using namespace std;

int main() {
    int integerVar = 15;
    double doubleVar = 7.5;
    float floatVar = 3.2f;
    char charVar = 'A';

    cout << "Sum (+):" << endl;
    cout << integerVar << " + " << doubleVar << " = " << integerVar + doubleVar << endl;
    cout << floatVar << " + " << integerVar << " = " << floatVar + integerVar << endl;
    cout << charVar << " + 5 = ( "<< charVar + 5 << ")" << endl;
    cout << endl;
    
    cout << "Minuss(-):" << endl;
    cout << integerVar << " - " << doubleVar << " = " << integerVar - doubleVar << endl;
    cout << floatVar << " - " << integerVar << " = " << floatVar - integerVar << endl;
    cout << charVar << " - 3 = (" << charVar - 3 << ")" << endl;
    cout << endl;

    cout << "Multi(*):" << endl;
    cout << integerVar << " * " << doubleVar << " = " << integerVar * doubleVar << endl;
    cout << floatVar << " * " << integerVar << " = " << floatVar * integerVar << endl;
    cout << charVar << " * 2 = (" << charVar * 2 << ")" << endl;
    cout << endl;

    cout << "Split:" << endl;
    cout << integerVar << " / " << doubleVar << " = " << integerVar / doubleVar << endl;
    cout << integerVar << " / 4 = " << integerVar / 4 << endl;
    cout << doubleVar << " / " << floatVar << " = " << doubleVar / floatVar << endl;
    cout << charVar << " / 2 = " << charVar / 2  << endl;

    return 0;
}