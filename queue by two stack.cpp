#include <iostream>
#include <stdlib.h>
using namespace std;
int push(int* &,int ,int &);
void topvalue(int * &,int);
int pop(int * &,int,int);
void stackvalue(int *&,int);
int main(){
    int sizes=2;
    int static *astack=(int *)malloc(sizeof(int)*sizes);
    int top=-1;
    int choice;
    while(1){
    cout<<"\n"<<"ENTER THE VALUE OF CHOICE  "<<"\n"<<"\n";
    cout<<"1. PUSH"<<"\n"<<"2. POP"<<"\n"<<"3. STACK VALUE"<<"\n"<<"4. TOP VALUE"<<"\n"<<"\n";
    cin>>choice;
    switch(choice){
    case 1: top=push(astack,top,sizes);
        break;
    case 2: top=pop(astack,top,sizes);
        break;
    case 3: stackvalue(astack,top);
        break;
    case 4: topvalue(astack,top);
            break;
    default: cout<<"ENTERED THE WRONG CHOICE"<<"\n"<<"\n";
        }
    }
    return 0;
}
int push( int* &temp,int a,int &capacity){
    if(a==capacity-1){


       static int* temp1=(int*)realloc(temp,sizeof(int)*2);
       temp=temp1;
        cout<<"ok"<<"\n";
        capacity=capacity*2;
    }
    int value;
    cout<<"ENTERE THE VALUE  ";
    cin>> value;

    (temp[++a])=value;
    cout<<"THANKS YOUR VALUE IS IN QUEUE"<<"\n"<<"\n";
    return a;
}
void stackvalue(int * &temp,int a){
    int i=0;
    for(i=a;i>-1;i--){
        cout<<(temp[i])<<"\n";
    }
    cout<<"\n"<<"\n";
}
int pop(int* &temp1,int top,int capacity){
    int bstack[capacity-1];
    int top1=-1,i=0;
    for(i=top;i>0;i--){
        bstack[++top1]=(temp1[i]);
    }
    int j=-1;
     for(i=top1;i>-1;i--){
        (temp1[++j])=bstack[i];
    }
    top=top-1;
    cout<<"AS PER YOUR REQUEST THE ELEMENT HAS BEEN DELETED"<<"\n"<<"\n";
    return top;
}
void topvalue(int *&temp,int top){
    cout<<temp[top]<<"\n"<<"\n";

}
