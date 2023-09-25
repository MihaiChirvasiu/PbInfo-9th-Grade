#include <bits/stdc++.h>

using namespace std;
int u,n,s;
int main()
{
    cin>>n;
   while(n!=0)
   {
       u=n%10;
       s=s+u*u;
       n=n/10;
   }
   cout<<s;
    return 0;
}
