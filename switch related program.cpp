#include<iostream>
using namespace std;
int main(){
	while(true){
    int num;
	cout<<"PLEASE ENTER NUMBER:"<<endl;
	cin>>num;
	
	switch(num){
		case 1:
			cout<<"Monday"<<endl;
			cout<<"**********";
			break;
		case 2:
		cout<<"Tuesday"<<endl;
		cout<<"**********";
		break;
		case 3:
		cout<<"Wednesday"<<endl;
		cout<<"**********";
		break;
		case 4:
		cout<<"Thursday"<<endl;
		cout<<"**********";
		break;
		case 5:
		cout<<"Friday"<<endl;
		cout<<"**********";
		break;
		case 6:
		cout<<"Saturday"<<endl;
		cout<<"**********";
		break;
		case 7:
		cout<<"Sunday"<<endl;
		cout<<"**********";
		break;
		default:
		cout<<"Invalid result"<<endl;
		cout<<"**********";	
		break;
	}
		
	}
	return 0;
}
