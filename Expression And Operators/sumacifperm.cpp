#include <bits/stdc++.h>

using namespace std;
int s, u, z, sum, nr, n ;
int main()
{
    cin >> n ;
    u = n % 10 ;
    z = n / 10 % 10 ;
    s = n / 100 ;
    nr = u * 100 + z * 10 + s ;
    sum = sum + nr ;
    nr = u * 100 + s * 10 + z ;
    sum = sum + nr ;
    nr = z * 100 + u * 10 + s ;
    sum = sum + nr ;
    nr = z * 100 + s * 10 + u ;
    sum = sum + nr ;
    nr = s * 100 + z * 10 + u ;
    sum = sum + nr ;
    nr = s * 100 + u * 10 + z ;
    sum = sum + nr ;
    cout << sum ;

    return 0;
}
