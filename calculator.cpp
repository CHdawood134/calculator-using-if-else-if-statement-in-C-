#include<iostream>
using namespace std;
int main (){
	int a,b,;
	char opr;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	cout<<"enter the operation(+,-,*and/):";
	cin>>opr;
	
	if(opr == '+'){
		c=a+b;
		cout<<c;
	}
	 else if (opr == '-'){
		c=a-b;
		cout<<c;
	}
	else if(opr == '*'){
		c=a*b;
		cout<<c;}
	if (opr == '/'){
		c=a/b;
		cout<<c;
	}
	
	return 0;

}
