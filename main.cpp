#include "sdt.h"

// Учебная программа под системой контроля версий
int main() {
    int a, b;
    cout << "Введите A и B: ";
    cin >> a >> b;
    cout << "A+B=" << a + b << endl;
    cout << "A-B=" << a - b << endl;
    
    if (b != 0) {
        cout << "A/B=" << a / b << endl;
    } else {
        cout << "Деление на ноль!" << endl;
    }
    
    return 0;
}