#include<iostream>
#include<math.h>
#include <climits>
using namespace std;

// Brute Force.
// time complexity o(n3)
int MaxSumarry(int *arr, int n){
    
   int maxsum=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int z=i; z<=j; z++){

                sum+=arr[z]; 
            }
            cout<<sum<<" ";
           maxsum=max(maxsum,sum);
            

        }
        cout<<endl;
    }
    cout<<"maximum subarray sum :"<<maxsum<<endl;
    return 0;
}

//optimized 
//time Complecity:0(n2)
int MaxSumarry2(int *arr, int n){
    
   int maxsum=INT_MIN;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
             sum+=arr[j];   
           maxsum=max(maxsum,sum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum is :"<<maxsum<<endl;
    return 0;
}


//kadane's Algorithm(DP):
int kadane(int arr[], int n){

    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
        
        maxsum=max(maxsum,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<" max sum:"<<maxsum<<endl;
    return 0;
    
}


int maxProduct(int *nums, int n) {
        int maxpro=INT_MIN;
        int sum=1;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                nums[i]=1;
                        }
            sum=sum*nums[i];
            maxpro=max(maxpro,sum);
            // if(maxpro<0){
            //     sum=0;
            // }

        }
        return maxpro;
    }



 int MaxProductArry2(int *arr, int n){
    
   int maxsum=INT_MIN;
    for(int i=0; i<n; i++){
        int sum=1;
        for(int j=i; j<n; j++){
             sum=sum*arr[j];   
           maxsum=max(maxsum,sum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum is :"<<maxsum<<endl;
    return 0;
}


int main(){
    int arr[]={-2,0,-1};
    int n=sizeof(arr)/sizeof(int);
    // cout<<MaxSumarry2(arr,n)<<endl;
    // cout<<kadane(arr,n)<<endl;
    // cout<<maxProduct(arr,n)<<endl;
    cout<<MaxProductArry2(arr,n)<<endl;
}