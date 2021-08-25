class Solution {
public:
    void reverseString(vector<char>& s) {        
//         Approach 1
//         int i = 0;
//         int j = s.size()-1;        
//         while(i<j)
//         {
//             char temp = s[i];
//             s[i] = s[j];
//             s[j] = temp;
//             i++;
//             j--;
//         }        

        
        
        
        // Approach 2
        
        int n = s.size();
        for(int i=0;i<n/2;i++){
            swap(s[i],s[n-i-1]);
        }
    }
};
