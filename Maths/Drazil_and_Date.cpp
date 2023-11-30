#include <iostream>
using namespace std;

int main()
{
    long long x, y, step, dist;
    cin >> x >> y >> step;
    dist = abs(x) + abs(y);
    if (step < dist)
    {
        cout << "No" << endl;
    }
    else
    {
        dist = dist - step;
        if (dist % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
