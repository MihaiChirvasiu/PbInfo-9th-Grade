#include <bits/stdc++.h>

using namespace std;
int x ;
float rez ;
int main()
{
    cin >> x ;
    rez = sin(x*3.14/180) * 1000 ;
    rez = (int) rez ;
    cout << fixed << setprecision(3) << rez / 1000 ;
    cout << ' ' ;
    rez = cos(x*3.14/180) * 1000 ;
    rez = (int) rez ;
    cout << fixed << setprecision(3) << rez / 1000 ;
    return 0;
}
