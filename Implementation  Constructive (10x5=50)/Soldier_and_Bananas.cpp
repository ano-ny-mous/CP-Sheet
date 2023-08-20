#include <iostream>
using namespace std;

int main()
{
    int cost, total, required, borrow = 0;
    cin >> cost >> total >> required;
    for (int i = 1; i <= required; i++)
    {
        borrow += cost * i;
    }
    if(borrow > total)
    {
        cout << borrow - total << endl;
    }
    else
    {
        cout << 0 <<endl;
    }
    return 0;
}
