#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    int n;
    cin >> n;
    For(i, 1, n)
        if(i % 7 == 0)
            cout << i << ' ';
}
