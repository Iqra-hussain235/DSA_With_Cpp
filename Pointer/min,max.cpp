#include<iostream>
#include<math.h>
using namespace std;


int main(){
      
    // int a = 5;
    // int *ptr=&a;
    // cout<<*ptr<<endl;

    int arr[]={5,4,8,9,2};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;

}