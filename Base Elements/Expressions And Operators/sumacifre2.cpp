#include <iostream>
using namespace std;
int s=0,n,u,z;
int main ()
{
    cin>>n;
    u=n%10;
    z=n/10;
    s=u+z;
    cout<<s;
    return 0;
}
