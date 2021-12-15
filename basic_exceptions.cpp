#include <iostream>

using namespace std;

void fun1(){
	int x;
	cin>>x;
	if(x<0){
		throw -1; // -1 will be displayed as error message
	}
	
	if(x == 0){
		throw "zero"; // zerol message will be displayed as error message
	}
	
	if(x > 100){
		throw string("Value is greater than 100");
	}
}




int main()
{
	try{
		fun1();
	}
	catch(int err){
		cout<<"Error message: "<< err <<endl;
	}
	catch(char const *err){
		cout<<"Error message: "<<err<<endl;
	}
	
	catch(string &err){
		cout<<"Error message: "<<err<<endl;
	}
	cout<<"Still running"<<endl;
	
	return 0;
}