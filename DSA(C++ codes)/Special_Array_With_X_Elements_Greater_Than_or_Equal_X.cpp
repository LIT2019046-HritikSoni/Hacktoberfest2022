class Solution {
public:
    int specialArray(vector<int>& nums) 
    {
        int l=0,h=*max_element(nums.begin(),nums.end()),res=-1 ;
        while(l<=h)
        {
            int mid=(l+h)/2,count=0 ;
            for(int i=0;i<nums.size();i++)
            {
               if(nums[i]>=mid) 
                   count++ ;
            }
            if(count>=mid)
                l=mid+1 ;
                
            else 
                h=mid-1 ;
            
            if(count==mid)
                res=mid ;
            
        }
        return res ;
    }
};
