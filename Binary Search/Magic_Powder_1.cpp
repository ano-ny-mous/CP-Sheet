#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool canMake(vector<int> &a,vector<int> &b,int mid,int k)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(b[i]>=a[i]*mid)
        {
            continue;
        }
        else if(b[i]+k>=mid*a[i])
        {
            k=k-(mid*a[i]-b[i]);
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n,k,low=0,high,cookies=0;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }
    high=*max_element(b.begin(),b.end())+k;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(canMake(a,b,mid,k))
        {
            cookies=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<cookies<<endl;
}
