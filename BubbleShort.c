// Online C compiler to run C program online
#include <stdio.h>

void bubblesort(int arr[5],int temp, int n){
    
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    
    printf("\n");
    
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    } 
    
   for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    
   
}

int main() {
    
    int arr[5] = {50,6,91,10,21};
    int temp;
    int n=5;
    
    bubblesort(arr,temp,n);
     
    
    return 0;
}