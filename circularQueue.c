// Online C compiler to run C program online
#include <stdio.h>

int rare=-1;
int front=-1;

int circularInsert(int arr[],int n,int element){
    
    if(front==-1 && rare==-1){
        front=rare=0;
        arr[rare]=element;
    }
    else if(((rare+1)%n)==front){
        printf("queue is full");
    }
    else{
        rare=(rare+1)%n;
        arr[rare]=element;
    }
}

int circularDelete(int arr[],int n){
    
    if(front==-1 && rare == -1){
        printf("queue is full");
    }
    else if(front == rare){
        front=rare=-1;
    }
    else{
        printf("%d",arr[front]);
        rare=(front+1)%n;
    }
}

int circularDisplay(int arr[],int n){
    
    int i=front;
    
    if(front==-1 && rare==-1){
        printf("queue is empty!");
    }
    else{
        while(i!=rare){
            printf("%d \t",arr[i]);
            i=((i+1)%n); 
        }
    }
    printf("%d",arr[rare]);
}

int main() {
   
    int n=5;
    int arr[n];
    
    circularInsert(arr,n,23);
    circularInsert(arr,n,42);
    circularInsert(arr,n,12);
    circularInsert(arr,n,56);
    circularInsert(arr,n,86);
    circularDelete(arr,n);
    circularDisplay(arr,n);

    return 0;
}