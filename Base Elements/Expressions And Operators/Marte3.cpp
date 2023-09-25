#include <bits/stdc++.h>

using namespace std;

int n, z, y ;
int main()
{
  cin >> z >> y >> n ;
  cout << n / ( z * y ) << '\n' ;
  cout << ( n % ( z * y ) ) / y << '\n' ;
  cout << ( n % ( z * y ) ) % y ;
    return 0;
}
