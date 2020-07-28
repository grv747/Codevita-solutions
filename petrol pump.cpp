#include <iostream>
#include<sstream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{

	    int sum=0,i,n,x,j,t;
	    string s;
     vector<int> v1;
      getline(cin, s, '\n');
      stringstream ss(s);
     while(ss>>t)
    {
        sum+=t;
        v1.push_back(t);
    }
    n=v1.size();

	    int a[n];
	    for(i=0;i<n;i++)
	    {
	       a[i]=v1[i];
	    }

	    bool dp[n+1][sum+1];
	    for(i=1;i<sum+1;i++)
	    {
	        dp[0][i]=false;
	    }
	    for(i=0;i<n+1;i++)
	    {
	        dp[i][0]=true;
	    }
	    for(i=1;i<n+1;i++)
	    {
	        for(j=1;j<sum+1;j++)
	        {
	            if(j>=a[i-1])
	            {
	                dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
	            }
	            else
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    for(j=sum/2;j>=0;j--)
	    {
	        if(dp[n][j]==true)
	        {
	           x=sum-2*j;
	            break;
	        }
	    }
	    x=x+j;

	   printf("%d\n",x);

	return 0;
}
