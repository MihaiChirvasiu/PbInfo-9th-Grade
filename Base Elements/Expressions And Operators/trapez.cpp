#include <bits/stdc++.h>

using namespace std;
double B,b,l,d,y,x,z;

int main()
{
    cin>>B>>b>>l;

      x=(B-b)/2;
      y=sqrt(l*l-x*x);
      z=b+x;
      d=sqrt(y*y+z*z);

    cout <<d;
    return 0;
}
