#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
       double N,SV,CSV,R,CR;
       cin>>N>>SV>>CSV>>R>>CR;
       if(N<20000||N>10000000||SV<20||SV>10000||CSV<-2000||CSV>2000||R<0.01||R>99.99||CR<-10||CR>10)
       {
           printf("Invalid Input");
           return 0;
       }
       double pSV;
       pSV=SV-CSV;
        printf("%.2f\n",pSV);
        double pR;
        pR=R-CR;
        printf("%.2f\n",pR);
        double CV;
        CV=ceil(N*min(SV,pSV));
        printf("%.2f\n",CV);
        double mcredit;
        mcredit=ceil(0.5*CV);
        printf("%.2f\n",mcredit);
        double acredit;
        acredit=ceil((min(pR,R)/100)*mcredit);
        printf("%.2f\n",acredit);

    }
}
