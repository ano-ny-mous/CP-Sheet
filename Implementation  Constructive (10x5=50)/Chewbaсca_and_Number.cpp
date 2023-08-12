#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    
    string num = to_string(x);
    for (char &c : num) {
        int digit = c - '0';
        if (digit > 4) {
            c = '9' - c + '0';
        }
    }
    
    if (num[0] == '0') {
        num[0] = '9';
    }
    
    cout << num << endl;
    
    return 0;
}