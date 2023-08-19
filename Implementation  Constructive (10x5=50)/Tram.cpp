#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, capacity = 0, max_capacity = 0, exit, enter;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> exit;
        cin >> enter;
        capacity -= exit;
        capacity += enter;
        max_capacity = max(max_capacity, capacity);
    }
    cout << max_capacity << endl;
    return 0;
}
