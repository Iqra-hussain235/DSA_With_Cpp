#include<iostream>
using namespace std;

int main (){
    int n=6;
   
   for(int i=0; i<n; i++){
    cout<<"*";
       for(int j=0; j<n; j++){
           if(i==0  || i==5){
               cout<<"* ";
           }
           else{
              cout<<" ";
           }
           
           
       }
       cout<<"*";
       
       cout<<endl;
   }
}