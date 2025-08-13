#include<iostream>
#include<math.h>
#include <climits>
using namespace std;


int Spiral(int arr[][4],int n, int m)
{
    int srow=0, scol=0;
    int erow=n-1, ecol=m-1;
    while(srow <=erow && scol <= ecol){

    
    //top
    for(int i=scol; i<=ecol; i++)
    {
        cout<<arr[srow][i]<<" ";
    }
    //right
    for(int j=srow+1; j<=erow; j++)
    {
        cout<<arr[j][ecol]<<" ";
    }
    //bottom
    for(int i=ecol-1; i>=scol; i--)
    {
        cout<<arr[erow][i]<<" ";
    }
    //left
    for(int j=erow-1; j>=srow+1; j--)
    {
        cout<<arr[j][srow]<<" ";
    }
    srow++; scol++;
    erow--; ecol--;
}
cout << endl;
}


int main()
{   
    int arr[4][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                   {13,14,15,16}};
            Spiral(arr,4,4);
            return 0;

}