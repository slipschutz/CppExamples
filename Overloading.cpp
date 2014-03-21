


#include <iostream>
using namespace std;

class Statmech;
class Fish{
public:
  int NumberOfEyes;
  void operator=(const Statmech&);


};

void Fish::operator=(const Statmech&){

  return;
}


class Statmech {

public:
  Statmech operator+(const Statmech&);
  Statmech operator+(const int &);
  Fish operator=(const Statmech&);
  Fish operator=(const int &);

  Statmech operator,(const Statmech&);
};

Statmech Statmech::operator,(const Statmech&){

  return Statmech();
}



Statmech Statmech::operator+(const Statmech&){

  Statmech a;
  return a;

}

Statmech Statmech::operator+(const int &){
  cout<<"HAHHHAAHHAH"<<endl;
  Statmech a;
  return a;
}

Fish Statmech::operator=(const Statmech& d){
  Fish a;
  a.NumberOfEyes=10;
  return a;
}
Fish Statmech::operator=(const int& d){
  Fish a;
  a.NumberOfEyes=-14125;;
  return a;
}

int main(){
  Statmech a;
  Statmech b;
  Statmech c = a+5;


  Statmech aStatmech;
  Fish aFish;
  aFish= aStatmech=aStatmech;
  cout<<"Fish's number of eyes "<<aFish.NumberOfEyes<<endl;

  Fish aFish2 = aStatmech=7;
  cout<<"Fish 2 has "<<aFish2.NumberOfEyes<<endl;
  

  aFish=(a,b);
}
