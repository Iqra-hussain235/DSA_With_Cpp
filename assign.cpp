#include<iostream>
#include<math.h>
#include <climits>
#include <algorithm>
using namespace std;



int containDuplicate(int* arr, int n){
  // sort(arr.begin(), arr.end());
   sort(arr, arr + n); 
  
  for(int i=0; i<n; i++){
    if(arr[i]==arr[i+1])
    {
        return true;
    }
  }
  return false;

    

}


int main(){
    int arr[]={1,2,3,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<containDuplicate(arr,n)<<endl;

}