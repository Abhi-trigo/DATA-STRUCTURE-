#include <iostream>
#include <conio.h>
using namespace std;
class toolboth{
 private:
     unsigned int cars;
     double cash;
 public:
    toolboth():cars(0),cash(0) {};
    void payingcars(){
        cars=cars+1;
        cash=cash+0.50;
    }
    void nopaycar(){
        cars=cars+1;
    }
    void display(){

        cout<<"TOTAL NUMBER OF CARS"<<"\n"<<cars<<"\n";
        cout<<"TOTAL CASH COLLECTED"<<"\n"<<"Rs. "<<cash<<"\n";
    }
};
int main(){
    toolboth c1;
    char a;
    int b;
    char choice;
    cout<<"1. ENTER <-- FOR ADDING CARS"<<"\n"<<"2. PRESS --> FOR ADDING CARS AND CASH"<<"\n"<<"3. PRESS Esc TO DISPLAY TOTAL CARS AND CASH"<<"\n";
    cout<<"PRESS THE KEY"<<"\n";
    while(1){
    a=getch( );
    b=a;
    switch(b){
    case 27: c1.display();
            break;
    case -32: break;
    case 77: c1.payingcars();
            cout<<"CARS AND CASH ARE ADDED"<<"\n";
            break;
    case 75:c1.nopaycar();
            cout<<"CARS ARE ADDED"<<"\n";
            break;
    case 13: exit(0);
    default: cout<<"ENTERED THE WRONG CHOICE";
    }
    }
    return 0;
}
