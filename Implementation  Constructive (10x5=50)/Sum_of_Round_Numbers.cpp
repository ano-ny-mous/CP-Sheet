#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        vector<string> round;
        int n = num.size();
        for (int i = 0; i < n; i++)
        {
            if (num[i] > '0')
            {
                round.push_back(num[i] + string(n - i - 1, '0'));
            }
        }
        int sz = round.size();
        cout << sz << endl;
        for (int i = 0; i < sz; i++)
        {
            cout << round[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
