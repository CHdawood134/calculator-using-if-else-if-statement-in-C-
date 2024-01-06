#include<iostream>
using namespace std;
int main(){
	/*  What is binary operation?
	In binary operation operators are applied on two operands.
	In other words in which two variables are involved.
	There are four type of binary operators:
	1) Arithmetic operators:
	+,-,*,/,%
	2) Relational operators:
     	>,<,>=,<=,==,!=
	3) Assignment operators:
	  =,+=,-=,/=,*=,%=
	4) Logical operator:
	  ! ,|| ,&&               */
	 int num1=6;
	 int num2=2;
	 int num;
	num=num1 +num2;
	cout<<"Sum:"<<num<<endl;
	num=num1/num2;
	cout<<"division:"<<num<<endl;
	num=num1-num2;
	cout<<"Subtraction:"<<num<<endl;
	num=num1*num2;
	cout<<"multiplication:"<<num<<endl;
	num=num1%num2;
	cout<<"remainder"<<num;
	
	return 0;
}
