#include <iostream>

using namespace std;
int h1,m1,x,h2,m2,n;
int main()
{
    cin>>h1>>m1>>x;
    n=h1*60 + m1 + x;
    n=n%1440;
    h2=n/60;
    m2=n%60;
    cout<<h2<<' '<<m2;
    return 0;
}
