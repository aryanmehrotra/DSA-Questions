class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-2;
        int to_replace = 0;
        int from_replace = 0;
        
        for(int i=n;i>=0;i--)
        {
            if(nums[i] < nums[i+1]){
                to_replace = i;
                break;
            }
            if(i==0){
                reverse(nums.begin(),nums.end());
                return;
            }
        }
        
        for(int i=n+1;i>to_replace;i--){
            if(nums[i]>nums[to_replace]){
                from_replace = i;
                break;
            }
        }
        
        swap(nums[to_replace],nums[from_replace]);
        reverse(nums.begin()+to_replace+1,nums.end());
        
    }
};
