#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int i,n,sum;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
          cin>>a[i];
        }
        sum=a[0];
        for(i=1;i<n;i++)
        {

            sum=a[i]+ sum;
            v.push_back(sum);
        }
        sum=0;
        for(i=0;i<v.size();i++)
        {
            sum=sum+v[i];
        }
        printf("%d",sum);
    }
}
