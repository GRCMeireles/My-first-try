#include <iostream>
using namespace std;
int main() {
    int A, B;
    cout<<("Valor de A:");
    cin>>A;
    cout<<("Valor de B:");
    cin>>B;
    A = A + B;
    B = A - B;
    A = A - B;
    cout<<("Valor de A:")<<A;
    cout<<("\nValor de B:")<<B;

system("Pause");
return(0);

}
