#include <iostream>

using namespace std;
int ct, aux, v[6], k, a, b, c, d, e, j, s ;
int main()
{
    cin >> a >> b >> c >> d >> e ;
   v[++k] = a ;
   v[++k] = b ;
   v[++k] = c ;
   v[++k] = d ;
   v[++k] = e ;
   for ( k = 1 ; k < 5 ; k ++ )
   for ( j = k + 1 ; j <= 5 ; j ++ )
   if ( v[k] < v[j] )
   {
       aux = v[k] ;
       v[k] = v[j] ;
       v[j] = aux ;
   }
   for ( k = 1 ; k <= 3 ; k ++ )
   s = s + v[k] ;
   cout << s ;

    return 0;
}
