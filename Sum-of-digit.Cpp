#include<iostream>
using namespace std;

int SumOFDigit(int x){
  int sum=0;

  while(x!=0){

      int rem=x%10; // rem give reminder
      sum=sum+rem;// sum store reminder
      x=x/10;// it update x value
  }
  cout<<"sum of "<<x<<"is"sum<<endl;

    
    

} 

int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    SumOFDigit(x);
    return 0;
}