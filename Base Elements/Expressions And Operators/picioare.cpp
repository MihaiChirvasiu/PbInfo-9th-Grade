#include <iostream>

using namespace std;
int G,O,C,P1,P2,P;
int main()
{
    cin>>G>>O;
    C=G+O;
    P1=G*2;
    P2=O*4;
    P=P1+P2;
    cout<<C<<' '<<P;
    return 0;
}
