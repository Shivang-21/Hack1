class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),m=0,C=0,prev=0;
        for(int j=0;j<n-1;j++)
        {
            if(m<j+nums[j])
                m=j+nums[j];
            if(j==prev)
            {
                C++;
                prev=m;
            }
        }
        return C;
    }
};
