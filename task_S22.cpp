#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("output");
    
    if (!inputFile.is_open()) {
        cout << "Ошибка: не удалось открыть файл 'output' для чтения!" << endl;
        return 1;
    }
    
    int number;
    
    // Используем цикл for с условием чтения из файла
    for (int counter = 1; inputFile >> number; counter++) {
        cout << counter << ". " << number << endl;
    }
    
    inputFile.close();
    return 0;
}