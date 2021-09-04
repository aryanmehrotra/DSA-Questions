class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> hashmap;
        
        int pair = 0;
        for(int i=0;i<n;i++){
            if(hashmap.find(k-arr[i])!=hashmap.end()){
                pair += hashmap[(k-arr[i])];
            }
            hashmap[(arr[i])]++;
        }
        return pair;
    }
};
