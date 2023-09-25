#include <iostream>

using namespace std;
int n,u,z,s;
int main()
{
    cin>>n;
    u=n%10;
    z=(n/10)%10;
    s=n/100;

    cout << u+z+s;
    return 0;
}
