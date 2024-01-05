#include <iostream>
using namespace std;
int main (){
int a=3;
int b=5;
int c=9;

b=a++ + --c;
//b=11
cout<<b<<endl;
c=--b;
//c=11-1=10
cout<<c<<endl;
a=++b - c--;
//a=(10+1)-10=1
cout<<a<<endl;
c=a-b-c;
//c=1-11-9=-19
cout<<c;
	
	
	
return 0;
}
