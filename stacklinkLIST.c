#include<stdio.h>
#include<stdlib.h>
void POP(void);
void push(void);
void traverse(void);
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
int main(){
    int choice;
    while(1){
                printf("\n\nENTER THE CHOICE 1 FOR PUSH 2 FOR POP 3 FOR TRAVERSE\n");
                scanf("%d",&choice);
            switch(choice){
            case 1: PUSH();
                    break;
            case 2: POP();
                break;
            case 3: traverse();
                break;
            default: printf("you entered the wrong choice");
        }}
return 0;
}
 void PUSH(void){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE VALUE TO BE ENTER");
    scanf("%d",&temp->data);
    temp->link=root;
    root=temp;
 }
void traverse(void){
    struct node* temp;
    temp=root;
    if(root==NULL){
        printf("STACK UNDERFLOW");
    }
    else{
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->link;
    }
        printf("NULL \n");
        }
}
void POP(void){
    if(root==NULL){
        printf("STACK UNDERFLOW");
    }
    else{
        struct node* temp;
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
        }
}
