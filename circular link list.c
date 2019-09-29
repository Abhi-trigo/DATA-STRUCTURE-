#include <stdio.h>
struct node{
    int data;
    struct node* link;
    };
    struct node* root=NULL;
    struct node* extratemp;
    int index=-1;
void firstinsert(void){
    struct node* temp;
    temp=(struct node*) malloc(sizeof(struct node));
    printf("ENTER THE DATA TO STORE\n");
    scanf("%d",&temp->data);
    root=temp;
    temp->link=root;
    extratemp=temp;
    index++;
    printf("VALUE  INSERTED SUCCESFULLY \n");
    }

void begninginsert(void){
    struct node* temp;
    temp=(struct node*) malloc(sizeof(struct node));
    printf("ENTER THE DATA TO STORE \n");
    scanf("%d",&temp->data);
    temp->link=extratemp;
    root=temp;
    extratemp->link=root;
    index++;
}

void endinsert(void){
    struct node* temp;
    temp=(struct node*) malloc(sizeof(struct node));
    printf("ENTER THE DATA TO STORE \n");
    scanf("%d",&temp->data);
    temp->link=root;
    extratemp->link=temp;
    extratemp=temp;
    index++;
}

void insertmid(void){
    int value;
    printf("ENTER THE POSITION WHERE U WANT TO INSERT 0-%d \n",index+1);
    scanf("%d",&value);
    if(value<=index+1 && value>=0){
        if(value==0){
            begninginsert();
            }
        else{
             if(value==index+1){
                endinsert();
             }
             else{
                  int i;
                  struct node* temp;
                  struct node*p=root;
                  temp=(struct node*) malloc(sizeof(struct node));
                  printf("ENTER THE DATA TO STORE \n");
                  scanf("%d",&temp->data);
                  for(i=0;i<value-1;i++){
                    p=p->link;
                  }
                  temp->link=p->link;
                  p->link=temp;
                  index++;
                }
             }
            printf("VALUE  INSERTED SUCCESFULLY \n");
        }
        else{
            printf("WRONG CHOICE\n");
        }
}

void traverse (void){
    struct node* temp;
    temp=root;
    while(temp!=extratemp){
        printf("%d-->",temp->data);
        temp=temp->link;
    }
    printf("%d \n",temp->data);

}
void firstdelete(void){
    struct node* temp=root;
    root=NULL;
    extratemp==NULL;
    free(temp);
    index--;
}
void firstposdelete(void){
    struct node* temp=root;
    root=temp->link;
    temp->link=NULL;
    extratemp->link=root;
    free(temp);
    index--;
    }
void enddelete(void){
    int i;
    struct node* temp=root;
    struct node*p;
    for (i=0;i<index-1;i++){
        temp=temp->link;
    }
    p=temp->link;
    temp->link=root;
    extratemp=temp;
    free(p);
    index--;
}
void middelete(void){
    int value;
    printf("ENTER THE POSITION WHERE U WANT TO DELETE0-%d \n",index);
    scanf("%d",&value);
    if(value<=index && value>=0){
        if(value==0 && index==0){
            firstdelete();
        }
        else{
            if(value==0){
                firstposdelete();
            }
            else{
                if(value==index){
                    enddelete();
                }
                else{
                    struct node* temp=root;
                    struct node* p;
                    int j;
                    for(j=0;j<value-1;j++){
                        temp=temp->link;
                    }
                    p=temp->link;
                    temp->link=p->link;
                    p->link=NULL;
                    free(p);
                    index--;
                }
            }

        }
        printf("YOUR ELEMENT HAS BEEN DELETED SUCCESFULLY \n");
    }
    else{
            printf("WRONG INDEX ENTERED \n");

    }
}
int main(){
    int choice;
    while(1){
    printf("ENTER THE CHOICE \n 1.INSERT \n 2.TRAVERSE \n 3.DELETE \n 4.LENGTH \n 5.EXIT \n");
    scanf("%d",&choice);
    switch(choice){
    case 1: if(root==NULL){
        firstinsert();
        }
        else{
            insertmid();
        }
            break;
    case 2: if(root==NULL){
        printf("EMPTY LINK LIST \n");
        }
        else{
            traverse();
        }
            break;
    case 3: if(root==NULL){
            printf("EMPTY LINK LIST \n");
            }
        else{
            middelete();
        }
            break;
    case 4: if(root==NULL){
        printf("EMPTY LINK LIST \n");
        }
        else{
            printf("%d \n",index+1);
        }
            break;
    case 5: exit(0);
            break;
    default: printf("WRONG CHOICE ENTERED \n");

    }


}
return 0;
}
