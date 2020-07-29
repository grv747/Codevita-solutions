#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    int r1,r2;
    cin>>r1>>r2;
    if(r1<r2)
    {
        printf("%d",n);
        return 0;
    }
    long long revenue;
    cin>>revenue;
    int x,month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0;i<=n;i++)
    {
        int nontv=i;
        int tv=n-i;
        long long int cost=0;
        for(j=0;j<12;j++)
        {
            for(k=1;k<=month[j];k++)
            {
                 x=min((6-j-1)*(6-j-1)+abs(k-15),n);
                 if(x>=tv)
                 {
                     cost=cost+(x-tv)*r1+x*r2 ;
                 }
                 else
                 {
                     cost=cost+x*r2;
                 }
                 if(cost>=revenue)
                 {
                     printf("%d",tv);
                     return 0;
                 }
            }
        }
    }
printf("%d",n);


}
