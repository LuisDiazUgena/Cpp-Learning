#include <iostream>

using namespace std;

class FirstClass{ //usually we name classes with upercase
  public:
    void coolSaying(){
      cout << "Nothing cool to say, yet!" << endl;
    }
};

int main(){
  //We use objects to access functions inside a class
  FirstClass myClassObject;

  myClassObject.coolSaying();

  return 0;
}
