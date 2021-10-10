class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,20000000);
        if(n==1)
            return 0;
        dp[n-1]=0;
        dp[n-2]=1;
        for(int i=n-3;i>=0;i--)
        {
            int range=nums[i]+i<=n-1?nums[i]+i:n-1;
            for(int j=i+1;j<=range;j++)
            {
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
        return dp[0];
    }
};