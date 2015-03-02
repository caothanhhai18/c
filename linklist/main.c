#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
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
    while(1){
        if(ptr->link!=NULL){
            ptr=ptr->link;
        }else{
            break;
        }

    }
    temp->info=data;
    temp->link=NULL;

    ptr->link=temp;


 }

void insert_begin(int data){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=head;
    head=temp;
}
void insert_pos(int pos,int data){
    struct node *temp,*ptr;
    int i;
    temp = (struct node *)malloc(sizeof(struct node));
    ptr=head;
    for(i=0;i<pos;i++){
        ptr=ptr->link;
    }
    if(ptr->link==NULL){
        temp->info=data;
        temp->link=NULL;
        ptr->link=temp;
    }
    else{
        temp->info=data;
        temp->link=ptr->link;
        ptr->link=temp;
    }


}
int main(){
    create_lklist(5);
    insert_end(89);
    insert_end(123);
    insert_begin(67);
    insert_pos(1,55);

   // insert_end(37686);
    print_lklist();

}


