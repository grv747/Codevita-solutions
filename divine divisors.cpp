#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    vector<long long>v;
    long long n,i,rslt;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                v.push_back(i);
            }
            else
            {
                v.push_back(i);
                rslt=n/i;
                v.push_back(rslt);
            }
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        printf("%lli ",v[i]);
    }
}
