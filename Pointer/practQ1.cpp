#include<iostream>
#include<math.h>
using namespace std;
void multipleBy(int &z, int &b, int&c){
   z*=2;
   b*=2;
   c*=2;
}

//what will ptr2 point value.
int main(){

    int x=5;
    int y=10;
    int *ptr1=&x;
    int *ptr2=&y;
    ptr2=ptr1;
    cout<<ptr2<<endl;
     cout<<ptr1<<endl;
      cout<<&x<<endl;
    cout<<*ptr2<<endl;
// what will output
int a;
int *ptr;
a=7;
ptr=&a;
cout<<*ptr<<endl;

int z=1,b=2,c=3;
multipleBy(z,b,c);
cout<<z<<b<<c<<endl;
char ch='A';
char &cho=ch;
cout<<cho<<endl;

return 0;


}