#include<iostream>
using namespace std;


int sort(int arr[], int n){
    //4,6,8,3,5,6
    int max=arr[0];
    for(int i=0; i<n; i++){
        max=arr[0];
        for(int j=0+i; j<n; j++){

            if(max>arr[j]){
                swap(arr[j],max);
    
            }
            else{
                max=arr[j];
            }
            // cout<<max;
        }
    }
    return 0;
}
//time complexity log(n)
int binarySearch(int arr[],int n,int key){
    int end=n-1;
    int st=0;
    int mid;
    

    while(st<=end){
        mid=(st+end)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key > arr[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }  
    cout<<"number is not occure in array"<<endl;

    return 0;
}

int printArr(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(){
    
    int arr[]={7,8,9,11,12,13,14,15};
     int n=sizeof(arr) / sizeof(int);
    cout<<binarySearch(arr,n,8);
    //  printArr(arr,n);
     
}