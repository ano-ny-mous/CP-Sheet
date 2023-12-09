#include <iostream>
#include <algorithm>
using namespace std;

bool possible(long long mid, int stock, int need, long long &money, int price)
{
    if (mid * need <= stock)
    {
        return true;
    }
    else if (money >= (mid * need - stock) * price)
    {
        long long qtyNeeded = (mid * need - stock);
        money -= qtyNeeded * price;
        return true;
    }
    return false;
}

int main()
{
    string recipe;
    int nb, ns, nc, pb, ps, pc, b = 0, s = 0, c = 0, n;
    long long r;
    cin >> recipe;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    n = recipe.size();
    for (int i = 0; i < n; i++)
    {
        if (recipe[i] == 'B')
        {
            b++;
        }
        else if (recipe[i] == 'S')
        {
            s++;
        }
        else
        {
            c++;
        }
    }
    long long low = 0, high = 1e15, canMake = 0;
    while (low <= high)
    {
        long long money = r;
        long long mid = (low + (high - low) / 2);
        if (possible(mid, nb, b, money, pb) && possible(mid, ns, s, money, ps) && possible(mid, nc, c, money, pc))
        {
            canMake = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << canMake << endl;
}
