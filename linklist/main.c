#include <stdlib.h>
#include <stdio.h>

struct node {
    int info;
    struct node *link;
};

struct node *head;
void create_lklist(int data){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head==NULL){
        temp->info = data;
        temp->link = NULL;
        head = temp;
    }
    printf("Link list created \n");
}
 void print_lklist(){
    struct node *temp;
    temp = head;
    while(temp!=NULL){
    printf("%d->",temp->info);
    temp=temp->link;

    }

 }
 void insert_end(int data){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    ptr=head;
    /*while(1){
        if(ptr->link!=NULL){
            ptr=ptr->link;
        }else{
            break;
        }

    }*/
    while(ptr!=NULL){
       ptr=ptr->link;
    }
    temp->info=data;
    temp->link=NULL;
    ptr->link=temp;
 }

int main(){
    create_lklist(5);
    insert_end(89);
    print_lklist();

}


