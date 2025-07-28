#include<iostream>
#include<math.h>
using namespace std;

int main(){
  // A pointer is just a variable that stores the memory address of another variable.

    //* use of *
    //1.declare a pointer.
    //2.multiply.
    //3.derefrence.
    int a = 10;
    //pointer
    int *ptr =&a;
    cout<<"this is addrres "<<ptr<<endl;
    cout<<"this is addrres "<<&a;
    //double pointer
    int **pptr =&ptr;
    cout<<&ptr <<"="<<pptr<<endl;

    //deference Operator
    int b=20;
    //we want addrres 
    cout<<"address of b"<<&b<<endl;
    //if we apply dereference operator before &(b) it give variable value
    cout<< *(&b)<<endl;
    cout<< *ptr<<endl;

   //Null pointer
   int *p = NULL;
   cout<< p <<endl;
   cout<<*p<<endl;//it give error :segmentation fault


    return 0;

}