#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
double exp_int(int f)
{
    if (f == 0)
        return 1.0;
    const double e = 2.718281828459045235360287471352;
    double ans = exp_int(f / 2);
    double res = ans * ans;
    if (f % 2 != 0)
        return res * e;
    else
        return res;
}
int main()
{
    int x;
    cin >> x;
    double sum = 1, oldSum = 0;
    double ans = 1;
    int i = 1;
    while (sum - oldSum > 0.001)
    {
        oldSum = sum;
        ans = (ans * x) / i;
        sum += ans;
        i++;
    }
    cout << fixed << setprecision(4) << sum;
}
