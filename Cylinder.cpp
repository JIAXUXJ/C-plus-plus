#include <iostream>
using namespace std;
#define PI 3.1415926

class Cylinder{
	private:
		int radius;
		int high;
	public:
		void setCylinder(int r,int h);
		int GetArea();
		int GetVol();
	};

void Cylinder::setCylinder(int r_input, int h_input){
	radius = r_input;
	high = h_input;
}

int Cylinder::GetArea(){
	return PI*radius*2*high + PI*radius*radius*2;
}

int Cylinder::GetVol(){
	return PI*radius*radius*high;
}

int main(){
	//get user input r and h
	int r, h;
	cout << "Enter an integer for r: \n";
	cin >> r;
	cout << "The r is " << r << " Now Enter an integer for h: \n";
	cin >> h;
	cout << "h is " << h << endl;

	Cylinder cy; 
	cy.setCylinder(r, h);
	cout<<cy.GetArea()<<endl;
	cout<<cy.GetVol()<<endl;
	
	return 0;
}
