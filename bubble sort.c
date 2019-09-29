# include <stdio.h>
void swap(int *,int *);
int main(){
int n,i,j=1,k=1;
printf("enter the size of array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for (i=k;i<=n;i++){
    for(j=1;j<n-k;j++){
       if(a[j]>a[j+1]){
        swap(&a[j],&a[j+1]);
    }

}}
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}
void swap(int* p,int *q){
int t;
t=*p;
*p=*q;
*q=t;
}
