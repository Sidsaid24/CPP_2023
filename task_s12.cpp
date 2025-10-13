#include <iostream>
using namespace std;

int main() {

    int sum1 = 0;
    int i = 0;
    do {
        if (i % 7 == 0) {
            sum1 += i;
        }
        i += 4;
    } while (i <= 1000);
    cout << "Sum: " << sum1 << "  // (0 - 1000)" << endl;


    int sum2 = 0;
    i = 1;
    do {
        if (i % 7 == 0) {
            sum2 += i;
        }
        i += 4;
    } while (i <= 1000);
    cout << "Sum: " << sum2 << "  // (1 - 1000)" << endl;
    
    return 0;
}