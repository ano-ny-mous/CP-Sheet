#include<iostream>
using namespace std;

int main() 
{
    long long x, y, z;
    cin >> x >> y >> z;
    long long total = x / z + y / z;
    x %= z;
    y %= z;
    if (x + y >= z) 
    {
        cout << total + 1 << " " << min(z - x, z - y) << endl;
    } 
    else 
    {
        cout << total << " " << 0 << endl;
    }
    return 0;
}
