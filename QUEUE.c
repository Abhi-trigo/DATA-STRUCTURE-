#include <stdio.h>
int front=0,rear=-1;
void enqueue(int[], int);
void dequeue(int[], int);
void traverse(int[], int);

 int main(){
    int size;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d",&size);
    int a[size],choice;
    while(1){
        printf("1. ENQUEUE \n 2. DEQUEUE \n 3.TRAVERSE \n 4. FRONT ELEMENT\n 5. REAR ELEMENT \n 6. EXIT \n");
        printf("Enter the choice \n");
        scanf("%d",&choice);
        switch (choice){
            case 1: enqueue(a,size);
                    break;
            case 2: dequeue(a,size);
                    break;
            case 3: traverse(a,size);
                    break;
            case 4: if (rear==-1){
                    printf("queue is empty \n");
                }
                else{
                    printf("%d \n",a[front]);
                }
                        break;
            case 5: if (rear==-1){
                    printf("queue is empty \n");
                }
                else{
                    printf("%d \n",a[rear]);
                }
                    break;
            case 6: exit(0);
                break;
            default: printf("entered the wrong choice \n");
        }
    }
return 0;
}
void enqueue(int a[],int n){
    int value;
    printf("ENTER THE VALUE TO STORE \n");
    scanf("%d",&value);
    if (rear==n-1){
        printf("QUEUE OVERFLOW \n");
    }
    else{
        a[++rear]=value;
    }
}
void dequeue(int a[],int n){
    int i;
    if (rear==-1){
        printf("QUEUE UNDERFLOW \n");
    }
    else{
        printf("YOU ARE DELETING THE VALUE %d \n",a[front]);
        for(i=front;i<=rear;i++){
            a[i]=a[i+1];
        }
        rear=rear-1;
        printf("ELEMENT HAS BEEN DELETED \n");
    }
}
void traverse(int a[],int n){
    if (rear==-1){
        printf("QUEUE UNDERFLOW \n");
    }
    else{
        int i;
        for(i=front;i<=rear;i++){
            printf("%d \n",a[i]);
        }
    }
}




