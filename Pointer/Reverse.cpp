#include<iostream>
using namespace std;

// int reverse(int arr[],int n){
//     for(int i=n; i>=0; i--){
//         cout<<arr[i]<<endl;
//     }

// }


int reverse(int arr[],int n){
    int j=n-1;
    int st=0;

    while(st<=j){
        swap(arr[st],arr[j]);
        st++;
        j--;
    }  

    return 0;
}

int printArr(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(){
    int arr[]={4,6,8,3,5,6};
     int n=sizeof(arr) / sizeof(int);
     reverse(arr,n);
     printArr(arr,n);
     
}