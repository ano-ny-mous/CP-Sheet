#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    long long maxOffices = pow(2, n + 1) - 2;
    cout << maxOffices << endl;
    return 0;
}
