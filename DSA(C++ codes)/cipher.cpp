#include <bits/stdc++.h>  
 using namespace std;  
  int main()  
	  {  
    
    string s;  
    long long key;  
    cin>>s;  
    cin>>key;  
    string ans="";  
    for(int i=0;i<s.size();i++){  
      if(s[i]>='a' && s[i]<='z') ans += ((s[i]-'a'+ key)%26+ 'a');  
      else if(s[i]>='A' && s[i]<='Z') ans += ((s[i]-'A' +key)%26+ 'A');  
      else if(s[i]>='0' && s[i]<='9') ans += ((s[i]-'0'+key)%10+'0');  
      else ans += s[i];  
    }  
    cout<<ans;  
    return 0;  
  }  
