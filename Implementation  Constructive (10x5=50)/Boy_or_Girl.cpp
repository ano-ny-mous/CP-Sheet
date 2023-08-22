#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<char> char_present;
    string username;
    int n, len;
    cin >> username;
    n = username.size();
    for (int i = 0; i < n; i++)
    {
        char_present.insert(username[i]);
    }
    len = char_present.size();
    if (len % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}