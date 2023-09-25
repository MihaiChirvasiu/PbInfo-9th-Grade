#include <bits/stdc++.h>

using namespace std;
long long x, y ,z, nr ;
int main()
{
    ifstream f ( "coada2.in" ) ;
    ofstream g ( "coada2.out" ) ;
    f >> x >> y >> z ;
    nr = y + z - x ;
    if ( nr < 0 || x >= y || x >= z )
        g << -1 ;
    else g << nr ;
    return 0;
}
