#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Please enter number:"<<endl;
	cin>>n;
	/*Jis type ki humain value return ho rahi hogi usi type ka humain variable
	 banana hoga jasy humain string wali value return ho rhi thi keun ky hum ny 
	 string ka variable banaya howa tha.Agr hum variable int diclare krty or
	 value string wali hi rehti tu program ny run ni hona tha or ERROR ajana tha.*/ 
	string result=(n==3)?"Number is three.":"Number is not three.";
	cout<<"Result:" <<result<<endl;
	
	return 0;
}
