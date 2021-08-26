class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size()-1;
        int ans = 0,curr=-1,next = 0;
        for(int i=0;next<n;i++)
        {
            if(i>curr) ans++,curr = next;
            next = max(next,nums[i]+i);
        }
        return ans;
    }
};
