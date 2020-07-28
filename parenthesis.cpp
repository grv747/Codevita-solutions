
#include <iostream>
#include <stack>
#include <string>

using namespace std;
void checker(string  str,int n)
{
    int i;
    char x;
    stack<char>s;

    for(i=0;i<n;i++)
    {
        if(str[i]=='{'||str[i]=='['||str[i]=='(')
        {
            s.push(str[i]);
            continue;
        }
        if(s.empty())
        {
            printf("not balanced\n");
            return;
        }
        switch(str[i])
        {
            case ')':
            x=s.top();
            s.pop();
            if(x=='{'||x=='[')
            {
                printf("not balanced\n");
                return;
                break;
            }
            case '}':
            x=s.top();
            s.pop();
            if(x=='('||x=='[')
            {
                printf("not balanced\n");
                return;
                break;
            }
            case ']':
            x=s.top();
            s.pop();
            if(x=='('||x=='{')
            {
                printf("not balanced\n");
                return;
                break;
            }

        }

    }
    if(s.empty())
    {
     printf("balanced\n");
    return;
    }
    else
    {
        printf("not balanced\n");
        return;
    }

}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    string str;
	    cin>>str;
	    n=str.length();
	    checker(str,n);

	}
	return 0;
}
