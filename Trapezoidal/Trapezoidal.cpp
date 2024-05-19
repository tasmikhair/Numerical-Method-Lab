#include <bits/stdc++.h>
using namespace std;
#define f(x) (x / (1 + x))
int main()
{
    double lower, upper;
    int n;
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the upper limit: ";
    cin >> upper;
    cout << "Enter the number of n: ";
    cin >> n;
    double h = (upper - lower) / n;
    double ans = f(lower) + f(upper);
    for (int i = 1; i < n; i++)
    {
        double x = lower + i * h;
        ans += 2 * f(x);
    }
    double result = ans * h / 2;
    cout << fixed << setprecision(3) << result << endl;
    return 0;
}
