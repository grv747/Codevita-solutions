#include<iostream>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int A[n],B[n],i;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>B[i];
    }
    int res=0,diff=0,temp;
    for(i=0;i<n;i++)
    {
        int pro=A[i]*B[i];
        res=res+pro;
        if(pro<0 && A[i]>0)
        {
            temp=(A[i]+2*k)*B[i];
        }
        if(pro<0 && A[i]<0)
        {
            temp=(A[i]-2*k)*B[i];
        }
      else  if(pro>0 && A[i]>0)
        {
            temp=(A[i]-2*k)*B[i];
        }
        else if(pro>0 && A[i]<0)
        {
            temp=(A[i]+2*k)*B[i];
        }
        int d=abs(pro-temp);
        if(d>diff)
        {
            diff=d;
        }
    }
    printf("%d",res-diff);
}
