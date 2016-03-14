#include <iostream>

using namespace std;

int main(){

  int count = 0;
  int number;
  int sum=0;
  while(count<5){
    cout << endl << "type a number:";
    cin >> number;
    sum += number;
    count++;
  }
  cout << "sum is:" << sum << endl;
  return 0;
}
