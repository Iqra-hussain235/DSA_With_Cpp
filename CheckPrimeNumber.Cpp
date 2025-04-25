#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
  bool isprime=true;
  
  for(int i=2; i<=n-1; i++){
    if(n%i==0){// i is a factor of n

         isprime=false;
    }
  }
  if(isprime){
    cout<<"number is prime";
  }
  else{
    cout<<"number is Not prime"<<endl;
  }
  return 0;

}