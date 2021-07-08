#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print(){
	cout<<" Print of Hi Guys !!!"<<endl;
}

int Thired(int a, int b, int c){
	return a+b+c;
}

//funcation name first call = second method
void second();

int main(int argc, char** argv) {
	cout<<Thired(1,2,3)<<endl;
	print();
	
	return 0;

}

//wrong method
//void print(){
//	cout<<" Print of Hi Guys !!!"<<endl;
//}

void second(){
	cout<<"seocnd method"<<endl;		
}
