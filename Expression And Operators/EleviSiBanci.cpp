#include <bits/stdc++.h>

using namespace std;
int n, m, e, b, B, E ;
int main()
{
    cin >> n >> m >> e >> b ;
    B = (m * b + e) / ( m - n ) ;
    E = n * B + e ;
    cout << E << '\n' ;
    cout << B ;
    return 0;
}
