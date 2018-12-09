#include <iostream>
using namespace std;
class Rectangle{
    public:
        double setA(double a){
            a1 = a;
            return a1;
        }
        double setB(double b){
            b1 = b;
            return b1;
        }
        void area(double a,double b){
            // a1 = a;
            // b1 = b;
            c1 = a1 * b1;
            cout << c1 << endl;
        }
        
    protected:
        double a1;
        double b1;
        double c1;
};
class Morearea:public Rectangle{
    public:
        void surfacearea(double h){
            double surfaceArea;
            // a1 = a;
            // b1 = b;
            h1 = h;
            surfaceArea = (a1 * b1 + b1 * h1 + a1 * h1) * 2;
            cout << surfaceArea << " ";
            double volume;
            volume = a1*b1*h1;
            cout << volume << endl;
        }
    private:
            double h1;

};

int main(){
    char letter;
    // Morearea ma;

    for(;;){
        cin >> letter;

        if(letter == 'A'){
            Rectangle rect;
            double a,b;
            cin >> a >> b;
            rect.setA(a);
            rect.setB(b);
            rect.area(a,b);
        }else if(letter == 'B'){
            Morearea ma;
            double a,b,h;
            cin >> a >> b >> h;
            ma.setA(a);
            ma.setB(b);
            ma.surfacearea(h);
        }else if(letter == 'E'){
            break;
        }
    }

    return 0;
}
