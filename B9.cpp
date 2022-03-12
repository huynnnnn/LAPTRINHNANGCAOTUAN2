#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    const int MAX_N = 1000;
    double arrayX[MAX_N];
    int n;
    cin >> n;
    For (i, 0, n - 1)
        cin >> arrayX[i];
    Forn (i, n - 1, 0)
        cout << fixed << setprecision(2) << arrayX[i] << ' ';
}
