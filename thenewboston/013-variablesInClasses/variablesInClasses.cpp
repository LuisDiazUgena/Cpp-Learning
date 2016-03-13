#include <iostream>
#include <string>

using namespace std;

class firstClass{

public:
  void setName(string name){
    _name = name;
  }
  string getName(){
    return _name;
  }
private:
  string _name;
};

int main(){
  firstClass myObj;
  myObj.setName("Luis Diaz");
  cout << myObj.getName();
  return 0;
}
