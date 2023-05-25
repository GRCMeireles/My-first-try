#include <iostream>;
#include <math.h>
using namespace std;
int main () {
    int N1, N2;
    cout<<("Valor N1:");
    cin>>N1;
    cout<<("Valor N2:");
    cin>>N2;
    cout<<("Soma de N1 e N2:")<<N1+N2;
    cout<<("\nSubtracao de N1 e N2:")<<N1-N2;
    cout<<("\nMultiplicacao de N1 e N2:")<<N1*N2;
    cout<<("\nQuociente inteiro de N1 e N2:")<<N1/N2;
    cout<<("\nResto da divisao de N1 e N2:")<<N1%N2;
    cout<<("\nDivisao real de N1 e N2:")<<(float)N1/N2;
    cout<<("\nPontecia de N1 e N1:")<<pow(N1,N2);

system("pause");
return(0);
}
