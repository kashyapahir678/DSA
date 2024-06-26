
#include <stdio.h>

int partition(int arr[],int low,int high){
    
    
    int start=low;
    int end=high;
    int pivot=arr[low];
    int temp;
    
    while(start<end){
        while(arr[start] <= pivot){
            start++;
        }
        
        while(arr[end] > pivot){
            end--;
        }
        
        if(start < end){
            temp = arr[start];
            arr[start] = arr[end];
             arr[end] = temp; 
        }
    }
    
    temp = arr[low];
    arr[low] = arr[end];
    arr[end] = temp;
    
    return end;
}

void quickSort(int arr[],int low,int high){
    
    if(low<high){
        
        int loc = partition(arr,low,high);
        
        quickSort(arr,low,loc-1);
        quickSort(arr,loc+1,high);
        
    }
    
}

int main() {
    
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    
    for(int i=0; i<=5; i++){
        printf("%d \t",arr[i]);
    }
    
    printf("\n");
    
    quickSort(arr,0,5);
    
    for(int i=0; i<=5; i++){
        printf("%d \t",arr[i]);
    }

    return 0;
}