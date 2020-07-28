#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        int i;
        for(i=0;i<str.length();i++)
        {
            if(str[i]>122||str[i]<97)
            {
                return 0;
            }
        }
        int A[26]={0};
        int count=0;
        for(i=0;i<str.length();i++)
        {
            A[str[i]-97]++;
        }
        for(i=0;i<26;i++)
        {
            if(A[i]==0||A[i]==i+1)
            {
                count++;
            }
            else{
                count=0;
                break;
            }
        }
        if(count==0)
        {
            printf("No");
        }
        else{
            printf("Yes");
        }
        printf("\n");
    }
}
