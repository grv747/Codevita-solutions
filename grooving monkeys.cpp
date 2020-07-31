#include<iostream>
#include<set>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int calculate(int s[],int x)
{
    int ans=s[0];
    for(int i=1;i<x;i++)
    {
        ans=(ans*s[i])/gcd(s[i],ans);
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,a[n],j;
        set<int>s;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            x--;
            a[i]=x;
        }
        for(i=0;i<n;i++)
        {
             if(a[i]==0)
             {
                 continue;
             }
             int count=0;
             int current=i;
             int block=i;
             while(true)
             {
                 current=a[current];
                 a[block]=0;
                 block=current;
                 count++;
                 if(current==i)
                 {
                     break;
                 }
             }
             s.insert(count);
        }
        if(s.size()==1)
        {
            for(auto it=s.begin();it!=s.end();it++)
            {
                printf("%d",*it);
            }
        }
        else{
            int x=s.size();
            int helper[x];
            j=0;
           for(auto it=s.begin();it!=s.end();it++)
           {
               helper[j]=*it;
               j++;
           }
            int result=calculate(helper,x);
            printf("%d",result);
        }
    }
}
