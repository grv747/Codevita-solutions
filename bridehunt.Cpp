#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m;
int A[1000][1000];
int f1(int i,int j)
{
    if(i<1 || i>n||j<1||j>m ||A[i][j]==0)
    {
        return 0;
    }
    return 1;
}
int f2(int i,int j)
{
    if(A[i][j]==0)
    {
        return 0;
    }
    return f1(i+1,j)+f1(i+1,j+1)+f1(i+1,j-1)+f1(i,j+1)+f1(i,j-1)+f1(i-1,j)+f1(i-1,j+1)+f1(i-1,j-1);
}
int main()
{
   int x,y;
   cin>>n>>m;

    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
        cin>>A[i][j];
        }
    }
    int b_count=INT_MIN;
    int dist=0;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=m;j++)
        {
        A[i][j]=f2(i,j);

        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1&j==1)
            {
                continue;
            }
            if(b_count<A[i][j])
            {
                b_count=A[i][j];
                dist=i-1+j-1;
                 x=i;
                 y=j;
            }
            if(b_count==A[i][j])
            {
                if(i-1+j-1<dist)
                {
                    dist=i-1+j-1;
                     x=i;
                     y=j;
                }
            }

        }
    }
    printf("%d:%d:%d",x,y,b_count);
    return 0;
}
