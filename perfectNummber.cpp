
#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a integer, the program will display all of perfect-numbers in this range:"<< endl;
    cin >> n;
    for(int i = 2; i <= n; i++){
      int sum = 0;
      for(int j = 1; j <= i/2; j++){
          if(i%j == 0){
            sum += j;
          }
      }
      if(sum == i){
        cout<<i<<" ";
      }
    }
  cout << endl;
  return 0;
}