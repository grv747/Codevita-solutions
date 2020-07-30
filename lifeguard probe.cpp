#include<iostream>
#include<climits>
using namespace std;
int main()
{
    long double x_l,y_l,x_w,y_w,f;
    long double t1,t=INT_MAX,shift,result;

    cin>>x_l>>y_l>>x_w>>y_w>>f;
    if(x_l>x_w)
    {
         shift=x_w;
        while(shift<=x_l)
        {
            t1=((shift-x_w)*(shift-x_w)+y_w*y_w)/1+((shift-x_l)*(shift-x_l)+y_l*y_l)/f;
            if(t1<t)
            {
                t=t1;
                result=shift;
            }
            shift=shift+0.0000001;
        }
    }
    else
    {
        shift=x_w;
           while(shift>=x_l)
        {
            t1=((shift-x_w)*(shift-x_w)+y_w*y_w)/1+((shift-x_l)*(shift-x_l)+y_l*y_l)/f;
            if(t1<t)
            {
                t=t1;
                result=shift;
            }
            shift=shift-0.0000001;
        }
    }
    printf("%.6Lf",result);
}
