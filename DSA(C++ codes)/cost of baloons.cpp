
#include <bits/stdc++.h>


using namespace std;

int main() 
{
	int n,i,j;
	cin >> n;										
	for(i=0;i<n;i++)
	{ int c1=0,c2=0,p=0,A=0,B=0;
	    cin>>c1>>c2;
	    cin>>p;
	    for(j=0;j<p;j++)
	    {int a=0,b=0;
	        cin>>a>>b;
	        if(a==1)
	        {A+=1;
	            
	        }
	        if(b==1)
	        {
	            B+=1;
	        }
	    }
	    cout<<(c1*A)+(c2*B)<<endl;
	}
return 0;
}
