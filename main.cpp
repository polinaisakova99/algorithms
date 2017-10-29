#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    int s;
    int m = 5;
    int o;
    while (m > 0){
        cout << "Введите 1-ое число: " << endl;
        cin >> a;
    
        cout << "Введите 2-ое число: " << endl;
        cin >> b;

        cout << "Выберите операцию 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление: " << endl;
        cin >> s;
        
        if (s == 1){
            cout << "a + b = " << a + b << endl << endl;
        }
        if (s == 2){
            cout << "a - b = " << a - b << endl << endl;
        }
        if (s == 3){
            cout << "a * b = " << a * b << endl << endl;
        }
        if (s == 4){
            cout << "a / b = " << a / b  << endl << endl;
        }
        
        cout << "Введите 9 для продолжения, 0 - для выхода" << endl << endl;
        cin >> o;
        
        if (o == 0){
            m = 0;
        }
        else if (o == 9) {
            m = 5;
        }
    }
    return 0;
}
