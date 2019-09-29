#include <stdio.h>

struct bstnode{
    struct bstnode* left;
    int data;
    struct bstnode* right;};

struct bstnode* insert(struct bstnode*,int);
struct bstnode* getnewnode(int);
int traverse(struct bstnode*);
int min(struct bstnode*);
int max(struct bstnode*);
int height(struct bstnode*);
int max1(int,int);
int isbst(struct bstnode*);
struct bstnode* remov(struct bstnode*,int);

int main(){

    struct bstnode* root=NULL;
    int choice;
    int value;
    int leni;
    int a;
    int b;
    int c;
    while(1){
        printf(" 1 for insert \n 2 for traverse \n 3 for min value \n 4 for max value \n 5 for height of tree \n 6 FOR IS BST \n 7 for DELETION \n \n");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("ENTER THE VALUE TO BE INSERTED \n");
                    scanf("%d",&value);
                    root=insert(root,value);
                    break;

            case 2: traverse(root);
                    break;

            case 3: c=min(root);
                    printf("%d \n",c);
                    break;

            case 4: max(root);
                    break;

            case 5:
                    leni=height(root);
                    printf("%d \n",leni);
                    break;
            case 6: a=isbst(root);
                    printf("%d \n",a);
                    break;

            case 7: printf("Enter the data to be delted \n");
                    scanf("%d",&b);
                    root=remov(root,b);
                    printf("\n");
                    traverse(root);
                    printf("\n");
                    break;

            default: printf("Wrong choice entered \n");
        }
    }
    return 0;
}
struct bstnode* insert(struct bstnode* root,int value){

    if (root == NULL){
        root=getnewnode(value);
        printf("value is inserted \n");
        }
    else{
        if(value<=root->data){
            root->left=insert(root->left,value);
        }
       else{
            root->right=insert(root->right,value);
        }}
        return root;}

        struct bstnode* getnewnode(int value){
        struct bstnode* temp;
            temp=(struct bstnode*) malloc(sizeof(struct bstnode));
            temp->data=value;
            temp->left=NULL;
            temp->right=NULL;
        return temp;
        }

int traverse(struct bstnode* root){
      if(root == NULL) return;
      traverse(root->left);
      printf("%d \t \n",root->data);
      traverse(root->right);}

int min(struct bstnode* root){
    if(root==NULL){
        printf("TREE IS EMPTY");
    }
    struct bstnode* temp;
    temp=(struct bstnode*) malloc(sizeof(struct bstnode*));
    temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
    }

int max(struct bstnode* root){
    if (root==NULL){
        printf("THERE IS NO ELEMENT \n");
    }
    else{
            if(root->right==NULL){
                printf("%d \n",root->data);
        }
            else{
                return max(root->right);
        }
    }
}

int height(struct bstnode* root){
    int lheight,rheight;
    if(root==NULL){
        return -1;
    }
    lheight=height(root->left);
    rheight=height(root->right);
    return max1(lheight,rheight)+1;
}

int max1 (int left,int right){
    if(left>=right){
        return left;
    }
    else{
        return right;
    }
}
int isbst(struct bstnode* root){
    if (root==NULL){
        return 1;
    }
    if(greater(root->right,root->data)&& less(root->left,root->data)&& isbst(root->left)&& isbst(root->right)){
        return 1;
    }
    else{
        return 0;
}}
int greater (struct bstnode* root,int value){
 if(root==NULL){
    return 1;
 }
if((root->data>value)&& greater(root->left,value)&& greater(root->right,value)){
    return 1;
}
else{
    return 0;
}
}
int less (struct bstnode* root,int value){
 if(root==NULL){
    return 1;
 }
if((root->data<value)&& less(root->left,value)&& less(root->right,value)){
    return 1;
}
else{
    return 0;
}
}

struct bstnode* remov(struct bstnode* root,int value){
    if(root==NULL){
        return root;
    }
    else {
        if(value<root->data){
            root->left=remov(root->left,value);
            }
        else{
                root->right=remov(root->left,value);
        }

        if(root->left==NULL && root->right==NULL){
                free(root);
                root=NULL;
        }
                else{
                    if(root->left==NULL){
                        struct bstnode* temp=root;
                        root=root->right;
                        free(temp);
                    }
                    else{
                        struct bstnode* temp=root;
                        root=root->right;
                        free(temp);
                    }

                        struct bstnode* temp=min(root->right);
                        root->data=temp->data;
                        root->right=remov(root->right,value);

                    }
                }

            return root;
            }





