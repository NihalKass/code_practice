#include<bits/stdc++.h>
using namespace std;
bool paranthesischeaker(string str)
{
    stack<char>s;
    char x;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
        {
            s.push(str[i]);
            continue;
        }

        if(s.empty())
        return false;

        switch(str[i])
        {
            case ')':
                x = s.top();
                s.pop();
                if(str[i]=='}' || str[i]==']')
                return false;
            break;

             case '}':
                x= s.top();
                s.pop();
                if(str[i]==')' || str[i]==']')
                return false;
            break;

             case ']':
                x = s.top();
                s.pop();
                if(str[i]=='}' || str[i]==')')
                return false;
            break;
        }
    }
}
int main()
{
    string str;
    cin>>str;
    int n=paranthesischeaker(str);
    if(n==0)
    cout<<"UNBALANCED";
    else
    cout<<"BALANCED";
}