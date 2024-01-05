#include<iostream>
using namespace std;
int main(){
	/* What is unary operators?
   	 Unary operators are operators that perform operation on
	 a single operand to produce a new value.
	 what is operand?
	 Operand is a value or experession that is used to perform operation.
	Unary operation are of two types:
	 1) Prefix
	 ++a,--a 
	Executes before everything.
	 2)Postfix
	 a++,a--
	 Executes after semicolon.
	 It is also called inccrement and deccrement operators.
	 For example a program related to unary operation is performed:*/
	 
	 int a=5,b=8;
	 // 'b' is an example of prefix.
	 cout<<"New value of b: "<<++b<<endl;
	 // 'a' is an example of postfix.
	 cout<<"value of a: "<<a++<<endl;
	 cout<<"New value of a: "<<a++<<endl;
	 system("pause");
	return 0;
}
