#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;
    double A = 4 * M_PI * r * r;
    double V = 4 * M_PI * r * r * r / 3;
    cout << fixed << setprecision(2) << (long long)(A * 100) / 100.0 << ' ' << fixed << setprecision(2) << (long long)(V * 100)/ 100.0;
    return 0;
}
