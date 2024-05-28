// Online C compiler to run C program online

#include <stdio.h>
#include <stdlib.h>

struct Node{
    
    int data;
    int ch;
    struct Node * next;
};

struct Node * head = NULL;

void InsertEnd(int val){
     
    struct Node * ptr = head;
    
    struct Node * temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
    
    if(head == NULL){
        head = temp;
        return;
    }
    
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    
    ptr->next = temp;
    return;
}

void DeleteEnd(){
    
    struct Node * ptr = head;
    
    if(head == NULL){
        printf("Linked List is Empty");
        return ;
    }
    
    struct Node * temp = NULL;
    
    while(ptr->next != NULL){
        temp = ptr;
        ptr = ptr->next;
    }
    
    if (temp == NULL) {
        head = NULL;
    } else {
        temp->next = NULL;
    }
    
    free(ptr);
    
}

void InsertStart(int value){
    
    struct Node * ptr = head;
    
    struct Node * temp = malloc(sizeof(struct Node));
    
    temp->data = value;
    temp->next = head;
    
    head = temp;
    
}

void DeleteStart(){
    
    struct Node * ptr = head;
    
    head = ptr->next;
    free(ptr);
}

void InsertMid(int position,int number){
    
     struct Node * ptr = head;
     
     struct Node * p; 
     
     struct Node * temp = malloc(sizeof(struct Node));
     
     temp->data = number;
     
     while(ptr->data!=position){
         p=ptr;
         ptr=ptr->next;
     }
     
     p->next=temp;
     temp->next=ptr;
    
}

void DeleteMid(int ind,int posi){
    
    struct Node * ptr = head;
     
     struct Node * p; 
     
     struct Node * temp = malloc(sizeof(struct Node));
     
     temp->data = ind;
     
     while(ptr->data!=posi){
         p=ptr;
         ptr=ptr->next;
     }
     
     p->next=temp;
     temp->next=ptr;
    
}

void Display(){
    
    struct Node * ptr = head;
    
    while(ptr != NULL){
        printf("%d \t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    
}

int main() {
    
    struct Node obj1 ,obj2 ,obj3 ;
    int option;
    
    obj1.data=65;
    obj1.ch='A';
    obj1.next= NULL;
    
    obj2.data=66;
    obj2.ch='B';
    obj2.next= NULL;
    
    obj3.data=67;
    obj3.ch='C';
    obj3.next= NULL;
    
    obj1.next = &obj2;
    obj2.next = &obj3;
    
    do{

   printf("\n =======Link List======");
   printf("\n 1. InsertEnd Element");
   printf("\n 2. DeleteEnd Element");
   printf("\n 3. InsertStart Element");
   printf("\n 4. DeleteStart Element");
   printf("\n 5. InsertMid Element");
   printf("\n 6. DeleteMid Element");
   printf("\n 7. Display Element");
   printf("\n 8. Exit \n");

   printf("Please select any option :- ");
   scanf("%d",&option);

   switch (option){

            case 1:
                int val;
                printf("enter the the value you want to add  ");
                scanf("%d",&val);

                InsertEnd(val);
                break;

            case 2:
                DeleteEnd();
                break;
                
            case 3:
                int value;
                printf("enter the the value you want to add  ");
                scanf("%d",&value);

                InsertStart(value);
                break;
                
            case 4:
                DeleteStart();
                break;
                
            case 5:
                int index;
                printf("which index number went add element");
                scanf("%d",&index);
                
                int position;
                printf("which position went add element");
                scanf("%d",&position);
                
                InsertMid(index,position);
                break;
                
            case 6:
                int ind;
                printf("element");
                scanf("%d",&ind);
               
                int posi;
                printf("which position went delete element");
                scanf("%d",&posi);
               
                DeleteMid(ind,posi);
                break;

            case 7:
                Display();
                break;

            case 8:
                goto end;
                break;

    }

   } 
   while(option!=8);

   end: printf("\n  ====End==== ");

return 0;
}



