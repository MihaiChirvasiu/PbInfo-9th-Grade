#include <iostream>

using namespace std;
float x,y;
int main()
{
    cin>>x>>y;

   if((y/x) == int(y/x)) cout<<y/x;

    else cout<<int(y/x)+1;

    return 0;
}
