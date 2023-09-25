#include <bits/stdc++.h>

using namespace std;
int c1, c2, i ;
float h, A ;
int main()
{
    cin >> c1 >> c2 >> i ;
    A = (float) (c1 * c2) / 2 ;
    h = (float) (2 * A) / i ;
    h = h * 100 ;
    h = (int) h ;
    cout << fixed << setprecision(2) << (float) h / 100 ;
    return 0;
}
