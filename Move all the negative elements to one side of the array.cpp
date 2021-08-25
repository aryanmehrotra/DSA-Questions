#include<iostream>

using namespace std;

void shiftall(int arr[],int start,int end)
{
    while(start<=end)
    {
        if(arr[start] < 0 and arr[end] < 0)
        {
            start++;
        }
        else if(arr[start]>0 and arr[end] <0 )
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;            
            start++;
            end--;
        }
        else if(arr[start] > 0 and arr[end] > 0)
        {
            end--;
        }
        else{
            start++;
            end--;
        }
    }
}

void display(int arr[], int right){
   
  // Loop to iterate over the element
  // of the given array
  for (int i=0;i<=right;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
 
// Driver Code
int main()
{
  int arr[] = {-12, 11, -13, -5,
               6, -7, 5, -3, 11};
  int arr_size = sizeof(arr) /
                sizeof(arr[0]);
   
  // Function Call
  shiftall(arr,0,arr_size-1);
  display(arr,arr_size-1);
  return 0;
}
