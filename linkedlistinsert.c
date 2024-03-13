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
    
    if(start != NULL){
        printf("\nList Already exists.");
        return(start);
    }
    printf("\n----Input Block----");
    fflush(stdin);
    while(ch == 'y'){
        temp = (node *)malloc(sizeof(node));
        printf("\nEnter Number: ");
        scanf("%d", &temp->no);
        system("cls");
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
node *insbefore(int var, int item, node *start){
    node *p, *p1, *temp;
    p = (node*)malloc(sizeof(node));
    for(temp=start;(temp!=NULL)&&(temp->no!=var);temp=temp->link)
        p1 = temp;
    if(temp==NULL){
        system("cls");
        printf("\n\t404 ERROR NUMBER NOT FOUND!");
    }
    else
        if(temp==start)
            start = insertbeg(item, start);
        else{
            p->no = item;
            p->link = p1->link;
            p1->link = p;
            printf("\n\tElement is successfully inserted.");
        }
    return(start);
}
void insafter(int var, int item, node *start){
    node *p, *temp;
    p = (node*)malloc(sizeof(node));
    for(temp=start;(temp!=NULL)&&(temp->no!=var);temp=temp->link);
        if(temp==NULL){
            system("cls");
            printf("\n\t404 ERROR NUMBER NOT FOUND!");
        }
    else{
        p->no = item;
        p->link = temp->link;
        temp->link = p;
        printf("\n\tElement is successfully inserted.");
    }
    return ;
}
void insend(int item, node* start){
    node *p, *temp;
    p = (node *)malloc(sizeof(node));
    p->no = item;
    for(temp=start; temp->link != NULL; temp=temp->link);
    temp->link = p;
    p->link = NULL;
    printf("\nElement is successfully inserted.");
    return;
}
// int main(){
//     system("cls");
//     node *start, *temp;
//     int option, item, var;
//     start = NULL;
//     while(1){
//         printf("\n1) Create Linked List");
//         printf("\n2) Insert new Node at the beginning");
//         printf("\n3) Insert new Node before a node");
//         printf("\n4) Insert new Node after a node");
//         printf("\n5) Insert new Node at the end");
//         printf("\n6) Print the Linked List");
//         printf("\n7) Search item in Linked List");
//         printf("\n8) Exit");
//         printf("\nEnter your choice: ");
//         scanf("%d", &option);
//         switch (option){
//         case 1:
//             system("cls");
//             start = create(start);
//             break;
//         case 2:
//             system("cls");
//             printf("\nEnter number to insert: ");
//             scanf("%d", &item);
//             start=insertbeg(item, start);
//             break;
//         case 3:
//             system("cls");
//             printf("\nEnter number before which node is to be inserted: ");
//             scanf("%d", &var);
//             printf("\nEnter number to insert: ");
//             scanf("%d", &item);
//             start = insbefore(var, item, start);
//             break;  
//         case 4:
//             system("cls");
//             printf("\nEnter number after which node is to be inserted: ");
//             scanf("%d", &var);
//             printf("\nEnter number to insert: ");
//             scanf("%d", &item);
//             insafter(var, item, start);
//             break;
//         case 5:
//             system("cls");
//             printf("\nEnter number to insert: ");
//             scanf("%d", &item);
//             insend(item, start);
//             break;
//         case 6:
//             system("cls");
//             printlist(start);
//             break; 
//         case 7:
//             printf("\nEnter item you want to search: ");
//             scanf("%d", &item);
//             system("cls");
//             temp = search(item, start);
//             if(temp!=NULL)
//                 printf("\nNumber found at address %d", temp);
//             else   
//                 printf("\nNumber not found.");
//                 break;
//         case 8: 
//             exit(0);
//         default:
//             system("cls");
//             printf("\nChoose appropriate option.");
//             break;
//         }
//     }
//     return 0;
// }