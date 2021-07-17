#include <iostream>
using namespace std;


int sum(int a, int b=0, int c=0){
	return a+b+c;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<sum(100,1000,1000);
	return 0;
}
