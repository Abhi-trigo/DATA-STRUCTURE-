#include <iostream>
using namespace std;
struct node{
    int info;
    struct node* link;
};
class linklists{
private :
    struct node* root;
public:
    linklists():root(NULL){};
    struct node* getnode(int a){
        struct node* temp;
        temp=new(struct node);
        temp->info=a;
        temp->link=NULL;
        return temp;
    }
    void createnode(int b){
        struct node* r=root;
        struct node* s=root;
        struct node* temp;
        temp=getnode(b);
        if(root==NULL){
            root=temp;
        }
        else{
            while(s->link!=NULL ){
                s=s->link;
            }
            s->link=temp;


        }
    }
    void display(){
        struct node* temp=root;
        while(temp!=NULL){
            cout<<temp->info<<"-->";
            temp=temp->link;
        }
        cout<<"NULL"<<"\n";
    }
};
int main(){
    linklists c1;
    c1.createnode(15);
    c1.createnode(25);
    c1.display();
    return 0;
}
