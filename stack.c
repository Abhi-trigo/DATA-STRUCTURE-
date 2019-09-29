#include <stdio.h>
int n=5,top=-1;
//printf("ENTER THE SIZE OF STACK");
//scanf("%d",&n);
int a[5];
void push(int x){
if(top==n-1){
    printf("ERROR STACK OVERFLOW");
}
else{
    a[++top]=x;
    //printf("%d  ",a[top]);
}
}
void pop(){
top=top-1;
}
int main(){
printf("1=PUSH,2=POP,3=PRINT");
int b,c,i;
for (i=0;i<7;i++){
scanf("%d",&b);
switch(b){
case 1:printf("ENTER THE VALUE");
        scanf("%d",&c);
        push(c);
        break;
case 2:if(top==-1){
        printf("STACK UNDER FLOW");}
        else{
        pop();}
    break;
case 3: printf("%d",a[top]);
    break;
default:printf("WRONG INPUT");
}
}
return 0;
}
