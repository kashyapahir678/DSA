// Online C compiler to run C program online
#include <stdio.h>

int binarySerach(int arr[5],int temp,int low, int high,int val){
    

    //selection shorted
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i=0; i<5; i++){
        printf("%d",arr[i]);
    }
    
    while(low<=high){
        int mid = low+(high-low)/2;
        
        if(arr[mid] == val){
            return mid;
        }
        if(arr[mid] < val){
            low=mid+1;
        }
        else{
            high= mid-1;
        }
    }
    return -1;
}

int main() {
   
   int arr[5] = {2,4,1,9,6};
   int temp;
   int low=0;
   int high=5;
   int val=6;
   
   int result = binarySerach(arr,temp,low,high,val);
   if(result == -1) {
       printf("no element found \n");
   }
   else{
       printf(" \n result %d \t",result);
   }

    return 0;
}