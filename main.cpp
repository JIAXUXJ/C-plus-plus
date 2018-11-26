#include <iostream>

using namespace std;

class Counter
{
public:
    void A(int firNum,int secNum,int curNum);
    void B(int addNum);
    void C(int subNum);
    int D();
private:
    int firstNum;
    int secondNum;
    int currentNum;

};
void Counter::A(int firNum, int secNum,int curNum){
    firstNum = firNum;
    secondNum = secNum;
    currentNum = curNum;
    cout<<firstNum<<" "<<secondNum<<" "<<currentNum<<endl;

};
void Counter::B(int addNum){
    currentNum += addNum;
    if(currentNum > secondNum){
        int a;
        a = currentNum - secondNum - 1;
        cout<<firstNum<<" "<<secondNum<<" "<<a<<endl;
    }else{
        cout<<firstNum<<" "<<secondNum<<" "<<currentNum<<endl;

    }
}
void Counter::C(int subNum){
    currentNum -= subNum;
    if(currentNum < 0 ){
        int b;
        b = secondNum + currentNum + 1;
        cout<<firstNum<<" "<<secondNum<<" "<<b<<endl;



    }else{
        cout<<firstNum<<" "<<secondNum<<" "<<currentNum<<endl;

    }
}
int Counter::D(){
    return 0;
}

int main()
{
    char input;
    Counter newCounter;

    while(true)
    {
        cout<<"A(creat counter);B(add);C(subtract);D(exit)"<<endl;
        cin>>input;
                if( input == 'A' ){
            cout<<"Enter left and right intervals and current value"<<endl;

            int firNum;
            cout<<"Please enter the left interval:";
            cin>>firNum;

            int secNum;
            cout<<"Please enter the right interval:";
            cin>>secNum;

            int curNum;
            cout<<"Please enter the current number:";
            cin>>curNum;

            newCounter.A(firNum,secNum,curNum);
        }else if(input == 'B'){
                    int addNum;
                    cout<<"Please enter the addNum:";
                    cin>>addNum;
                    newCounter.B(addNum);
                }else if(input == 'C'){
                    int subNum;
                    cout<<"Please enter the subNum:";
                    cin>>subNum;
                    newCounter.C(subNum);
                }else if(input == 'D'){
                    newCounter.D();
                }else{
            cout<<"Please enter the correct characters!"<<endl;
        }
    }

       return 0;
}

