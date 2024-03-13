#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct stack_node{
    int arr[MAX];
    int top;
}node;
void push(int item, node *stack);
void pop(node *stack);
int main(){
    node stack;
    int item;
    int ch;
    stack.top = -1;
    while(1){
        //system("cls");
        printf("\n*******Main Menu*******");
        printf("\nArray representation of stack");
        printf("\n           |__S__|");
        printf("\n           |__T__|");
        printf("\n           |__A__|");
        printf("\n           |__C__|");
        printf("\n           |__K__|");
        printf("\n-------------------------------");
        printf("\n1) Push Operation on Stack");
        printf("\n2) Pop Operation on Stack");
        printf("\n3) Exit");
        printf("\nEnter your choice: ");
        fflush(stdin);
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\nEnter the item you want to push: ");
                scanf("%d",&item);
                push(item, &stack);
            break;
            case 2:
                pop(&stack);
            break;
            case 3:
                exit(0);
            default:
            system("cls");
                printf("\nEnter valid option...");
            break;
        }
    }
}
void push(int item, node *stack){
    system("cls");
    if(stack->top == MAX-1){
        
        printf("\n*****Stack Overflow*****");
        printf("\n->Element not inserted.");
    }
    else{
        stack->top++;
        stack->arr[stack->top] = item;
        printf("\n->Element pushed successfully...");   
    }
}
void pop(node *stack){
    system("cls");
    if(stack->top < 0){
        printf("\n*****Stack Underflow*****");
        printf("\n->No element exist in stack.");
    }
    else{
        int deleted = stack->arr[stack->top];
        stack->top--;
        printf("\n->Element [%d] is deleted successfully...",deleted);
        return;
    }
}