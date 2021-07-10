#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class shop{
	private:
	    int money;
	public:
		shop(int m){
			money = m;
		}
		int getmoney(){
			return money;
		}
};

int main(int argc, char** argv) {
	shop s(10);
	cout<<s.getmoney();
	shop d(5);
	cout<<d.getmoney();
	return 0;
}
