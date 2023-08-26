#include <iostream>
using namespace std;

int main()
{
    string table;
    string hand;
    cin >> table;
    for (int i = 0; i < 5; i++)
    {
        cin >> hand;
        if (hand[0] == table[0] || hand[1] == table[1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}