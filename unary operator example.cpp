#include<iostream>
using namespace std;
int main(){
	int a=3;
	int b=5;
	int c=9;
	b=a++ + --c*2;
	cout<<b<<endl;
	c=--b*a++;
	cout<<c<<endl;
	a=++b-c--;
	cout<<a<<endl;
	c=a-b*1-c;
	cout<<c<<endl;	
	system("pause");
	
	return 0;
}

