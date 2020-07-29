#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
struct ele
{
    int a,b,c;
};
int main()
{
  int n,i,j,count=0;
  cin>>n;
  ele cars[n];
  vector<float>v;
  float dist,time,diff,x;
  for(i=0;i<n;i++)
  {
      cin>>cars[i].a;
      cin>>cars[i].b;
      cin>>cars[i].c;
      dist=sqrt(cars[i].a*cars[i].a+cars[i].b*cars[i].b);
      time=dist/cars[i].c;
      diff=ceil(time)-time;
      if(diff>=0.5)
      {
          x=floor(time);
      }
      else
      {
        x=ceil(time);
      }
      v.push_back(x);
  }
  for(i=0;i<v.size();i++)
  {
      for(j=i+1;j<v.size();j++)
      {
          if(v[i]==v[j])
          {
              count++;
          }
      }
  }
  printf("%d",count);

}
