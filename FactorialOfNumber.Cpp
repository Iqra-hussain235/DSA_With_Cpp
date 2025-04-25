#include<iostream>
using namespace std;

int Factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    cout<<fact<<endl;

}

int main(){
 int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    Factorial(n);
    return 0;

}