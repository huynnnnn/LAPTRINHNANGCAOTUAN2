#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;
    lowerBound = sqrt(lowerBound);
    upperBound = sqrt(upperBound);
    For(i, lowerBound, upperBound)
        cout << i*i << ' ';
}
