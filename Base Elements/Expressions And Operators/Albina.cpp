#include <bits/stdc++.h>

using namespace std;

long long n, c, i ;
int main()
{
  cin >> n ;
  for ( i = 1 ; i < n ; i ++ )
    c = c + i * 6 ;
  cout << 1 + c ;
    return 0;
}
