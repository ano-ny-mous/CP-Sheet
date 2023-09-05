#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int x;
        cin >> x;
        int d = x % 10;
        int len = 0;
        while (x) 
        {
            len++;
            x /= 10;
        }
        int ans = (d - 1) * 10 + len * (len + 1) / 2;
        cout << ans << endl;
    }
    return 0;
}

