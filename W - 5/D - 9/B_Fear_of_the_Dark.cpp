#include <bits/stdc++.h>
using namespace std;
#define db double
db b_to_a_distance(int ax, int ay, int bx, int by)
{
    return sqrt(((ax - bx) * (ax - bx)) + ((ay - by) * (ay - by))); // sutro
}
bool isDistance_ok(int ax, int ay, int px, int py, db rad)
{
    db radios = b_to_a_distance(ax, ay, px, py);
    return (rad - radios) > 1e-15; // radios <= rad;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int px, py;
        cin >> px >> py;
        int ax, ay;
        cin >> ax >> ay;
        int bx, by;
        cin >> bx >> by;
        db l = 0.0, r = INT_MAX * 1.0;
        db ans;
        // a<=b -> (b-a) > 1e-15;
        // a==b -> fabs(a-b) < 1e-15;
        while ((r - l) > 1e-15)
        {
            db rad = l + (r - l) / 2;
            if (isDistance_ok(ax, ay, 0, 0, rad) && isDistance_ok(ax, ay, px, py, rad))
            {
                ans = rad;
                r = rad;
            }

            else if (isDistance_ok(bx, by, 0, 0, rad) && isDistance_ok(bx, by, px, py, rad))
            {
                ans = rad;
                r = rad;
            }

            else if (isDistance_ok(ax, ay, 0, 0, rad) && isDistance_ok(bx, by, px, py, rad) &&
                     ((2 * rad) - b_to_a_distance(ax, ay, bx, by)) > 1e-15) // (2 * b_to_a_distance(ax, ay, bx, by)) <= 2 * rad
            {
                ans = rad;
                r = rad;
            }

            else if (isDistance_ok(bx, by, 0, 0, rad) && isDistance_ok(ax, ay, px, py, rad) &&
                     ((2 * rad) - b_to_a_distance(ax, ay, bx, by)) > 1e-15)
            {
                ans = rad;
                r = rad;
            }
            else
            {
                l = rad;
            }
        }
        cout << fixed << setprecision(10) << ans << endl;
    }
    return 0;
}