#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    int n, t = 1;
    cin >> n;
    For(i, 1, n + 1)
    {
        For(j, 1, 2*n + 1)
            if(j == t || j == 2*n + 2 - t)
                cout << "* ";
            else
                cout << ". ";
        cout << endl;
        t ++;
    }
    t = n;
    For(i, 1, n)
    {
        For(j, 1, 2*n + 1)
            if(j == t || j == 2*n + 2 - t)
                cout << "* ";
            else
                cout << ". ";
        cout << endl;
        t--;
    }
}
