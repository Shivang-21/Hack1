class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),m=0,c=0,prev=0;
        for(int i=0;i<n-1;i++)
        {
            if(m<i+nums[i])
                m=i+nums[i];
            if(i==prev)
            {
                c++;
                prev=m;
            }
        }
        return c;
    }
};
