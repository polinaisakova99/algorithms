#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    
    cout << "Введите число a: " << endl;
    cin >> a;
    
    cout << "Введите число b: " << endl;
    cin >> b;
    
    cout << "Введите результат умножения a и b: " << endl;
    cin >> c;

    if (c == a * b) {
        cout << "Правильно!" << endl;
    }
    else {
        cout << "Упс" << endl;
    }
    return 0;
}
