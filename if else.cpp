#include<iostream>
using namespace std;
int main (){
	int age;
	cout<<"enter your age"<<endl;
	cin>>age;
	if(age>=18&age<64){
	
		cout<<"you can vote";
	}
else if(age<18){
	cout<<"you cannot vote"<<endl;
	
}
if(age>=65)	{
	cout<<"you are over age";
}
	
	
	system("pause");
	return 0;
	
}
