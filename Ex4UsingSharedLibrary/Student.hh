

#include <iostream>
using namespace std;

#ifndef __STUDENT_HH
#define __STUDENT_HH

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

#endif
