#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	cin>>i;
	switch(i){
		case 1:
			cout<<"monday"<<endl;
			break;
		case 2:
			cout<<"tuesday"<<endl;
			break;
		default:
			cout<<"other wise is wrong"<<endl;	
	}
	return 0;
	
}
