#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    int n;
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int>v;
    while(ss>>n)
    {
        v.push_back(n);
    }
   int rows=v.size();
   int sum=0,i,j,x;
   for(i=0;i<v.size();i++)
   {
       sum=sum+v[i];
   }
    bool dp[rows+1][sum+1];
   for(i=1;i<sum+1;i++)
   {
      dp[0][i]=false;
   }
   for(i=0;i<rows+1;i++)
   {
       dp[i][0]=true;
   }
   for(i=1;i<rows+1;i++)
   {
       for(j=1;j<sum+1;j++)
       {
           if(j<v[i-1])
           {
               dp[i][j]=dp[i-1][j];
           }
           else
           {
               dp[i][j]=dp[i-1][j]||dp[i-1][j-v[i-1]];
           }

       }
   }
   for(j=sum/2;j>=0;j--)
   {
       if(dp[rows][j]==true)
       {
            x=j;
           break;
       }
   }


   printf("%d",max(x,sum-x));

}
