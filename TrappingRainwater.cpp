#include<iostream>
#include<math.h>
#include <climits>
using namespace std;


int Trapping_Rainwater(int arr[], int n){
    int leftMax[20000],rightMax[20000];
      leftMax[0]=arr[0];
      rightMax[n-1]=arr[n-1];
      
    cout<<leftMax[0];
  for(int i=1; i<n; i++){

    leftMax[i]=max(leftMax[i-1],arr[i-1]);
    // cout<<leftMax[i]<<" ";
  }
  cout<<" "<<endl;
  

   cout<<rightMax[0]<<" ";
for(int i=n-2; i>=0; i--){
    rightMax[i]=max(rightMax[i+1],arr[i+1]);
    cout<<rightMax[i]<<" ";
}
int waterTrap=0;

for(int i=0; i<n; i++){

   int trap=min(leftMax[i],rightMax[i])-arr[i];
    if(trap > 0)
    {
        waterTrap += trap;
    }
    
}
cout<<"water trap:"<<waterTrap;

    return 0;
}

int main()
{
  
   int arr[]={4,2,0,6,3,2,5};
   int n =sizeof(arr)/sizeof(int);
   Trapping_Rainwater(arr,n);
 return 0;

}