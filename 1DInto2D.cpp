#include<iostream>
#include<math.h>
#include <climits>
using namespace std;


int OneDIntoTwoD(int arr[][4],int m,int n){
    int srow=0,  scol=0;
    int erow=m-1, ecol=n-1;
while(srow < erow && scol < ecol){
    for(int i=erow; i>=0; i--){
        cout<<arr[i][srow]<<" ";
    }
    for(int j=erow; j>=0; j--){
        cout<<arr[j][srow+1]<<" ";
    }
    for(int i=erow; i>=0; i--){
        cout<<arr[i][ecol]<<" ";
    }
    srow++,scol++;
    erow--,ecol--;
}


return 0;

}

int main()
{   
       
    int arr[4][4]={{5,1,9,11},
                    {2,4,8,10},
                    {13,3,6,7},
                     {15,14,12,16}};
           OneDIntoTwoD(arr,4,4);

           
            return 0;

}