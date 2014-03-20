
#include "Student.hh"


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

