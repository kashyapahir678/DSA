#include <stdio.h>

int delete(int index, int arr[100],int n){

    printf("enter the size of array ");
    scanf("%d",&n);
    
    printf("Where do you want to add to the index? ");
    scanf("%d",&index);
    
    if(n>=index){
        
      for(int k=0; k<n; k++){
        scanf("%d",&arr[k]);
      }

     for(int k=0; k<n; k++){    
        printf("%d \t",arr[k]);
      }
      
      printf("\n");
      
      //deleting array

        for(int i=index-1; i<=n; i++){
          arr[i] = arr[i+1];
        }

        for(int i=0; i<n-1; i++){
           printf("%d \t",arr[i]);
        }
        
    }
    else{
        printf("no element found!");
    }

    printf("\n");

    return 0;
}

int main(){

    int index ;
    int arr[100];
    int n;


    delete(index, arr,n);

    return 0;
}