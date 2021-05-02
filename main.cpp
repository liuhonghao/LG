#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    double n=0.0;
    for(int i=1;i<=k;i++)
    {
        n+=1/i;
    }
    cout<<(int)n+1<<endl;
    return 0;
}
