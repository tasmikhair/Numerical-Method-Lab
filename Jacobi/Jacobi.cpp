#include <iostream>
#include <iomanip>
#include <math.h>
#define nl "\n"
#define f1(x, y, z) (12 - 2 * y - z) / 5
#define f2(x, y, z) (15 - x - 2 * z) / 4
#define f3(x, y, z) (20 - x - 2 * y) / 5

using namespace std;
int main()
{
    float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;
    int step = 1;
    cout << setprecision(6) << fixed;
    cout << nl << "-----------------Input-------------------"<<nl;
    cout << "Enter tolerable error: ";
    cin >> e;
    cout << nl << "-----------------Output-------------------";
    cout << nl << "Count\tx\t\ty\t\tz" << nl;
    do
    {
        x1 = f1(x0, y0, z0);
        y1 = f2(x0, y0, z0);
        z1 = f3(x0, y0, z0);
        cout << step << "\t" << x1 << "\t" << y1 << "\t" << z1 << endl;
        e1 = fabs(x0 - x1);
        e2 = fabs(y0 - y1);
        e3 = fabs(z0 - z1);
        step++;
        x0 = x1;
        y0 = y1;
        z0 = z1;
    } while (e1 > e && e2 > e && e3 > e);

    cout << nl << "Solution: x = " << x1 << ", y = " << y1 << " and z = " << z1;
}
