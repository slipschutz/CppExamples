
#include <iostream>
#include <vector>
#include "GradStudent.hh"
#include "UnderGrad.hh"
using namespace std;

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

  


  for (int i=0;i<aStudentVector.size();i++){
    aStudentVector[i]->DoHomeWork();
  }


  //Now the magic of virtual
  cout<<"******************************"<<endl;
  for (int i=0;i<aStudentVector.size();i++){
    aStudentVector[i]->DoHomeWorkVirtual();
  }

  return 0;
}
