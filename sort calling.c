#include <stdio.h>
void bubble(int a[],int size){
    int i,j,k;
    for(i=0;i<size-1;i++){
        for(j=0;j<(size-i)-1;j++){
            if (a[j+1]<a[j]){
                k=a[j+1];
                a[j+1]=a[j];
                a[j]=k;
                }
            }
        }
    }
void select(int a[],int size){
int i,j,t;
for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;}
            }}}
void insertion_sort(int a[],int size){
int i,j,t;
for(i=1;i<size;i++){
    t=a[i];
    j=i-1;
    while(j>=0&&t<a[j]){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=t;
    } }

 void main(){
 int size=5,a[size],i;
 for(i=0;i<size;i++){
    scanf("%d",&a[i]);
 }
 bubble(a,size);
 //select(a,size);
 //insertion_sort(a,size);
 for(i=0;i<size;i++){
    printf("%d",a[i]);}
 }





