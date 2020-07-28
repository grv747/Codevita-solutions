#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n,k,i;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
        }
    }
    if(k>v.size())
    {
        printf("1");
    }
    else{
        printf("%d ",v[k]);
    }
}
