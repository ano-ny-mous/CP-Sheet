#include <iostream>
using namespace std;

int main()
{
    int cubes, level = 1, cur_lev_cubes = 0;
    cin >> cubes;
    while (cur_lev_cubes < cubes)
    {
        cur_lev_cubes += (level * (level + 1) / 2);
        level++;
    }
    if (cur_lev_cubes == cubes)
    {
        cout << level - 1 << endl;
    }
    else
    {
        cout << level - 2 << endl;
    }
    return 0;
}