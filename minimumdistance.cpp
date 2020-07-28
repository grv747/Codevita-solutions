#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x,y,va,vb;
    cin>>x>>y>>va>>vb;
    if(x<0||y<0||va<0||vb<0)
    {
        printf("Invalid Input");
        return 0;
    }
   double di;
   di=sqrt(pow(x,2)+pow(y,2));
   while(x>=0||y>=0)
   {
       x=x-va;
       y=y-vb;
       double d;
       d=sqrt(pow(x,2)+pow(y,2));
       if(d<di)
       {
           di=d;
       }
   }
   if(di==0)
   {
       printf("0.0");
   }
   else
    {
     printf("%.11f",di);
   }


}
