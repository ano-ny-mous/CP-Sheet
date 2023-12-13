#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    string wires;
    cin >> wires;
    stack<char> wireStack;
    for (char currentWire : wires) 
    {
        if (!wireStack.empty() && wireStack.top() == currentWire) 
        {
            wireStack.pop(); 
        } 
        else 
        {
            wireStack.push(currentWire);
        }
    }
    if (wireStack.empty()) 
    {
        cout << "Yes" << endl;
    } 
    else 
    {
        cout << "No" << endl;
    }
    return 0;
}
