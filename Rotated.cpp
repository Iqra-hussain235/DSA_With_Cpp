#include<iostream>
#include<math.h>
#include <climits>
#include <algorithm>
using namespace std;


int RotatedSorted(int* arr, int n,int target)
{
//   sort(arr.begin(), arr.end());
  
  int st=0;
  int end=n-1;
  while(st<=end){
    // int mid=(st+(st-end)/2);
    int mid=st+end/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[st]<=arr[mid]){

        if(arr[st]<=target && target<=arr[mid]){
           end=mid-1; }
           else{
            st=mid+1;
           }

    }
    else{
        if(arr[mid]<=target && target <= arr[end])
        {    
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
  }
  return -1;
}


int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(int);
   cout<<"this :"<<endl;
    cout<<RotatedSorted(arr,n,0)<<endl;
    return 0;

}