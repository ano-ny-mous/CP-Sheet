#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string binary;
        cin >> binary;
        int n = binary.size();
        bool seenone = false;
        int minizero = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (binary[i] == '1')
            {
                seenone = true;
            }
            if (seenone && binary[i] == '0')
            {
                count++;
            }
            if (seenone && binary[i] == '1')
            {
                minizero += count;
                count = 0;
            }
        }
        cout << minizero << endl;
    }
    return 0;
}
