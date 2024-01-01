#include <iostream>
using namespace std;
int main(){
	char opr;
	cout<<"please enter operator"<<endl;
	cin>>opr;
	if(opr=='-'){
		cout<<"the operator is :subtraction";
	}
	else if(opr=='+'){
		cout<<"the operator is:sum";
	}
	else if(opr=='*'){
		cout<<"the operator is:multiplication";
	}
	else if(opr=='/'){
		cout<<"the operator is:division";
	}
	else{
		cout<<"please enter only[-,+,*,/]";
	}
	system("pause");
	return 0;
}
