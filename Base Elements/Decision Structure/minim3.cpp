#include <bits/stdc++.h>

using namespace std;
double a, b, c;
int main()
{
    cin>>a>>b>>c;
    if(a< b && a< c) cout <<a;
    if(b< a && b< c) cout <<b;
    if(c< a && c< b) cout <<c;
       if(a==b&&b==c)
        cout<<a;
    return 0;
}
