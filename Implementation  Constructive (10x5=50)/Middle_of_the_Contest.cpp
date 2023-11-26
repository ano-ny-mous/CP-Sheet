#include <iostream>
using namespace std;

int main() 
{
    int h1, m1, h2, m2;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    int totalMinutes = (h2 - h1) * 60 + (m2 - m1);
    int midpointMinutes = totalMinutes / 2;
    int h3 = h1 + midpointMinutes / 60;
    int m3 = m1 + midpointMinutes % 60;
    if (m3 >= 60) 
    {
        m3 %= 60;
        h3 += 1;
    }
    if (h3 >= 24) 
    {
        h3 %= 24;
    }
    printf("%02d:%02d\n", h3, m3);
    return 0;
}
