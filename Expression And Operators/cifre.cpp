#include <iostream>

using namespace std;
int n,z,u,s;
int main()
{
    cin>>n;
    z=(n/10)%10;
    u=n%10;
    s=z+u;
    cout<<s;
    return 0;
}
