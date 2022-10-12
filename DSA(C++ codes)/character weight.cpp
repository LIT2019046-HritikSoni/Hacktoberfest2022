#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=0;
    
    char s[100];
    
    cin>>s;
    int w=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a')
        {
            w+=1;
        }
        else
        {
            w+=1+(int (s[i])-'a');
        }
        ++i;
    }
    cout<<w;
    return 0;
}
