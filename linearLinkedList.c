#include <stdio.h>
#include <stdlib.h>
typedef struct linkedlist{
    int no;
    struct linkedlist *link;
}node;
char ch;
node *create(node *start){
    node *temp, *p;
    ch ='y';
    printf("\n\t\t**** INPUT BLOCK ****\n");
    if(start != NULL){
        printf("\n\n\t**** LIST ALREADY EXIST ****");
        return(start);
    }
    fflush(stdin);
    while(ch=='y'){
        temp = (node *)malloc(sizeof(node));
        printf("\nEnter number: ");
        scanf("%d", &temp->no);
        temp->link = NULL;
        if(start == NULL){
            p=start=temp;
        }
        else{
            p->link = temp;
            p = temp;
        }
        fflush(stdin);
        printf("\tDo you want to continue (y/n)? :");
        ch = getchar(); 
    }
    return(start);
}
void printlist(node *start){
    node *temp;
    system("cls");
    printf("\n\nBase adress    Number    Link");
    printf("\n=================================");
    for(temp=start; temp!=NULL; temp=temp->link)
    printf("\n%10u  %10d  %10u", temp, temp->no, temp->link);
    printf("\nPress any key to go to main block...");
    return;
}
int main(){
    node *start;
    start = NULL;
    start = create(start);
    printlist(start);
    return 0;
}