#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, modsum = 0, newval;
    cin >> n;
    vector<int> unmodarr(n);
    vector<int> modarr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> unmodarr[i];
        newval = unmodarr[i] / 2;
        modarr[i] = newval;
        modsum += newval;
    }
    for (int i = 0; i < n && modsum != 0; i++)
    {
        if (unmodarr[i] % 2 != 0)
        {
            if (modsum < 0 && unmodarr[i] > 0)
            {
                modarr[i]++;
                modsum++;
            }
            else if (modsum > 0 && unmodarr[i] < 0)
            {
                modarr[i]--;
                modsum--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << modarr[i] << endl;
    }
    return 0;
}