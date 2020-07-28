#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int x;
  x=(n*(n+1))/2;
  int a=6;
  int d=22;
  vector<int>v;
  v.push_back(a);
  int i;
  for(i=1;i<x;i++)
  {
      a=a+d;
      d=d+16;
      v.push_back(a);
  }
  int t=1,temp=0;
  while(temp<v.size())
  {
    int x=t;
    while(x--)
    {
        int count=0;
        int g=v[temp];
       while(g!=0)
       {
           g=g/10;
           count++;
       }
       if(count==1)
       {

          printf("0000");
          printf("%d ",v[temp]);
          temp++;
       }
       if(count==2)
       {
           printf("000");
          printf("%d ",v[temp]);
          temp++;
       }
       if(count==3)
       {
            printf("00");
            printf("%d ",v[temp]);
            temp++;
       }
       if(count==4)
       {
            printf("0");
            printf("%d ",v[temp]);
            temp++;
       }
       if(count==5)
       {
            printf("%d ",v[temp]);
            temp++;
       }

    }
    printf("\n");
    t++;
  }
}
