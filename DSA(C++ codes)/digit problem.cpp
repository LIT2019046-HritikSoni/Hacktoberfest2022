#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,c=0,r;
    long long x,t1,t2;
    
    cin>>x>>k;
    t1=x;
    t2=x;
    while(t1!=0)
    {
        ++c;
        t1=t1/10;
    }
    int a[c],c1=c;
    for(i=c-1;i>=0;i--)
    {   r=t2%10;
        a[i]=r;
        t2=t2/10;
    }
    i=0;
   while(k!=0)
   {
       if(a[i]!=9)
       {
           a[i]=9;
           --k;
       }
       else if(a[i]==9)
       {
        ++i;
        continue;
       }
       ++i;
   }
   for(i=0;i<c1;i++)
   {cout<<a[i];
   }
    return 0;
}
