#include <iostream>
using namespace std;

int main()
{
    string num;
    cin >> num;
    int n = num.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] == '4' || num[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
