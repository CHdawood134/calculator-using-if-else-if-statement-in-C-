#include<iostream>
using namespace std;
int main(){
	/* What is ternary operator ?
	string result=(statement)?"value1":"value2"
	Ternary operator also works like a If else statement.
	It is a short form of If else statement to write a program in a single line.
	For example of ternary operator:v  */
	while(true)
	{
	int P;
	cout<<"Enter percentage"<<endl;
	cin>>P;
	 string result=(P<33)?"Failled":"Passed";
	cout<<"Result:" <<result<<endl;
}
	return 0;
}
