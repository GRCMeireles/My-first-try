#include <iostream>
using namespace std;
int main (){
    bool A, B, C;
    float X, Y;
    int L;
    A = false;
    B = true;
    C = false;
    Y = 3.2;
    X = 11.5;
    X = X + 1;
    if (C || (X+Y>5) || (!A && B))
    {cout<<"L=0";}
    else {cout<<"L=1";}
system ("pause");
return (0);
}
