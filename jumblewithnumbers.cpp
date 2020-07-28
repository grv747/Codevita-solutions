#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long t1,t2,m,i,j=0,k=0,t;
    cin>>t1>>t2>>m;
    long x=t2-t1+1;
    long M[x],J[x];
    long matthew,john;
    vector<long>v;
     for(i=t1;i<=t2;i++)
     {
         matthew=i*(2*i-1);
         printf("%li \n",matthew);
         M[j]=matthew;
         j++;
         john=i*(i+1)/2;
         printf("%li \n",john);
         J[k]=john;
         k++;
     }
     for(i=0;i<x;i++)
     {
         t=M[i];

             for(j=0;j<x;j++)
             {
                 if(J[j]==t)
                 {
                     v.push_back(t);
                       break;
                 }
             }
     }

     for(i=0;i<v.size();i++)
     {
        cout<<v[i]<<"";
     }
     if(m<=v.size())
     {
         printf("%li ",v[m-1]);
     }
     else{

        printf("No number is present at this index");
     }
}
