#include<iostream>
using namespace std;


int Reverse(int x){
    int rem;
    while(x!=0){
        rem=x%10;
        cout<<rem;
        x=x/10;

    }
    


}


int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    Reverse(x);
    return 0;
}