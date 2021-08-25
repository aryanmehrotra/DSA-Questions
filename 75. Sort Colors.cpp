class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero = 0,one = 0,two = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 1) one++;
            if(nums[i] == 0) zero++;
            if(nums[i] == 2) two++;
        }
        int i = 0;
        while(zero!=0)
        {
            nums[i++] = 0;
            zero--;
        }
        while(one!=0)
        {
            nums[i++] = 1;
            one--;
        }
        while(two!=0)
        {
            nums[i++] = 2;
            two--;
        }        
    }
};
