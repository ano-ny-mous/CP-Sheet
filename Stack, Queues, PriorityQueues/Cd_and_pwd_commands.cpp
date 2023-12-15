#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

string currentDir = "/";
stack<string> st;

string pwd() 
{
    if (st.empty()) 
    {
        return "/";
    } 
    else 
    {
        string result;
        stack<string> temp = st;
        while (!temp.empty()) 
        {
            result = "/" + temp.top() + result ;
            temp.pop();
        }
        return result+"/";
    }
}

void cd(const string& path) 
{
    stringstream tokenization(path);
    string token;
    while (getline(tokenization, token, '/')) 
    {
        if (token == "..") 
        {
            if (!st.empty()) 
            {
                st.pop();
            }
        } 
        else if (!token.empty()) 
        {
            st.push(token);
        }
    }
}

int main() 
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) 
    {
        string command, path;
        cin >> command;
        if (command == "pwd") 
        {
            cout << pwd() << endl;
        } 
        else if (command == "cd") 
        {
            cin >> path;
            if (path[0] == '/') 
            {
                while (!st.empty()) 
                {
                    st.pop();
                }
            }
            cd(path);
        }
    }
    return 0;
}
