#include <iostream>
using namespace std;
#define PI 3.1415926
class Cylinder{
	private:
		float radius,high;
	public:
		Cylinder(float r,float h):
		radius(r),high(h){};
		float GetAtee();
		float GetVolume();
	};

float Cylinder::GetAtee(){
	return PI*radius*2*high + PI*radius*radius*2;
}

float Cylinder::GetVolume(){
	return PI*radius*radius*high;
}

void main(){
	Cylinder cy(1,1);
	cout<<cy.GetAtee()<<endl;
	cout<<cy.GetVolume()<<endl;
}