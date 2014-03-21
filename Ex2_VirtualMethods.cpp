
#include <iostream> //Standard Library input output classes and methods
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;  //Use the standard Namespace


////////////////////////////////////////////////////////////////////////////////////////////////////////
class Student {
public:
  Student(); //Constructor
  ~Student();//Deconstructor
  void DoHomeWork();
  virtual void DoHomeWorkVirtual();
  int GetHealth(){ return theHealth;}
protected:  //Protected members are visible to child clases 
  int theHealth;

};//Class Definition always ends with ;


Student::Student(){
  cout<<"Making a Student In Student class"<<endl;
  theHealth=100;//Defualt Start Value for Health
}
Student::~Student(){
  cout<<"Destroying a Student in Student"<<endl;
}
void Student::DoHomeWork(){
  cout<<"Student class version of Working.."<<endl;
  theHealth--;
}

void Student::DoHomeWorkVirtual(){//the virutal version
  cout<<"This is the virtual version of DoHomeWork in the student class"<<endl;

}
////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////
class GradStudent : public Student {
public:
  void DoHomeWork();
  void DoHomeWorkVirtual();
};

void GradStudent::DoHomeWork(){
  //The GradStudent version of do Home Work
  cout<<"This is a grad student doing homework"<<endl;
  theHealth=-10000;
  cout<<"My health is now "<<theHealth<<endl;
}
void GradStudent::DoHomeWorkVirtual(){
  
  cout<<"This is the Grad student virtual do work"<<endl;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////

class UnderGrad : public Student{
public:
  void DoHomeWork();
  void DoHomeWorkVirtual();
};

void UnderGrad::DoHomeWork(){
  cout<<"Yum Natural Light Beer"<<endl;
}
void UnderGrad::DoHomeWorkVirtual(){
  cout<<"This is the Undergrad virtual do work"<<endl;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argv,char ** argc){  //Always need a main
 
  GradStudent aGradStudent;
  aGradStudent.DoHomeWork();
  cout<<"******************************"<<endl;
  UnderGrad anUnderGrad;
  anUnderGrad.DoHomeWork();
  cout<<"******************************"<<endl;

  vector <Student*> aStudentVector(2);

  //WHAT?!! but what about strongly typed language
  //answer PolyMorphism
  aStudentVector[0]=new UnderGrad();
  aStudentVector[1]=new GradStudent();

  for_each(aStudentVector.begin(), aStudentVector.end(),
      mem_fn(&Student::DoHomeWork));

  //Now the magic of virtual
  cout<<"******************************"<<endl;
  for_each(aStudentVector.begin(), aStudentVector.end(),
      mem_fn(&Student::DoHomeWorkVirtual));

  return 0;
}
