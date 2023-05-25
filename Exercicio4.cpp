#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float A, B, C, X1, X2, D;
    //A<>0
    //(B*B-4*A*C)>0
    cout<<("Valor de A:");
    cin>>A;
    cout<<("Valor de B:");
    cin>>B;
    cout<<("Valor de C:");
    cin>>C;
    D = B*B-4*A*C;
    X1 = (-B + sqrt(D)) / (2*A);
    X2 = (-B - sqrt(D)) / (2*A);
    cout<<("Valor de X1:")<<X1;
    cout<<("\nValor de X2:")<<X2;

system("pause");
return(0);

}
