#include <stdio.h>
#include <stdlib.h>
#define MX 5
typedef struct node_queue{
    int ar[MX];
    int front;
    int rear;
}node;
void insert(int item, node *ptr);
int delete(node *ptr);
int main(){
    system("cls");
    node queue;
    queue.front = -1;
    queue.rear = -1;
    int value, ch, del;
    while(1){
        printf("\nArray representation of Queue");
        printf("\n1)Insert Operation on Queue");
        printf("\n2)Delete Operation on Queue");
        printf("\n3)Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        system("cls");
        switch (ch)
        {
        case 1:
            printf("\nEnter value to insert: ");
            scanf("%d",&value);
            insert(value, &queue);
            break;
        case 2:
            del = delete(&queue);
            printf("\n[%d] has been deleted",del);
            break;
        case 3:
            exit(0);
        default:
            printf("\nEnter Appropriate number.");
            break;
        }
    }
    return 0;
}
void insert(int item, node *ptr){
    if((ptr->front == 0 && ptr->rear == MX-1) || ptr->front == ptr->rear+1){
        printf("\nOverflow error.");
        return;
    }
    if(ptr->front == -1)
        ptr->front = ptr->rear = 0;
    else if(ptr->rear == MX-1)
        ptr->rear = 0;
    else ptr->rear = ptr->rear+1;
    ptr->ar[ptr->rear] = item;
}
int delete(node *ptr){
    if(ptr->front == -1){
        printf("\nUnderflow error.");
        return;
    }
    int del;
    del = ptr->ar[ptr->front];
    if(ptr->front == ptr->rear){
        ptr->front = ptr->rear = -1;
    }else
    if(ptr->front == MX-1){
        ptr->front = 0;
    }
    else ptr->front++;
    return del;
}