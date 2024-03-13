#include <stdio.h>
#include <stdlib.h>
#define MAX 5
typedef struct stack_arr{
    int arr[MAX*2];
    int top;
}node;
void initialize(node *ptr){
    ptr->top = -1;
    for(int i=0; i<MAX; i++)
        ptr->arr[i] = 0;
    return;
}
void push(int item, node *ptr){
    // if(ptr->top == MAX-1)
    //     return;
    ptr->top++;
    ptr->arr[ptr->top] = item;
    return;
}
int pop(node *ptr){
    if(ptr->top == -1)
        return (NULL);
    int item = ptr->arr[ptr->top];
    ptr->top--;
    return item;
}
void display(node *ptr){
    for(int i = (MAX*2)-1; i >= 0; i--)
        printf("\n==>%d", ptr->arr[i]);
    return;
}
int main(){
    system("cls");
    int item;
    node stack1, stack2, stack3;
    initialize(&stack1);
    initialize(&stack2);
    initialize(&stack3);

    printf("\nPrpgram to concatinate two stacks");
    printf("\n\nEnter elements of first stack: ");
    while(1){
        scanf("%d", &item);
        push(item, &stack1);
        if(stack1.top == MAX-1) //Overflow
            break;
    }
    printf("\nEnter elements of second stack: ");
    while(1){
        scanf("%d", &item);
        push(item, &stack2);
        if(stack2.top == MAX-1) //Overflow
            break;
    }
    while(1){
        
item = pop(&stack1);
        if(item == NULL)
            break;
        printf("\nItem of stack1 : %d ",item);
        
        push(item,&stack3);
    }
    while(1){
        
        item = pop(&stack2);
        if(item == NULL)
            break;
        printf("\nItem of stack2 : %d ", item);
        
        push(item,&stack3);
    }
    printf("\nItems of stack3: \n");
    display(&stack3);
    return 0;
}