#include<iostream>
#include<math.h>
#include <climits>
using namespace std;


int SumOfSecondRow(int arr[][3],int n)
{
    int j=1;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[j][i];
    }
    cout<<"Sum of second row: "<<sum<<endl;
    return sum;
    

}





int Search7(int arr[][3],int n,int m,int key ){
    if(n<=0 || m<=0)
    {
        cout<<"Invalid matrix size"<<endl;
        return 0;
    }
    
    int count=0;
   
        for(int i=0 ;i<=n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]==key)
                {
                    count++;
                    cout<<"Found at index ["<<i<<","<<j<<"]"<<endl;
                }
            }
        }
        
    return 0;
}



int main()
{   
    int arr[2][3]={{4,7,8},
                    {8,8,7}
                    };
        //    Search7(arr,2,3,7);
           SumOfSecondRow(arr,3);
            return 0;

}