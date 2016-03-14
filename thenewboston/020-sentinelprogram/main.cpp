#include <iostream>

using namespace std;

int main(){

  int age=0, count=0;
  int total=0;
  float ageAverage;

  cout << "Enter age or -1 to quit" << endl;
  cin >> age;
  while(age!=-1){
    total = total + age;
    count ++;
    cout << "Enter age or -1 to quit" << endl;
    cin >> age;
  }

  ageAverage = total/count;
  cout << "count is: " << count << endl;
  cout << "Age average is: " << ageAverage << endl;
  return 0;
}
