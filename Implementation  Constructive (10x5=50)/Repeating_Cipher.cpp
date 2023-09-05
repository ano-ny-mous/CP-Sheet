#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string encrypt;
    cin >> n;
    cin >> encrypt;
    string decrypt = "";
    int i = 0, j = 1;
    while (i < n)
    {
        decrypt += encrypt[i];
        i += j;
        j++;
    }
    cout << decrypt << endl;
    return 0;
}
