#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x,count=0,j,k;
        cin>>n;
        vector<string>v;
        for(k=0;k<n;k++)
        {
           cin>>x;
           string str=to_string(x);
           int imax=INT_MIN,imin=INT_MAX;
           for(i=0;i<str.length();i++)
           {
               if(str[i]-'0'<imin)
               {
                   imin=str[i]-'0';
               }
               if(str[i]-'0'>imax)
               {
                   imax=str[i]-'0';
               }

           }

               int digit=imax*11+imin*7;

               string pass=to_string(digit);


               if(pass.length()==3)
               {
                   string r=pass.substr(1,2);


                   v.push_back(r);

               }
               else
               {
                    v.push_back(pass);
               }

           }


         for(i=0;i<v.size();i=i+2)
         {
             if(v[i].length()!=0)
             {
                 string g=v[i];
                 for(j=i+2;j<v.size();j=j+2)
                 {
                     if(v[j].length()!=0)
                     {
                         string gt=v[j];
                         if(g[0]==gt[0])
                         {
                             count++;
                             v[i].clear();
                             v[j].clear();
                         }
                     }
                 }
             }
         }
         for(i=1;i<v.size();i=i+2)
         {
             if(v[i].length()!=0)
             {
                 string m=v[i];
                 for(j=i+2;j<v.size();j=j+2)
                 {
                     if(v[j].length()!=0)
                     {
                         string mt=v[j];
                         if(m[0]==mt[0])
                         {
                             count++;
                             v[i].clear();
                             v[j].clear();
                         }
                     }
                 }
             }
         }
         printf("%d\n",count);

    }
}
