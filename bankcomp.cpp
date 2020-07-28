#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double intr, k[2],p;
  int d,n1,n2,t,i,l=0,n;
  double sum,emi;
  cin>>p;
  cin>>d;

  for(i=0;i<2;i++)
  {
      cin>>n;
       sum=0;
  for(i=0;i<n;i++)
  {
    cin>>t;
      cin>>intr;
      double x=pow((1+intr),t*12);
      emi=0;
      emi=(p*(intr))/(1-1/x);
      sum=sum+emi;
  }
    k[l]=sum;
    l++;
  }
  if(k[0]<k[1])
  {
      printf("bank A");
  }
  else{
    printf("bank B");
  }
  return 0;

}
