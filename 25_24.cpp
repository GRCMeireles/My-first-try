#include <iostream>;
using namespace std;
int main () {
    float Saldo, Saque_1, Saque_2, Deposito;
    cout<<("O Saldo: ");
    cin>>Saldo;
    //nao e necessario colocar valores negativos nos valores de saque
    cout<<("Primeiro Saque: ");
    cin>>Saque_1;
    cout<<("Segundo Saque ");
    cin>>Saque_2;
    cout<<("Deposito ");
    cin>>Deposito;
    cout<<("Saldo atual:")<<Saldo;
    cout<<("\nTotal dos Saques:")<<Saque_1+Saque_2;
    cout<<("\nTotal dos Depositos:")<<Deposito;
    cout<<("\nSaldo Final:")<<Saldo-Saque_1-Saque_2+Deposito;

    system("pause");
    return(0);
}
