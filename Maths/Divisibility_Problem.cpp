#include <iostream>
using namespace std;

int min_moves_to_divisible(int a, int b)
{
    if (a % b == 0)
    {
        return 0;
    }
    else
    {
        return b - (a % b);
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int a, b;
        cin >> a >> b;
        int result = min_moves_to_divisible(a, b);
        cout << result << endl;
    }
    return 0;
}
