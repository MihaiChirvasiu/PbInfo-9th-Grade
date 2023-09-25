#include <bits/stdc++.h>

using namespace std;
int i, a, ct, b ;
int main()
{
    cin >> a >> b ;
    while ( a % 10 != 0)
    {
        a ++ ;
    }
    for ( i = a ; i <= b ; i += 10 )
        ct ++ ;
    cout << ct ;
    return 0;
}
