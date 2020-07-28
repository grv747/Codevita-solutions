#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double n1,m1,n2,m2,n3,m3;
  cin>>n1>>m1>>n2>>m2>>n3>>m3;

 double l1,l2,l3;
 l1=sqrt(pow((n2-n1),2)+pow((m2-m1),2));
 l2=sqrt(pow((n3-n2),2)+pow((m3-m2),2));
 l3=sqrt(pow((n3-n1),2)+pow((m3-m1),2));
 if(l1!=0&&l2!=0&&l3!=0)
 {
     double innerr,outerr;
 double helper;
 helper=sqrt((l1+l2+l3)*(l1+l2-l3)*(l1+l3-l2)*(l3+l2-l1));
 outerr=(l1*l2*l3)/helper;
 double s=(l1+l2+l3)/2;
 double helper1;
 helper1=((s-l1)*(s-l2)*(s-l3))/s;
 innerr=sqrt(helper1);
 float area;
 area=3.14159265*(pow(outerr,2)-pow(innerr,2));

    printf("%.2f",area);
 }
 else
 {
     printf("Not Possible");
 }

}
