#include <iostream>
using namespace std;

class myclass{
	public:
		myclass(){
			cout<<"construtor"<<endl;
		}
		~myclass(){
			cout<<"destructor"<<endl;
		}
		
};


int main(int argc, char** argv) {
	myclass obj ;
	cout<<"main"<<endl;
	return 0;
	
}




