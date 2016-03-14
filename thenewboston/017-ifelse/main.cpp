#include <iostream>

using namespace std;

int main(){

  int age = 26;

  if(age > 60 ){
    //nesting if statement
    if(age > 100){
      cout << "Why are you still alive" << endl;
    }
    cout << "You're old" << endl;
  }else{
    cout << "Get a job!" << endl;
  }
  return 0;
}
