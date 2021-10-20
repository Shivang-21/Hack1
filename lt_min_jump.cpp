class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n=nums.size(),X=0,C=0,previous=0;
        for(int j=0;j<n-1;j+=1)
        {
            if(X<j+nums[j])
               X=j+nums[j];
            if(j==previous)
            {
                C+=1;
                previous=X;
            }
        }
        return C;
    }
};
