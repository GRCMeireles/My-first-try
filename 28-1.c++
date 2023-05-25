#include <iostream>
using namespace std;

int main() {
    bool B1, B2, B3;

    cout << "Digite o valor de B1 (0 ou 1): ";
    cin >> B1;

    cout << "Digite o valor de B2 (0 ou 1): ";
    cin >> B2;

    cout << "Digite o valor de B3 (0 ou 1): ";
    cin >> B3;

    if (!B1) {
        // COMANDO1
        cout << "Executando COMANDO1" << endl;
    }
    else if (!B2) {
        if (!B3) {
            // COMANDO2
            cout << "Executando COMANDO2" << endl;
        }
        else {
            // COMANDO3
            cout << "Executando COMANDO3" << endl;
        }
    }

    // COMANDO4
    cout << "Executando COMANDO4" << endl;

    return 0;
}
