#include <iostream>
using namespace std;
int main (){
	int num1;
	int Evennum;
	cout<<"Enter the number:"<<endl;
	cin>>num1;
	if(num1%2==1){
		Evennum=num1+1;
		cout<<"the number has been made even"<<Evennum;
	}
	else{
		cout<<"the number is already even";
	}
	system("pause");
	
	return 0;
}
