#include<iostream>
using namespace std;

int main(){
    int x;
    
    do{
        cout<<"enter the number"<<endl;
        cin>>x;
      if(x%10==0){
        continue;
      }
      cout<<"you enter"<<x<<endl;
    }while(true);
    return 0;
}