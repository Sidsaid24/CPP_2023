#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int A, B;
    
    cout << "Введите число A: ";
    cin >> A;
    
    cout << "Введите число B (должно быть больше A): ";
    cin >> B;
    
    if (B <= A) {
        cout << "Ошибка: B должно быть больше A!" << endl;
        return 1;
    }
    
    ofstream outputFile("output");
    if (!outputFile.is_open()) {
        cout << "Ошибка: не удалось открыть файл для записи!" << endl;
        return 1;
    }
    
    // Используем цикл while
    int current = A;
    while (current <= B) {
        outputFile << current * 3 << endl;
        current++;
    }
    
    outputFile.close();
    cout << "Результаты успешно записаны в файл 'output'" << endl;
    
    return 0;
}