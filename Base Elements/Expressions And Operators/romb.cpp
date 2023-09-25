#include <bits/stdc++.h>

using namespace std;
double d1,d2,l;
int main()
{
    cin>>d1>>d2;
     l=sqrt(((d1/2)*(d1/2)) + ((d2/2)*(d2/2)));

    cout << l*4<<' '<<(d1*d2)/2;
    return 0;
}
