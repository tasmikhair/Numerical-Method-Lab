#include <bits/stdc++.h>
using namespace std;
#define f(x) (1.0 / x)
int main()
{
    double lower, upper;
    cout << "ENTER THE LOWER LIMIT: ";
    cin >> lower;
    cout << "\n";
    cout << "ENTER THE UPPER LIMIT: ";
    cin >> upper;
    double interval;
    cout << "\nENTER THE VALUE OF n : ";
    cin >> interval;
    double h = (upper - lower) / interval;
    double ans = f(lower) + f(upper);
    for (double i = 1; i < interval; i++)
    {
        double x = lower + i * h;
        if ((int)i % 2 != 0)
            ans += 4 * f(x);
        else
            ans += 2 * f(x);
    }
    cout << fixed << setprecision(2) << ans * h / 3 << endl;
    return 0;
}