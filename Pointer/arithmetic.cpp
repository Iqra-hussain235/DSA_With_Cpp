#include<iostream>
using namespace std;

int main(){
    int a=10;
    
    int *ptr=&a;
    int *ptr2=ptr+3;
    cout<<ptr<<endl;
    // ptr++;
    // cout<<ptr<<endl;
    // ptr++;
    // cout<<ptr+3;
    cout<<ptr2<<endl;

    cout<<ptr2 - ptr<<endl;

    
}