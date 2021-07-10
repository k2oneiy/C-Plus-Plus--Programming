#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int age = 117;
	bool voit_register = true;
	// && and , || or
	if(age >= 18 && voit_register == true){
		cout<<"eligible to vote";
	}
	else{
		cout<<"not eligible to vote";
	}
	
	return 0;
}
