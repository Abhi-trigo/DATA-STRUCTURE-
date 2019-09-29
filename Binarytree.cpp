#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node {
    int data;
    struct node *right=NULL;
    struct node *left=NULL;
};

struct node *newNode(int value){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}

struct node* insert(struct node* temp,int value){
    if(temp==NULL){
        return newNode(value);
    }
    else{
        if(temp->data<value){
            temp->left=insert(temp->left,value);
        }
        else{
            temp->right=insert(temp->right,value);
        }
    }
    return temp;
}


void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("\n %d \n",root->data);
        inorder(root->right);
    }
}


void search(node* &curr, int value,node* &parent){
    while(curr!=NULL && curr->data!= value){
            parent=curr;
        if(curr->data<value){
            curr=curr->left;
        }
        else{
            curr=curr->right;
        }
    }
}
node *findminimum(node* root){
    if(root->left==NULL)
        return root;
    else{
        node* curr=root->left;
        while(curr->left!=NULL){
            curr=curr->left;
        }
        return curr;
    }
}
void deletes(node* &root,int value){
    node* curr=root;
    node* parent=NULL;
    search(curr,value,parent);
    if(curr==NULL){
        return;
    }
    if(curr->left==NULL && curr->right==NULL){
        if(curr!=root){
            if(parent->left==curr){
                parent->left=NULL;
            }
            else{
                parent->right=NULL;
            }
        }
        else{
            root=NULL;
        }
        free(curr);
    }
    else if(curr->left && curr->right){
        node* succ=findminimum(curr->right);
        int val=succ->data;
        deletes(root,succ->data);
        curr->data=val;
    }
    else{
        node* child=(curr->left)? curr->left:curr->right;
        if(curr!=root){
            if(curr==parent->left){
            parent->left=child;
            }
            else
            {
                parent->right=child;
            }
        }
        else{
            root=child;
        }
        free(curr);
    }
}
int main(){
    struct node *root=NULL;
    int choice;
    while(1){
        printf("\n\n1. Create root \n2. Insert node \n3. Inorder \n4. Delete");
        printf("\n \n");
        scanf("%d",&choice);
        int data;
        switch(choice){
            case 1: if(root==NULL){
                printf("Enter The Data \n");
                scanf("%d",&data);
                root=insert(root,data);
                printf("Root has been created successfully \n ");
                }
                else{
                    printf("Root has been created before \n");
                }
                break;

            case 2: if(root==NULL){
                printf("Root has been missing please create root first \n");
                }
                else{
                    printf("Enter The Data \n");
                    scanf("%d",&data);
                    insert(root,data);
                    printf("Node has been created successfully \n");
                }
                break;
            case 3: if(root==NULL){
                printf("Root has been missing please create root first \n");
                }
                else{
                    inorder(root);
                }
                break;
            case 4: if(root==NULL){
                printf("Root has been missing please create root first");
            }
            else{
                printf("enter the data that you want to remove");
                scanf("%d",&data);
                deletes(root,data);
            }
            break;
            default: printf("You have choose a wrong option please choose a correct option \n");
        }
    }
    return 0;
}
