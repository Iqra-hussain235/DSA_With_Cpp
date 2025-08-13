#include<iostream>
#include<math.h>
#include <climits>
using namespace std;
//0(n^2)
int DiagonalMatrix(int arr[][3],int n)
{
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            if(i==j)
            { 
                sum+=arr[i][j];

            }
           else if(j==n-i-1){
                sum+=arr[i][j];
            }

        }
        cout<<sum<<" ";
    }
    return sum;
}
//optimal apporach
// time complexity 0(n^2).
int DiagonalMatrix2(int arr[][3],int n)
{
    int sum=0;
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(i==j)
        {
            sum+=arr[i][j];
        }
        else if(j==n-i-1)
            {
                sum+=arr[i][j];
            }

        j++;
        cout<<sum<<" ";

    }
    return sum;
}

int main()
{   
    int arr[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
           DiagonalMatrix2(arr,3);
            return 0;

}