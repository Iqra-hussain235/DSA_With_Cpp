#include<iostream>
using namespace std;

int Sum_OF_ODD_Digit(int x){
   int sum=0;
    while(x%2!=0 && x!=0)
{
    int rem=x%10; // rem give reminder
    sum=sum+rem;// sum store reminder
    x=x/10;// it update x value
}

cout<<"ODD Sum Of is"<<sum<<endl;
}



int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    Sum_OF_ODD_Digit(x);
    return 0;
}