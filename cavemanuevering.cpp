#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int dp[n][m];
    for(i=1;i<n;i++)
    {
        dp[i][0]=1;
    }
    for(i=1;i<m;i++)
    {
        dp[0][i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    printf("%d",dp[n-1][m-1]);

}
