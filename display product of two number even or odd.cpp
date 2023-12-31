#include <iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	int product;
	cout<<"enter first number:"<<endl;
	cin>>num1;
	cout<<"enter second number:"<<endl;
	cin>>num2;
	product=num1*num2;
	if(product%2==0){
		cout<<"The product of two number is even:"<<product;
	}
	else{
		cout<<"The product of two number is odd:"<<product;
	}
	system("pause");
	return 0;
} 
