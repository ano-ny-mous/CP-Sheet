#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int is_hard;
    for (int i = 0; i < n; i++)
    {
        cin >> is_hard;
        if (is_hard == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}
