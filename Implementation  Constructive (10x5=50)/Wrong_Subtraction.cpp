#include <iostream>
using namespace std;

int main()
{
    int num, subs;
    cin >> num;
    cin >> subs;
    for (int i = 0; i < subs; i++)
    {
        int rem = num % 10;
        if (rem > 0)
        {
            num -= 1;
        }
        else
        {
            num /= 10;
        }
    }
    cout << num << endl;
}
