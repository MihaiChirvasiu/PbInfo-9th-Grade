#include <bits/stdc++.h>
using namespace std;
int a ;
double b ;
int main()
{
    cin >> a ;
    b = 3 * (  a * a + a * a * a * a ) / (  a * a + a * a * a * a + sqrt(  a * a + a * a * a * a )) +  sqrt(  a * a + a * a * a * a ) ;
    cout << ( int ) b ;
    return 0;
}
