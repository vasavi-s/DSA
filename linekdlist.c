#include <stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct node* next;
};

struct node *head=NULL;  //assign head to null
void create(){
    struct node *curr_data,*next_add;
    if(curr_data==NULL)
    {
        printf("Memory is full! âšī¸");
        exit(0);
    }
    printf("Enter the data đ ");
    scanf("%d",&curr_data->data);
    curr_data->next=NULL;
    if(head==NULL)
    {
       head=curr_data; 
    }
    else{
        next_add=head;
        while(next_add->next!=NULL){
            next_add=next_add->next;
        }
        next_add->next=curr_data;
    }
}

void display(){
    struct node *pt;
    if(head==NULL){
        printf("List is empty!đ¤ˇ");
    }
    else{
        pt=head;
        printf("The data elements are đ: ");
        while(pt!=NULL){
            printf("%d ",pt->data);
            pt=pt->next;
        }
    }
}
int main(){
printf("Inserting the data đ\n");
create();
printf("\nTo display the data đ:\n");
display();
    
}
