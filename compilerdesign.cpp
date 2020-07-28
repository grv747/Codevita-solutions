#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        if(str.length()>10000)
        {
            return 0;
        }
        int i=0,count=0,temp=0;
        if(str[i]!='{')
            {
                count++;
            }
         stack<char>s;
         s.push(str[i]);
         for(i=1;i<str.length();i++)
         {
             if(str[i]=='{')
                {
                    if(s.top()=='<'||s.top()=='('||s.top()=='{')
                        {
                            s.push(str[i]);
                        }
                }
                if(str[i]=='(')
                {
                    if(s.top()=='{')
                    {
                        s.push(str[i]);
                    }
                }
                if(str[i]=='<')
                {
                    if(s.top()=='{')
                        {
                            temp++;
                            s.push(str[i]);
                        }
                }
                if(str[i]==')')
                {
                    if(s.top()=='(')
                    {
                        s.pop();
                    }
                }
                if(str[i]=='}')
                {
                    if(s.top()=='{')
                        {
                            s.pop();
                        }
                }
                if(str[i]=='>')
                {
                    if(s.top()=='<')
                    {
                        s.pop();
                    }
                }
         }
         if(s.empty()==true&&temp==1&&count==0)
         {
             printf("No Compilation Errors");
         }
         else
         {
             printf("Compilation Errors");
         }

    }
}
