#include <iostream>

using namespace std;
class Fibonacci{
public:
    void generateFibx(int m,int n);
    void generateFiby(int x,int y);

};
void Fibonacci::generateFibx(int m,int n){
    int resArr[100];
    resArr[0]=1;
    resArr[1]=1;
    for(int i=2;i<=100;i++){
        resArr[i]=resArr[i-1]+resArr[i-2];
    }
    for(int j=m;j<=n;j++){
        cout<<resArr[j-1]<<" ";
    }
    cout<<endl;

}
void Fibonacci::generateFiby(int x, int y){
    int resArr[100];
    resArr[0]=1;
    resArr[1]=1;
    for(int i=2;i<=100;i++){
        resArr[i]=resArr[i-1]+resArr[i-2];
    }
    for(int k=0;k<=100;k++){
        if(resArr[k]>=x && resArr[k]<=y){
            cout<<resArr[k] << " ";
        }
    }
    cout<<endl;

}

int main()
{
    int m,n,x,y;
    cin>>m>>n>>x>>y;
    Fibonacci newFibonacci;
    newFibonacci.generateFibx(m,n);
    newFibonacci.generateFiby(x,y);
    return 0;
}

