#include <bits/stdc++.h>
using namespace std;
 unsigned long long n , i , s ;
int main()
{
    cin >> n ;
    for ( i = 1 ; i <= n ; i = i + 2 )
        s = s + i ;
    cout << s ;


  return 0 ;

}
