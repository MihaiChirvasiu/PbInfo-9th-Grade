#include <iostream>

using namespace std;

int main(){
    int a, b, c, imp = 0, par = 0;
    cin >> a >> b >> c;
    if(a % 2 == 0)
        par++;
    else 
        imp++;
    if(b % 2 == 0)
        par++;
    else 
        imp++;
    if(c % 2 == 0)
        par++;
    else 
        imp++;
    if(par > imp)
        cout << "pare";
    else cout << "impare";
    return 0;
}
