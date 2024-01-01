#include <iostream>
using namespace std;
int main(){
	int num1;
	int num;
	cout<<"please enter the number"<<endl;
	cin>>num1;
	if(num1<50){
		num=num1+100;
		cout<<"the number is:"<<num;
		}
		else{
			num=num1-10;
			cout<<"the number is:"<<num;
		}
	
	system("pause");
	
	return 0;
}
