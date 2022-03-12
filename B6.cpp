#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    int n;
    cin >> n;
    For (y, -n, n)
    {
        For (x, -n, n)
        {
            int temp = (y >= 0 ? -y : y);
            if (-(n + temp) <= x && x <= n + temp)
                cout << "* ";
            else
                cout << ". ";
        }
        cout << '\n';
    }
}
