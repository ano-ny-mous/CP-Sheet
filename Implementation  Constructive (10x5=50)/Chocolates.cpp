#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long ans = 0;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        a[i - 1] = min(a[i - 1], max(0LL, a[i] - 1));
    }
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}
