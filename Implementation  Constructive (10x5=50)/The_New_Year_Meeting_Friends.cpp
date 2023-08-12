#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> dist(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> dist[i];
    }
    sort(dist.begin(), dist.end());
    int mini = dist[2] - dist[1] + dist[1] - dist[0];
    cout << mini << endl;
    return 0;
}