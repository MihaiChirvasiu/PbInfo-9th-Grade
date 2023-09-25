#include <bits/stdc++.h>

using namespace std;
long long n, m, dif, tot, z ;
int main()
{
    ifstream f ( "zmeu.in" ) ;
    ofstream g ( "zmeu.out" ) ;
    f >> n ;
    f >> m ;
    z = n / ( 2 * m ) ;
    tot = ( z + 1 ) * ( 2 * m ) ;
    dif = tot - n ;
    g << z << '\n' ;
    g << dif ;
    return 0;
}
