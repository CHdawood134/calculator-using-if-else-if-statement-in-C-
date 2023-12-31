#include <iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	int sum;
	cout<<"enter first number:"<<endl;
	cin>>num1;
	cout<<"enter second number:"<<endl;
	cin>>num2;
	sum=num1+num2;

	if(sum>50){
		cout<<"the sum is:"<<sum;
	}
	system("pause");	
	return 0;
}
