#include <iostream>
#include <vector>
using namespace std;

int minMovesToMakeArrayGood(vector<int>& a) 
{
    int n = a.size();
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; ++i) 
    {
        if (i % 2 == 0 && a[i] % 2 == 1) 
        {
            evenCount++;
        } 
        else if (i % 2 == 1 && a[i] % 2 == 0) 
        {
            oddCount++;
        }
    }
    if (evenCount != oddCount) 
    {
        return -1;
    }
    return evenCount;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        int result = minMovesToMakeArrayGood(a);
        cout << result << endl;
    }
    return 0;
}
