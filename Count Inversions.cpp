#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void merge(long long arr[],int low,int high,int mid,long long &count){
    int t1 = mid-low+1;
    int t2 = high-mid;
    int first[t1],second[t2];
    for(int i=0;i<t1;i++){
        first[i] = arr[low+i];
    }
    for(int i=0;i<t2;i++){
        second[i] = arr[mid+1+i];
    }
    
    int a=0,b=0;
    while(a<t1 and b<t2){
        if(first[a] > second[b]){
            count= (count + (t1-a));
            b++;
            
        }
        else a++;
    }
    
    a = 0,b=0;
    int k = low;
    while(a<t1 and b<t2){
        if(first[a] < second[b]){
            arr[k] = first[a];
            a++;
        }
        else{
            arr[k] = second[b];
            b++;
        }
        k++;
    }
    while(a<t1){
        arr[k++] = first[a++];
    }
    while(b<t2){
        arr[k++] = second[b++];
    }
    
}

void mergeSort(long long arr[], long long N,long long &count,int low,int high){
    if(low<high){
        int mid = low + (high-low)/2;
        mergeSort(arr,N,count,low,mid);
        mergeSort(arr,N,count,mid+1,high);
        merge(arr,low,high,mid,count);
    }
}

    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
    long long count = 0;
    int low = 0;
    int high = N-1;
    mergeSort(arr,N,count,low,high);
    return count;
    }

};


// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
