#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<string,int> faces;
    faces["Tetrahedron"]=4;
    faces["Cube"]=6;
    faces["Octahedron"]=8;
    faces["Dodecahedron"]=12;
    faces["Icosahedron"]=20;
    int totalfaces=0;
    string input;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        totalfaces+=faces[input];
    }
    cout<<totalfaces<<endl;
    return 0;
}
