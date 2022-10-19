class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr)
    {
        sort(arr.begin(),arr.end()) ;
        map<long,int>mp ;
        int res=0 ;
        for(int i=0;i<arr.size();i++)
        {
            mp.insert(make_pair(arr[i],i)) ;
        }
        vector<long>vi(arr.size(),0) ;
        vi[0]=1 ;
        for(int i=0;i<arr.size();i++)   
        {
            long ans=1 ;
            for(int j=0;j<arr.size();j++)
            {
               if(arr[i]%arr[j]==0 && mp.find(arr[i]/arr[j])!=mp.end())
                {
                    int x=mp[arr[i]/arr[j]] ;
                    ans+=vi[j]* vi[x] ;
                }
            }
            vi[i]=ans ;
           
        }
        for(int i=0;i<vi.size();i++)
        {   
            res=(res+vi[i])%1000000007 ;
        }
        return res;
    }
};
