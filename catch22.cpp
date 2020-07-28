#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int f,b,t,fd,bd,count=0;
        cin>>f>>b>>t>>fd>>bd;
        if(f<=0||b<=0||t<=0||fd<=0||bd<=0)
        {
            return 0;
        }
        if(f>b)
        {
            int tf=0;
            int d=0;
            while(d!=fd)
            {
                int x=f;
                while(x--)
                {
                    d++;
                    tf=tf+t;
                    if(d==fd)
                    {
                        count++;
                        break;
                    }
                }
                if(count==1)
                {
                    break;
                }
                d=d-b;
                tf=tf+(t*b);
            }
           printf("%d ",tf);
            printf("F");
        }
        if(f<b)
        {
            int tb=0;
            int d=0;
            while(d!=-bd)
            {
                d=d+f;
            tb=tb+(t*f);
            int y=b;
             while(y--)
             {
                d--;
                tb=tb+t;
                if(d==-bd)
                {
                break;
                }

             }
            }
            printf("%d ",tb);
            printf("B");
        }
        if(f==b)
        {
            if(fd<=f)
            {
                int time=t*fd;
                printf("%d ",time);
                printf("F");
            }
            else
            {
                printf("No Ditch");

            }
        }

        printf("\n");
        }
    }

