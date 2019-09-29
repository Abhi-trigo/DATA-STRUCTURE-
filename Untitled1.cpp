#include <iostream>
using namespace std;
class generatenewpoint {
    private:
        int x;
        int y;
    public:
        void setdata(){
                cout<<"ENTER THE X COORDINATE \n";
                cin>>x;
                cout<<"ENTER THE Y COORDINATE \n";
                cin>>y;
        }
        int newpoint(int a,int b){
            cout <<"YOUR NEW X COORDINATE IS "<<a<<"\n";
            cout <<"YOUR NEW Y COORDINATE IS "<<b;
        }
        int getdata1(){
            return x;
        }
        int getdata2(){
            return y;
        }
};
int main(){
    class generatenewpoint p1,p2,p3;
    p1.setdata();
    p2.setdata();
    p3.newpoint((p1.getdata1()+p2.getdata1()),(p1.getdata2()+p2.getdata2()));
return 0;
}

