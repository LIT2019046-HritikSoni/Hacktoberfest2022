class Solution {
public:
    int countSubstrings(string s, string t)
    {
       int ans=0;
   
        int n=s.size(),m=t.size() ;
      for(int I=0;I<n;I++)
      {
          
          for(int J=0;J<m;J++)
          {
              int i=I;
              int j=J;
              int diff=0;
              while(i<n and j<m and diff<=1)
              {
                  if(s[i]!=t[j])
                      diff++;
                  if(diff==1)
                      ans++;
                  i++;
                  j++;
              }
          }
      }
      
     return ans;   
    }
};
