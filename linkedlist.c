#include <stdio.h>
#include <stdlib.h>
typedef struct linkedlist{
    int no;
    struct linkedlist *link;
}node;
char ch;
node *create(node *start){
    ch = 'y';
    node *temp, *p;
    if(start != NULL){
        printf("\nList already exist.");
        return(start);
    }
    printf("\n----Input block----");

    while(ch == 'y'){
        temp = (node *)malloc(sizeof(node));
        printf("\nEnter number:");
        scanf("%d", &temp->no);
        temp->link = NULL;
        if(start == NULL){
            p = start = temp;
        }
        else{
            p->link = temp;
            p = temp;
        }
        fflush(stdin);
        printf("\nDo you want to continue? (y/n): ");
        ch = getchar();
    }
    return(start);
}
void printlist(node *start){
    node *temp;
    system("cls");
    printf("\nBase Number   Number   Link\n-------------------------------------");
    for(temp = start; temp != NULL; temp=temp->link){
        printf("\n%10u  %10d  %10u", temp, temp->no, temp->link);
    }
    return;
}
int main(){
    node *start;
    start = NULL;
    start = create(start);
    printlist(start);
    return 0;
}