#include<iostream>
using namespace std;


int Fibo(int x){
    int c;
    int a=0;
    int b=1;
    cout<<"Fibonacci Series is"<<a<<" "<<b;

    for(int i=0; i<x; i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;

    }


}


int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    Fibo(x);
    return 0;
}