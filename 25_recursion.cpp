#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int number){
	cout<<number<<endl;
	if(number==1){
		return 1;
	}
	return number*factorial(number-1);
}


int main(int argc, char** argv) {
	cout<<"Recursion"<<endl;
	cout<<factorial(10)<<endl;
	//5!=5*4*3*2*1
	return 0;
	
}
