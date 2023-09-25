#include <iostream>

using namespace std;
int n,u,s,P;
int main()
{
    cin>>n;
    u=n%10;
    s=n/100;
    P=u*s;
    cout << P;
    return 0;
}
