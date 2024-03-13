#include <stdio.h>
#include <stdlib.h>
typedef struct linkedlist{
    int no;
    struct linkedlist *link;
}node;
char ch;
node *create(node *start){
    node *temp, *p;
    ch = 'y';
    printf("\n----Input Block----");
    if(start != NULL){
        printf("\nList Already exists.");
        return(start);
    }
    fflush(stdin);
    while(ch == 'y'){
        temp = (node *)malloc(sizeof(node));
        printf("\nEnter Number: ");
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
void printlist(node* start){
    node *temp;
    printf("\nBase Number        Number    Link\n-------------------------------------------");
    for(temp = start; temp != NULL; temp = temp->link){
        printf("\n%10u   %10d   %10u", temp, temp->no, temp->link);
    }
    return;
}
node *insertbeg(int item, node *start){
    node *p;
    p = (node *)malloc(sizeof(node));
    p->no = item;
    p->link = start;
    start = p;
    printf("\n\n\tNew element is inserted at the beginning.");
    return(start);
}
node *search(int item, node* start){
    node *temp;
    for(temp = start; temp != NULL; temp = temp->link){
        if(item == temp->no)
            return(temp);
    }
    return(NULL);
}
int main(){
    node *start, *temp;
    int option, item;
    start = NULL;
    while(1){
        printf("\n1) Create Linked List");
        printf("\n2) Insert new Node at the beginning");
        printf("\n3) Print the Linked List");
        printf("\n4) Search item in Linked List");
        printf("\n5) Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &option);
        switch (option){
        case 1:
            system("cls");
            start = create(start);
            break;
        case 2:
            system("cls");
            printf("\nEnter number to insert: ");
            scanf("%d", &item);
            start=insertbeg(item, start);
            break;
        case 3:
            system("cls");
            printlist(start);
            break;
        case 4:
            printf("\nEnter item you want to search: ");
            scanf("%d", &item);
            temp = search(item, start);
            if(temp!=NULL)
                printf("\nNumber found at address %d", temp);
            else   
                printf("\nNumber not found.");
            break; 
            case 5:
                exit(0);
        default:
            system("cls");
            printf("\nChoose appropriate option.");
            break;
        }
    }
    return 0;
}