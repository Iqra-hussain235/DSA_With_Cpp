#include<iostream>
using namespace std;


int linerSearch(int num[],int n,int tar){

    for(int i=0; i<n; i++){
        if(num[i]==tar){
            return i;
                }
    }
    return -1;

}


int main(){
     
    int arr[]={2,4,6,8,10,12,10,16};
    int n=sizeof(arr)/sizeof(int);
    cout<<"enter the target"<<endl;
    int target;
    cin>>target;
    cout<< linerSearch(arr,n,target);
    return 0;


}