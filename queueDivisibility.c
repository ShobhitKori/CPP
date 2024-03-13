//program that creates and populates a queue with values.
//Then print the total number of elements that are divisible by 3 but not by 5.
#include <stdio.h>
#include <stdlib.h>
#define MX 5
typedef struct node_queue{
    int queueArr[MX];
    int front;
    int rear;
}node;
void insert(int item, node *ptr);
void printqueue(node *ptr);
int main(){
    node queue;
    queue.front = -1;
    queue.rear = -1;
    int val;
    printf("\nEnter elements to insert in queue: ");
    for(int i=0; i<MX; i++){
        scanf("%d", &val);
        insert(val, &queue);
    }
    printf("\nThe elements that are divisible by 3 but not by 5 are:\n");
    printqueue(&queue);
    return 0;
}
void insert(int item, node *ptr){
    if((ptr->front == 0 && ptr->rear == MX-1)||ptr->front == ptr->rear+1)
        return;
    if(ptr->front == -1)
        ptr->front = ptr->rear = 0;
    else
    if(ptr->rear == MX-1)
        ptr->rear = 0;
    else ptr->rear = ptr->rear+1;
    ptr->queueArr[ptr->rear] = item;
}
void printqueue(node *ptr){
    for(int i=0; i<MX; i++){
        if(ptr->queueArr[i] % 3 == 0 && ptr->queueArr[i] % 5 != 0){
            printf("%d\t", ptr->queueArr[i]);
        }
    }
}