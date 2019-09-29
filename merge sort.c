#include <stdio.h>
void mergesort(int [],int);
void mergeing(int [],int [],int[],int,int,int);

int main(){
    int size;
    printf("ENTER THE SIZE OF ARRAY \n");
    scanf("%d",&size);
    int a[size],i;
    printf("ENTER THE VALUE IN ARRAY \n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    mergesort(a,size);
    printf("PRINTING SORTED ARRAY \n");
    for(i=0;i<size;i++){
        printf("%d \t",a[i]);
    }

    return 0;
}
void mergesort(int a[],int n){
    int mid,i,j,k,b;

    if(n<2){
        return;
    }
    else{
            mid=n/2;
            b=n-mid;
            int left[mid],right[b];

        for (i=0;i<mid-1;i++){
            left[i]=a[i];
        }
        for (j=mid;j<n-1;j++){
            right[i-mid]=a[i];
           }
            mergesort(left,mid);
            mergesort(right,b);
            mergeing(left,right,a,n,mid,b);
        }

    }
void mergeing(int l[],int r[],int a[],int n,int mid,int b){
    int i=0,j=0,k=0;
    while(i<mid && j<b){
        if(l[i]<=r[j]){
            a[k]=l[i];
            i=i+1;
            k=k+1;
        }
        else{
            a[k]=r[j];
            j=j+1;
            k=k+1;
        }
    }
    while(i<mid){
        a[k]=l[i];
        k=k+1;
        i=i+1;
    }
    while(j<b){
        a[k]=r[j];
        j=j+1;
        k=k+1;
    }
}
