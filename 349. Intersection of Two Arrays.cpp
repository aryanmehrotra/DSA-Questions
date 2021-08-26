class Solution {
public:    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         Approch 1 (Using Set)
//         unordered_set<int> nums;
//         unordered_set<int> result;
//         int n1 = nums1.size(),n2=nums2.size();
//         if(n1>n2)
//         {
//             for(int i=0;i<n1;i++)
//             {
//                 nums.insert(nums1[i]);
//             }
//             for(int i=0;i<n2;i++)
//             {
//                 if(nums.find(nums2[i]) != nums.end()) result.insert(nums2[i]);
//             }
            
            
//         }
//         else{
//             for(int i=0;i<n2;i++)
//             {
//                 nums.insert(nums2[i]);
//             }
//             for(int i=0;i<n1;i++)
//             {
//                 if(nums.find(nums1[i]) != nums.end()) result.insert(nums1[i]);
//             }
//         }
//         nums.clear();
//         vector<int> answer(result.begin(),result.end());        
//         return answer;
        
//      Approach 2
        // vector<bool> vis(1000,false);
        // vector<int> answer;
        // unordered_map<int,int> map;
        // for(int i=0;i<nums1.size();i++) map[nums1[i]]++;
        // for(int i=0;i<nums2.size();i++) {
        //     if(map.find(nums2[i]) != map.end() and vis[nums2[i]] == false){
        //         answer.push_back(nums2[i]);
        //         vis[nums2[i]] = true;
        //     }
        // }
        // return answer;

//      Approch 3 2 Pointer
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        while(i<nums1.size() and j<nums2.size())
        {            
            if(nums1[i] == nums2[j])
            {                
                int num = nums1[i];
                ans.push_back(num);
                i++;j++;                
            }
            else if(nums1[i] < nums2[j]) i++;
            else j++;                        
        }
        vector<int>::iterator ip;
        ip = unique(ans.begin(), ans.end());
        ans.resize(distance(ans.begin(),ip));

        return ans;
        
            
        
    }
};
