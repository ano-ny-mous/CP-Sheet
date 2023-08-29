#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int pages;
    cin >> pages;
    vector<int> days(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> days[i];
    }
    int j;
    while (pages)
    {
        for (j = 0; j < 7; j++)
        {
            pages -= days[j];
            if (pages <= 0)
            {
                cout << j + 1 << endl;
                return 0;
            }
        }
    }
    return 0;
}