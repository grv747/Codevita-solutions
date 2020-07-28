#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string as,bs,str;
    cin>>as>>bs;
    if(as.length()>bs.length())
    {
        sort(as.begin(),as.end());
        printf("%lli",stoi(as));
        return 0;
    }
    if(as.length()<bs.length())
    {
        printf("-1");
        return 0;
    }

    long long a=stoi(as);
    long long b=stoi(bs);
    long long c,diff=INT_MAX,d;
    if(a>b)
    {
        do
        {
           c=stoi(as);
           d=c-b;
           if(d<=0)
           {
            next_permutation(as.begin(),as.end());
            c=stoi(as);

            break;
           }
        }while(prev_permutation(as.begin(),as.end()));
        printf("%lli",c);

    }
    else
    {
         do
        {
           c=stoi(as);
           d=b-c;
           if(d<0)
           {
            break;
           }

        }while(next_permutation(as.begin(),as.end()));
        printf("%lli",c);
    }
}
