#include <iostream>
#include <stdio.h>
using namespace std;
class calculator{
    private:
        char operation;
        float operand1=0,operand2=0;
        double result;
    public:
        void input(float x1,float x2,char x3){
            operand1=x1;
            operand2=x2;
            operation=x3;
            }
        void calculate(void){
            if(operation=='+'){
               result=operand1+operand2;
            }
            if(operation=='-'){
                    if(operand1>operand2){
                result=operand1-operand2;
                }
            else{ result=operand2-operand1;

                }
            }
            if(operation=='*'){
                result=operand1*operand2;
            }
            if(operation=='/'){
              result=operand1/operand2;
              }
            }
        void printresult(void){
            if(operation='/' && operand2==0){
                cout<<"INVALID RESULT"<<"\n";
                }
            else{
                cout<<"YOUR CALCULATED RESULT"<<"\t"<<result<<"\n";
                }
            }
    };
int main(){
    class calculator obj1;
    int choice;
    float x1=0,x2=0;
    char a='/0';
    while(1){
        cout<<"ENTER THE CHOICE"<<"\n"<<"1. SET VALUE"<<"\n"<<"2. CALCULATE"<<"\n"<<"3. PRINT"<<"\n";
        cin>>choice;
        switch(choice){
        case 1: cout<<"ENTER THE TWO OPERAND OPERAND 1 AND OPERAND 2"<<"\n";
                cin>>x1>>x2;
                cout<<"ENTER THE OPERATOR"<<"\n"<<"+ or - or * or /"<<"\n";
                cin>>a;
                obj1.input(x1,x2,a);
                cout<<"YOUR VALUES HAS BEEN STORED"<<"\n";
                break;
        case 2: if(x1==0 && x2==0){
                    cout<<"ENTER THE VALUE FIRST"<<"\n";
                }
                else{
                obj1.calculate();
                }
                break;
        case 3:if(x1==0 && x2==0){
                cout<<"STORE AND CALCULATE THE VALUE FIRST "<<"\n";
                }
                else{
                obj1.printresult();
                }
                break;
        default:cout<<"YOU ENTERD WRONG CHOICE"<<"\n";
        }

    }
return 0;
}





