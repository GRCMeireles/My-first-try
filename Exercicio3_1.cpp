#include <iostream>
using namespace std;
int main () {
    int A, B, C;
    cout<<("Digite o valor de A:");
    cin>>A;
    cout<<("Digite o valor de B:");
    cin>> B;
    // Troca dos valores
    C = A;
    A = B;
    B = C;
    cout<<("\nNovo valor de A:")<<A;
    cout<<("\nNovo valor de B:")<<B;

system("Pause");
return 0;
}
