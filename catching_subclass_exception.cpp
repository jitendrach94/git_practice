#include <iostream>
#include <exception>

using namespace std;
void fun(){
	bool error1 = false;
	bool error2 = true;
	
	if(error1){
		throw bad_alloc();
	}
	if(error2){
		throw exception();
	}
}

int main(){
	try{
		fun();
	}
	catch(bad_alloc &err){
		cout<<"Catching exception from sub class: "<<err.what()<<endl;
	}
	catch(exception &err){
		cout<<"Catching excaption from parent class: "<<err.what()<<endl;
	}
	
	cout<<"Still running"<<endl;
	return 0;
}