#include <iostream>
using namespace std;

int main (){
    int n=6;
    int num=0;
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            cout<<" ";
            if(j>=n-i){
                cout<<"*";
            }
        }
        cout<<endl;
    }
   
}