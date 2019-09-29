#include <stdio.h>
int main(){
    int size;
    printf("ENTER THE SIZE OF ARRAY \n");
    scanf("%d",&size);
    int a[size],value,hole,i,j,choice;
    printf("ENTER THE VALUE IN ARRAY \n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("ENTER THE CHOICE 1 FOR DESCENDING AND 2 FOR ASCENDING SORTING \n");
    scanf("%d",&choice);
    switch(choice){
        case 1: for(i=1;i<size;i++){
                value=a[i];
                hole=i-1;
                while (hole>=0&& a[hole]<value){
                    a[hole+1]=a[hole];
                    hole=hole-1;
                }
                a[hole+1]=value;
            }
            break;

        case 2:  for(i=1;i<size;i++){
                value=a[i];
                hole=i;
                while (hole>0 && a[hole-1]>value){
                    a[hole]=a[hole-1];
                    hole=hole-1;
                }
                a[hole]=value;
            }
            break;
        default: printf("WRONG CHOICE");

    }
    printf("PRINTING THE SORTED ARRAY\n");
     for(i=0;i<size;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}


