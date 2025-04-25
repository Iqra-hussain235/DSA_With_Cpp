#include<iostream>
#include<math.h>
using namespace std;

int Armstrong(int n){
    int rem;
    int flag=0;
    int count=0;
    int val=n;
    while (n!=0)
    {
       rem=n%10;
       n=n/10;
       count++;
    }

    
    while(val!=0){
        rem=val%10;
        flag=flag+pow(rem,count);
       val=val/10;

       cout<<flag<<endl;
    }
    

}



int main(){
 int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    Armstrong(n);
    return 0;

}