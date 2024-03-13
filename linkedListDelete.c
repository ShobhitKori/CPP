#include "linkedlistinsert.c"
node *delf(node *start){
    node *temp = start;
    start = start->link;
    system("cls");
    printf("\nFirst node has been deleted.");
    free(temp);
    return(start);
}
node *dels(int item, node *start){
    node *temp, *temp1;
    for(temp=start; (temp->no!=item)&&(temp!=NULL); temp=temp->link)
        temp1 = temp;
    if(temp == NULL){
        system("cls");
        printf("\nItem does not exist in the linkedlist.");
        return;
    }
    if(item==start->no){
        start = delf(start);
        return(start);
    }
    else{
        temp1->link = temp->link;
        system("cls");
        printf("\nNode is deleted successfully.");
        free(temp);
        return(start); 
    }
    return(start);
}
void dellast(node *start){
    node *temp, *temp1;
    for(temp=start; temp->link!=NULL; temp=temp->link)
        temp1 = temp;
    temp1->link = NULL;
    free(temp);
    system("cls");
    printf("\nLast node has been deleted.");
}
node *delneg(node *start){
    node *temp, *temp1;
    for(temp=start;(temp->no >= 0)&&(temp!=NULL);temp=temp->link)
        temp1= temp;
        if(temp == NULL){
            printf("\n\tNo negative number exists in the linkedlist.");
            return(start);
        }
        if(temp == start){
            start = delf(start);
        }
        else{
            temp1->link = temp->link;
            printf("\n\tElement with negative value deleted successfully.");
            free(temp);
            return(start);
        }
}
    
// node *del_negative_node(node *start)
//     {
// 	node *temp,*temp1;

// 	for(temp=start;(!(temp->no < 0))&& (temp != NULL);temp=temp->link)
// 	    temp1=temp;

// 	if(temp==NULL)  // no node with -ve value found in the linked list
// 	   {
// 		 printf("\n\n\t No node with negative value found in the Linklist");
		 
// 		 return(start);
// 	   }

// 	if(temp==start)  // first node is -ve
// 	   start=delf(start);

// 	else       
// 	  {
// 		temp1->link=temp1->link->link;   /* temp1->link=temp->link */
// 		printf("\n\n\t Element with negative value is successfully deleted ");
		
// 		free(temp) ; // garbage collection - deallocation of memory - reclaiming space
// 		return(start);
// 		   }
// 	 return(start);
// 	}
int main(){
    system("cls");
    node *start, *temp;
    int option, item, var;
    start = NULL;
    while(1){
        printf("\n 1) Create Linked List");
        printf("\n 2) Insert new Node at the beginning");
        printf("\n 3) Insert new Node before a node");
        printf("\n 4) Insert new Node after a node");
        printf("\n 5) Insert new Node at the end");
        printf("\n 6) Print the Linked List");
        printf("\n 7) Search item in Linked List");
        printf("\n 8) Delete Node from start");
        printf("\n 9) Delete Node with a specific value");
        printf("\n10) Delete Node at the end");
        printf("\n11) Delete negative Nodes");
        printf("\n12) Exit");
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
            printf("\nEnter number before which node is to be inserted: ");
            scanf("%d", &var);
            printf("\nEnter number to insert: ");
            scanf("%d", &item);
            start = insbefore(var, item, start);
            break;  
        case 4:
            system("cls");
            printf("\nEnter number after which node is to be inserted: ");
            scanf("%d", &var);
            printf("\nEnter number to insert: ");
            scanf("%d", &item);
            insafter(var, item, start);
            break;
        case 5:
            system("cls");
            printf("\nEnter number to insert: ");
            scanf("%d", &item);
            insend(item, start);
            break;
        case 6:
            system("cls");
            printlist(start);
            break; 
        case 7:
            printf("\nEnter item you want to search: ");
            scanf("%d", &item);
            system("cls");
            temp = search(item, start);
            if(temp!=NULL)
                printf("\nNumber found at address %d", temp);
            else   
                printf("\nNumber not found.");
            break;
        case 8:
            start = delf(start);
            break;
        case 9:
            printf("\nEnter item to delete: ");
            scanf("%d", &var);
            start = dels(var, start);
            break;
        case 10:
            dellast(start);
            break;
        case 11:
            start = delneg(start);
            break;
        case 12: 
            exit(0);
        default:
            system("cls");
            printf("\nChoose appropriate option.");
            break;
        }
    }
    return 0;
}