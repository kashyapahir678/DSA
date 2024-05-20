
#include <stdio.h>


int shorted(int arr[100],int capicity, int index, int size, int element){
    
    
    
    if(size>=capicity){
        return 1;
    }
    else{
        for(int i=size-1; i>=index; i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
    }
    
    for(int i=0; i<=size; i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    
    return  0;
    
}
    



int main() {
    
    int arr[100] = {1,5,6,8,12};
    int size=5;
    int element =66;
    int capicity=100;
    int index=2;
    
    shorted(arr,capicity, index, size, element);
    
    

    return 0;
}