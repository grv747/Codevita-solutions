#include<iostream>
#include<cmath>
using namespace std;
long long fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	long long result=1;
	for(int i=1;i<=n;i++)
	{
		result=result*i;
	}
	return result;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,n,i;
        cin>>r>>n;
       int x=floor(n/r);
       int table[r]={x};
       int leftover=n-x*r;
       if(leftover!=0)
       {
           for(i=0;i<r;i++)
           {
               if(leftover!=0)
               {
                   table[i]++;
                   leftover--;
               }
               else
               {
                  break;
               }
           }
       }
       long long t=1,result;
       for(i=0;i<r;i++)
       {
            result=fact(n)/fact(n-table[i]);
           result=result/fact(table[i]);
           n=n-table[i];
           t=t*result;
       }
       printf("%lli",t);

    }
}
