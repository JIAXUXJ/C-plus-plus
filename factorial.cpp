#include <iostream>
using namespace std;

class Factorial{
	private:
		int n;
		int fn;
	public:
		void set_n(int number);
		void cal_fn();
		int get_n();
		int get_fn();
};
void Factorial::set_n(int num){
	n = num;
}
int Factorial::get_n(){
	return n;
}
void Factorial::cal_fn(){
	int ret = 1;
    for(int i = 1; i <= n; ++i){
		ret *= i;
    }
    fn = ret;
}
int Factorial::get_fn(){
	return fn;
}

int main(){
	int input_number;
	cout << "Enter an integer: " << endl;
	cin >> input_number;
	Factorial ft;
	ft.set_n(input_number);
	ft.cal_fn();
	cout << "The factorial of " << ft.get_n() << " is " << ft.get_fn() << endl;
	return 0;
}