
class Solution {
public:        
    int findInd(vector<int> &arr,int left,int right,int pivot)
{
    int pivotVal = arr[pivot];
    int i = left;
        swap(arr[pivot],arr[right]);
    for(int k = left;k<right;k++)
    {
        if(arr[k] < pivotVal)
        {
            swap(arr[k],arr[i]);
            i++;
        }
    }
    swap(arr[right],arr[i]);
    return i;
}

    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // return nums[nums.size() - k];
        
        int n = nums.size();
        int left = 0;
        int right = n-1;
        while(left<=right)
        {
            int pivotInd = rand()%(right - left + 1) + left;
            int correctInd = findInd(nums,left,right,pivotInd);
            if(correctInd == n-k) return nums[correctInd];
            else if(correctInd > n-k)
            {
                right = correctInd - 1;
            }
            else{
                left = correctInd + 1;
            }
        }
        return -1;
    }
};
