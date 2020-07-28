#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i,j;
  vector<int>v;

  for(i=3;i<=n;i++)
  {
      int temp=0;
   for(j=1;j<=i;j++)
   {
       if(i%j==0)
       {
           temp++;
       }
   }
   if(temp==2)
   {
       v.push_back(i);
   }
  }
  int count=0;
  for(i=0;i<v.size();i++)
  {
      if(v[i]>n)
      {
          break;
      }
      int j=0;
      int a=2;
      while(a!=v[i] &&a<v[i])
      {
         a=a+v[j];
         j++;
      }
      if(a==v[i])
      {
          count++;
      }
  }
  printf("%d",count);
}
