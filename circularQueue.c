#include <stdio.h> 
 
int front = -1; 
int rear = -1; 
 
void enqueue(int x, int n, int queue[]) 
{ 
    if (front == -1 && rear == -1) 
    { 
        front = rear = 0; 
        queue[rear] = x; 
    } 
    else if (((rear + 1) % n) == front) 
    { 
        printf("Queue is full"); 
    } 
    else 
    { 
        rear = (rear + 1) % n; 
        queue[rear] = x; 
    } 
} 
void dequeue(int queue[], int n) 
{ 
    if (front == -1 && rear == -1) 
    { 
        printf("queue is empty"); 
    } 
    else if (front == rear) 
    { 
        front = rear = -1; 
    } 
    else 
    { 
        printf("%d\n", queue[front]); 
        front = (front + 1) % n; 
    } 
} 
 
void desplay(int queue[], int n) 
{ 
    int i = front; 
    if (front == -1 && rear == -1) 
    { 
        printf("data not found"); 
    } 
    else 
    { 
        while (i != rear) 
        { 
            printf("%d\t", queue[i]); 
            i = (i + 1) % n; 
        } 
        printf("%d", queue[rear]); 
        printf("\n"); 
    } 
} 
int main() 
{ 
    int n = 5; 
    int queue[n]; 
    enqueue(10, n, queue); 
    enqueue(20, n, queue); 
    enqueue(-1, n, queue); 
    enqueue(18, n, queue); 
    enqueue(15, n, queue); 
    desplay(queue, n); 
 
    dequeue(queue, n); 
    dequeue(queue, n); 
 
    desplay(queue, n); 
    enqueue(35, n, queue); 
    enqueue(45, n, queue); 
    desplay(queue, n); 
 
    return 0; 
}