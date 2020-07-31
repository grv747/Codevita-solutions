#include<iostream>
using namespace std;
int main()
{
    int i,j,minlen,maxlen,minwidth,maxwidth,area,x,y,count=0;
    cin>>minlen>>maxlen>>minwidth>>maxwidth;
    for(i=minlen;i<=maxlen;i++)
    {
        for(j=minwidth;j<=maxwidth;j++)
        {
           x=i;
           y=j;
           area=i*j;
           while(area!=0)
           {
               int s=min(x,y);
               area=area-s*s;
               y=min(y,x-y);
               x=;
               count++;

           }
        }
    }
    printf("%d",count);
}
