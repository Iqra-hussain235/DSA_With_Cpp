#include<iostream>
#include<math.h>
using namespace std;


// void func(int arr[]){
//     arr[0]=300;
// }

// void func2(int *ptr){
//     ptr[0]=300;
// }

void printArr(int num[],int n){
    

    for(int i=0; i<n; i++){
        cout<<num[i];
    }
    // int n=sizeof(num)/sizeof(int);
    // cout<<n;

}

int main(){
    // int a=5;
    // int *ptr=&a;


    int arr[]={4,6,8,3,5,6};
     int n=sizeof(arr) / sizeof(int);
    // func2(arr);//
   
    // cout<<arr[0]<<endl;
    printArr(arr,n);
    return 0;

}

