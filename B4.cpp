#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    int total, totalLegs;
    cin >> total >> totalLegs;
    int numChicken = (4*total - totalLegs);
    if(numChicken % 2 == 0 && numChicken >= 0)
    {
        cout << "chicken = " << numChicken/2 <<", ";
        cout << "dog = " << total - numChicken/2;
    }
    else
        cout << "invalid";
}
