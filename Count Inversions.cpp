long long int mergesort(long long int *arr,long long int l,long long int mid,long long int r,long long int*temp){
        long long int i=l,j=mid+1,k=l,total=0;  // Here
        while(i<=mid and j<=r){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }else{
                total+=mid-i+1;
                temp[k++]=arr[j++];
            }
        }
        while(i<=mid){
            temp[k++]=arr[i++];
        }
        while(j<=r){
            temp[k++]=arr[j++];
        }
        for(int i=l;i<=r;i++){
            arr[i]=temp[i];
        }
        return total;
    }
    long long int merge(long long int *arr,long long int l,long long int r,long long int *temp){
        long long int mid=(l+r)/2;
        long long int inv=0;
        if(l<r){
            inv+=merge(arr,l,mid,temp);
            inv+=merge(arr,mid+1,r,temp);
            inv+=mergesort(arr,l,mid,r,temp);
        }
        return inv;
        
    }
    long long int inversionCount(long long int arr[], long long int N)
    {
        // Your Code Here
        long long int *temp=new long long int[N];
        return merge(arr,0,N-1,temp);
    }

};
