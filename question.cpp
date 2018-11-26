#include<iostream>
using namespace std;
class Bank {
	public:
		//Open Account 开户
		void A(int aNumber, string aName, int amount);//括号里是传递的参数
		void B(int amount);
		void C(int amount);
		void D();
	private:
        int accountNumber;
        string accountName;
        int balance;

};
void Bank::A(int aNumber, string aName, int amount){
	accountNumber = aNumber;
	accountName = aName;
	balance = amount;
	cout << accountNumber << " " << accountName<< " " << balance << endl;
}
void Bank::B(int amount){
	balance += amount; //balance = balance + amount
	cout << accountNumber << " " << accountName<< " " << balance << endl;
}
void Bank::C(int amount){
	balance -= amount; //balance = balance - amount
	cout << accountNumber << " " << accountName<< " " << balance << endl;
}
void Bank::D(){
	cout << accountNumber << " " << accountName<< " " << balance << endl;
}

int main(){
	char input;
	Bank newBank;//实例化对象

	while(true){
		cout << "Action(A:open account|B:saving|C:withdrawal|D:check|E:exit): --" << endl;
		cin >> input;
		if(input == 'A'){
			cout << "Account number:--" << endl;
			int aNum;
			cin >> aNum;
			cout << "Account name:--" << endl;
			string aName;
			cin >> aName;
			cout << "Amount:--" << endl;
			int amount;//local variable 本地变量
			cin >> amount;
			newBank.A(aNum, aName, amount);
		}else if(input == 'B'){
			cout << "add amount:--" << endl;
			int amount;
			cin >> amount;
			newBank.B(amount);
		}else if(input == 'C'){
			cout << "withdrawal amount:--" << endl;
			int amount;
			cin >> amount;
			newBank.C(amount);
		}else if(input == 'D'){
			newBank.D();
		}else if(input == 'E'){
			cout << "你输入了-E-" << endl;
			break;
		}else{
			cout << "请输入正确的字符！" << endl;
		}
	}
	 return 0;
}