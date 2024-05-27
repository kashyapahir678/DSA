
#include <stdio.h>
#include <stdlib.h>

struct Node{
    
    int data;
    int ch;
    struct Node * next;
};

struct Node * head = NULL;

void Insert(int val){
    
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

int main() {
    
    struct Node obj1 ,obj2 ,obj3 ;
    
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
    
    

return 0;
}



// #include <stdio.h>
// #include <stdlib.h>

// struct Node{
    
//     int data;
//     int ch;
//     struct Node * next;
// };

// struct Node * head = NULL;

// void Insert(int val){
    
//     struct Node * ptr = head;
    
//     struct Node * temp = malloc(sizeof(struct Node));
//     temp->data = val;
//     temp->next = NULL;
    
//     if(head == NULL){
//         head = temp;
//         return;
//     }
    
//     while(ptr->next != NULL){
//         ptr = ptr->next;
//     }
    
//     ptr->next = temp;
//     return;
// }

// int main() {
    
//     struct Node obj1 ,obj2 ,obj3 ;
    
//     obj1.data=65;
//     obj1.ch='A';
//     obj1.ptr= NULL;
    
//     obj2.data=66;
//     obj2.ch='B';
//     obj2.ptr= NULL;
    
//     obj3.data=67;
//     obj3.ch='C';
//     obj3.ptr= NULL;
    
//     obj1.ptr = &obj2;
//     obj2.ptr = &obj3;
    
//     while(){}

// return 0;
// }