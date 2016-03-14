#include <iostream>
#include <string>

using namespace std;

class firstClass{

  public:
    firstClass(string name){
      setName(name);
    }
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
  firstClass myObj("Luis Diaz");
  
  cout << myObj.getName();
  return 0;
}
