#include <bits/stdc++.h>

using namespace std;
int sum_div ( int n )
{
    int d = 0, s = 0 ;
    for ( d = 1 ; d * d < n ; d ++ )
        if ( n % d == 0 )
        s = s + d ;
        if ( d * d == n )
            s = s + d ;
    return s ;
}
int f, b, n, nr ;
int main()
{
  cin >> f >> b >> n ;
  nr = f * 3 * n + b * 2 * n ;
  cout << nr ;
    return 0;
}
