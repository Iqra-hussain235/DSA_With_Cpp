#include<iostream>
#include<math.h>
#include <climits>
using namespace std;
//0(n^2)
bool SearchSortedMatrix(int arr[][3],int n,int m,int key)
{    int i=0,j=m-1;

    while(i < n && j>= 0){
        if(arr[i][j]==key){
           cout<<"key found at position "<<i<<","<<j<<endl;
            return 0;
        }
        else if(arr[i][j] > key){
            j--;
        }
        else{
            i++;
        }
    }
   
    return -1;// Key not found
}


int main()
{   
    int arr[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
                     cout<<"Key found at position "<<endl;
           SearchSortedMatrix(arr,3,3,8);
            return 0;

}