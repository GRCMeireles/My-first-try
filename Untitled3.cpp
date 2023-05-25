// C++ Code to explain working of "flush(stdin);"
// discards the input buffer
#include <cstdio> //fflush(stdin) is available in cstdio header files
#include <ios>
#include <iostream>
using namespace std;

int main()
{
    int value;
    string letters;

    // Enter an integer input from user
    // 98 for example
    cin >> value;

    // Discards the input buffer
    fflush(stdin);

    // Get input from user -
    // GeeksforGeeks for example
    getline(cin, letters);

    // Prints 98
    cout << value << endl;

    // Printing user entered string - this
    // will print string now
    cout << letters << endl;

float N_P, N_M, N_D;
cout<<("A nota em Portugues: ")<<N_P;
cin.clear();
cin>>N_P;
cout<<("A nota em Matematica: ")<<N_M;
cin>>N_M;
cout<<("A nota em Direito: ")<<N_D;
cin>>N_D;
cout<<("Media Aritmetrica: ")<<(N_P+N_M+N_D)/3;
cout<<("Media Ponderada: ")<<(N_P*2+N_M*4+N_D*3)/9;

system("pause");

return(0);

}


