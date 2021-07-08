#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Shop{
	private:
		int money;
		
	public:
		void moneyget(){
			money = money + 5;
		}	
		
		int returnmoney(){
			return money;
		}
};

int main(int argc, char** argv) {
	
	Shop cus;
	cus.moneyget();
	cout<<cus.returnmoney();
	
	return 0;
}
