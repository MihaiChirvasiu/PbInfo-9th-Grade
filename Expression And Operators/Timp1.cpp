 #include <bits/stdc++.h>
 using namespace std;
 int h1,m2,m1,h2,x,y;
int main()
{
  cin>>h1>>m1>>x>>y;
  h2=(h1+(m1+y)/60+x)%24;
  m2=(m1+y)%60;
   cout<<h2<<' '<<m2;

    return 0;
}
