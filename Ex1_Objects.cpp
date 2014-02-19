#include <iostream> //Standard Library input output classes and methods
using namespace std;  //Use the standard Namespace

class Student {
public:
  Student(); //Constructor
  ~Student();//Deconstructor
  void DoHomeWork();
  int GetHealth(){ return theHealth;}
private:
  int theHealth;

};//Class Definition always ends with ;

Student::Student(){
  cout<<"Making a Student"<<endl;
  theHealth=100;//Defualt Start Value for Health
}
Student::~Student(){
  cout<<"Destroying a Student"<<endl;
}
void Student::DoHomeWork(){
  cout<<"Working.."<<endl;
  theHealth--;
}
int main(int argv,char ** argc){  //Always need a main
  Student myInstanceOfTheStudentClassWhichIsAStudentObject;
  cout<<"My Health is "<<myInstanceOfTheStudentClassWhichIsAStudentObject.GetHealth()<<endl;
  myInstanceOfTheStudentClassWhichIsAStudentObject.DoHomeWork();
  cout<<"My Health is now "<<myInstanceOfTheStudentClassWhichIsAStudentObject.GetHealth()<<endl;
  return 0;
}


