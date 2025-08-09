#include<iostream>
#include<math.h>
using namespace std;


//formula of sum of natural number is :n(n+1)/2
//length of subarray:5(5+1)/2 =15.
int lengthSubArray(int arr[],int n){
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
             count++;
        
        }
        
    }
return count;
}

int subArray(int arr[],int n){
   
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            
            for(int z=i; z<=j; z++){
                cout<<arr[z];
            }
            cout<<",";
        }
        cout<<endl;
        
    }
    return 0;
}


int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    subArray(arr,n);
    cout<<lengthSubArray(arr,n)<<endl;

}