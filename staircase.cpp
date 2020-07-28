#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int dp[3][n+1];
    for(i=1;i<3;i++)
    {
        dp[i][0]=1;
    }
    for(i=0;i<n+1;i++)
    {
        dp[0][i]=0;
    }
    for(i=1;i<n+1;i++)
    {
        dp[1][i]=1;
    }
    for(i=2;i<3;i++)
    {
        for(j=1;j<n+1;j++)
        {
            if(j>=i)
            {
                dp[i][j]=dp[i-1][j]+1+dp[i][j-i];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    printf("%d",dp[2][n]);
}
