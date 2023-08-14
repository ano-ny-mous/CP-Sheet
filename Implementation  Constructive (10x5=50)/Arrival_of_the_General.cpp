#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_element = INT_MIN, max_ind, min_element = INT_MAX, min_ind;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp <= min_element)
        {
            min_element = temp;
            min_ind = i;
        }
        if (temp > max_element)
        {
            max_element = temp;
            max_ind = i;
        }
    }
    int first_person = max_ind;
    int last_person = n - min_ind - 1;
    int total_swaps = first_person + last_person;
    if (min_ind < max_ind)
    {
        total_swaps--;
    }
    cout << total_swaps << endl;
    return 0;
}
