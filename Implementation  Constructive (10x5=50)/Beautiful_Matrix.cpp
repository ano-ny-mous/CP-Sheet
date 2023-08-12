#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x=2;
    int y=2;
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>temp;
            if(temp==1)
            {
                cout<<abs(x-i)+abs(y-j)<<endl;
            }
        }
    }
    return 0;
}