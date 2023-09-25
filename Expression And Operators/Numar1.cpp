#include <iostream>

using namespace std;
int n,u,s,P,us;
int main()
{
    cin>>n;
    u=n%10;
    s=n/100;
    P=s*10+u;
    P=P*P;

    cout << P;
    return 0;
}
