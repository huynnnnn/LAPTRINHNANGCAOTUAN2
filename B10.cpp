#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    const int MAX_N = 1000;
    double vectorA[MAX_N], vectorB[MAX_N];
    int n;
    cin >> n;
    For (i, 0, n - 1)
        cin >> vectorA[i];
    For (i, 0, n - 1)
        cin >> vectorB[i];
    double product = 0;
    For (i, 0, n - 1)
        product += (vectorA[i] * vectorB[i]);
    cout << fixed << setprecision(2) << product;
}
