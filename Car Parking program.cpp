#include<iostream>
using namespace std;
int main(){
	int u_input;
	int b=0,c=0;
	int amount=0,count=0;
	while(true)
	{
	cout<<"press 1 for bike"<<endl;
	cout<<"press 2 for car"<<endl;
	cout<<"press 3 for record"<<endl;
	cout<<"press 4 for delete record "<<endl;
	cin>>u_input;
	
	if(u_input==1){
		amount=amount + 50;
		count=count + 1;
		b++;
		}
		else if(u_input==2){
			amount=amount + 100;
			count=count + 1;
			c++;
			}
			else if(u_input==3){
				cout<<"***************************************************"<<endl;
				cout<<"Total amount of parking vehicles ="<<amount<<endl;
				cout<<"Total number of vehicals  parked ="<<count<<endl;
			    cout<<"Total number of bike  parked ="<<b++<<endl;
				cout<<"Total number of  car  parked ="<<c++<<endl;
				cout<<"***************************************************"<<endl;
			}
			else if(u_input==4){
			count=0;
			amount=0;
			b=0;
			c=0;
			cout<<"Record Deleted"<<endl;
			}
			else{
				cout<<"Invalid number"<<endl;
			}
		}
		return 0;
}
