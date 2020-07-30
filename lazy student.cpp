#include<iostream>
#include<cmath>
using namespace std;
long double ncr(int n,int k)
{
    long long dp[n+1][k+1],i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=min(n,k);j++)
        {
            if(j==0||i==j)
            {
                dp[i][j]=1%1000000007;
            }
            else
            {
                dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%1000000007;
            }
            long double result=fmod(dp[n][k],1000000007);
            return result;
        }
    }
}
int main()
{
    int te;
    cin>>te;
    while(te--)
    {
        int n,t,m;
        cin>>n>>t>>m;
        if(n-m<t)
        {
            printf("1\n");
        }
        else
        {
         double result1= ncr(n,n-m);
         double result2=ncr(n,t);
         double x=result1/result2;
         double y=1-fmod(x,1000000007);
        printf("%lf",y);
        }
    }
}
