int majorityElement(int a[], int size)
    {
        int arr[1000000]={0};
        // your code here
        for(int i=0;i<size;i++){
            arr[a[i]]++;
        }
        int m=0;
        int k;
        for(int i=0;i<1000000;i++){
            if(arr[i]>m){
                m=arr[i];
                k=i;
            }
        }
        if(m>(size/2)){
            return k;
        }
        else{
            return -1;
        }
    }