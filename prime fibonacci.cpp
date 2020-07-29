#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    int p,i,n=10000,j;
    string str;
    bool prime[n+1];
    vector<int>v;
    vector<int>v1;
    memset(prime,true,sizeof(prime));
    for(p=2;p*p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(i=p*p;i<=n;i=i+p)
            {
                prime[i]=false;
            }
        }
    }
    for(p=2;p<=n;p++)
    {
        if(prime[p]==true)
        {
            v.push_back(p);
        }
    }
    int x,y;
    vector<int>v3;
    cin>>x>>y;
    for(i=x;i<=y;i++)
    {
        for(j=0;j<v.size();j++)
        {
            if(v[j]==i)
            {
                v3.push_back(i);
                break;
            }
        }
    }
     for(i=0;i<v3.size();i++)
    {
        printf("%d ",v3[i]);
    }

    string s,s1,s2;
    vector<int>combination;
    for(i=0;i<v3.size();i++)
    {
        for(j=0;j<v3.size();j++)
        {
            if(i==j)
            {
                continue;
            }
            s2=to_string(v3[i]);
            s1=to_string(v3[j]);
            s=s2+s1;
            int c=stoi(s);
            combination.push_back(c);
        }
    }

    int z;
    vector<int>v2;
    for(i=0;i<combination.size();i++)
    {

       for(j=0;j<v.size();j++)
       {
           if(v[j]==combination[i])
           {
               v2.push_back(combination[i]);
               break;
           }
       }
    }
    printf("\n");
    for(i=0;i<combination.size();i++)
    {
        printf("%d ",combination[i]);
    }
    printf("\n");

    for(i=0;i<v2.size();i++)
    {
        printf("%d ",v2[i]);
    }
    sort(v2.begin(),v2.end());

    long long fib1=v2[0];

    int len=v2.size()-1;
    long long fib2=v2[len];


   long long int t,fibsize=v2.size()-3,sum;

    for(t=1;t<=fibsize;t++)
    {

        sum=fib1+fib2;
        fib1=fib2;
        fib2=sum;
    }
   printf("%lli\n",fib1);
}
