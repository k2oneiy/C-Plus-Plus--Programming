#include <iostream>
using namespace std;

void printofarray(int e[],int sizeofarray){
	for(int i=0;i<sizeofarray;i++){
		cout<<e[i];
	}
}

int main(int argc, char** argv) {
	
	int a[6] = {11,12,13,14,15,16};
	int b[6] = {111,123,132,145,156,166};
	
	printofarray(a,6);
	cout<<" "<<endl;
	printofarray(b,7);

	return 0;
}
