#include<iostream>
#include<math.h>
using namespace std;
//pass by value.
void changeA(int a){
    a =20;
    cout << a <<endl;
}

// pass by refrence
void changeA(int *ptr){
     cout << "pass by refrence"<< ptr <<endl;
    *ptr =20;
    cout << "pass by refrence"<< *ptr <<endl;
}
//pass by refrence using refrence variable.
void changeB(int &a){
    a=30;
    cout<<a<<endl;
     
}

int main(){
    int a=10;
    int &b=a;
    b=25;
    cout<<b<<endl;
    cout<<&b<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    changeA(&a);

    changeB(a);
    

    cout<<a<<endl;
    return 0;

}