
#include <stdio.h>

int rare= -1;
int front = -1;

//first in first out 

int queueInsert(int arr[],int n,int element){
    
    if(rare==n-1){
        printf("queue is full");
    }
    else if(rare==-1 && front ==-1){
        rare=front=0;
        arr[rare]=element;
    }
    else{
        rare++;
        arr[rare]=element;
    }
    
} 

int queueDelete(int arr[]){
     if(rare==-1 && front == -1){
         printf("queue is empty!");
     }
     else if(front==rare){
         front=rare=-1;
     }
     else{
         printf("%d\n",arr[front]);
         front++;
     }
}

int queueDisplay(int arr[]){
    if(rare==-1 && front==-1){
        printf("data not found");
    }
    else{
        for(int i=front; i<rare+1; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main() {
    
    int n=5;
    int arr[n];
    int element = 52;
    
  
    
    queueInsert(arr,n,10);
    queueInsert(arr,n,20);
    queueInsert(arr,n,30);
    queueInsert(arr,n,40);
    queueDisplay(arr);
    queueDelete(arr);
    
    queueDisplay(arr);
    
    

    return 0;
}