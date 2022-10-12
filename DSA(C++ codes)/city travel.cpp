#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int s,x,n,i,t,y,cov=0;
    cin>>s>>x>>n;
   
   
   if(n>0)
   { map <long long,long long > t_y;
    for(i=1;i<=n;i++)
     {
        cin>>t>>y;
        t_y[t]=y;
     }
    map<long long,long long>::iterator itr=t_y.begin();
    for(i=1;cov<s;i++)
     {   itr=t_y.find(i);
        if(itr==t_y.end())
        {
            cov+=x;
        }
        else 
        {
            cov+=t_y[i];
        }
     }
     cout<<i-1;
     return 0;
   }
   else 
   {
       if(s%x==0)
        cout<<s/x;
       else 
        cout<<(s/x)+1;
   }
    
    return 0;
}
