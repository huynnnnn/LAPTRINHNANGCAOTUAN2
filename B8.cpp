#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    long long n;
    int cnt = 0;
    cin >> n;
    do
    {
        cnt++;
        n /= 10;
    }
    while (n != 0);
    cout << cnt;
}
