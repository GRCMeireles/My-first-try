#include <iostream>;
using namespace std;
int main () {
    float N_P, N_M, N_D;
    //Por se tratar de variaveis reais, nao tem problema colocar numeros decimais
    //Sempre usar o "." em vez da virgula para nao dar erro
    cout<<("A nota em Portugues: ");
    cin>>N_P;
    cout<<("A nota em Matematica: ");
    cin>>N_M;
    cout<<("A nota em Direito: ");
    cin>>N_D;
    cout<<("Media Aritmetrica: ")<<(N_P+N_M+N_D)/3;
    cout<<("Media Ponderada: ")<<(N_P*2+N_M*4+N_D*3)/9;

system("pause");
return(0);
}
