#include <iostream>
using namespace std;

bool has_at_least_k_smaller(long long n, long long m, long long k, long long mid)
{
    long long count = 0;
    for (long long i = 1; i <= n; i++)
    {
        count += min(m, mid / i);
    }
    return count >= k;
}

long long kthLargestNumber(long long n, long long m, long long k)
{
    long long low = 1, high = n * m;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        if (has_at_least_k_smaller(n, m, k, mid))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    if (k == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        long long result = kthLargestNumber(n, m, k);
        cout << result << endl;
    }
    return 0;
}
