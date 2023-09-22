#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n, maxcoin = INT_MIN;
        cin >> a >> b >> c >> n;
        maxcoin = max(a, max(b, c));
        n = n - (maxcoin - a) - (maxcoin - b) - (maxcoin - c);
        if (n < 0 || n % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}