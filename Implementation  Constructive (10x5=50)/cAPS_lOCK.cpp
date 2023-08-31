#include <iostream>
using namespace std;

int main()
{
    string word;
    int n;
    cin >> word;
    n = word.size();
    bool caps = true;
    for (int i = 1; i < n; i++)
    {
        if (islower(word[i]))
        {
            caps = false;
            break;
        }
    }
    if (caps)
    {
        for (int i = 0; i < n; i++)
        {
            if (isupper(word[i]))
            {
                word[i] = tolower(word[i]);
            }
            else
            {
                word[i] = toupper(word[i]);
            }
        }
    }
    cout << word << endl;
    return 0;
}
