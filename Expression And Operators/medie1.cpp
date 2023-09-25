#include <bits/stdc++.h>

using namespace std;
int x,y,z,m1;
float m;
int main()
{
    cin>>x>>y>>z;
    m=(float)(x+y+z)/3;
    m=m*100;
    m1=(int) m;
    cout<<fixed<<setprecision(2)<<(float ) m1 /100;
    return 0;
}
