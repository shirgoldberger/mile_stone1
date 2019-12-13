//
// Created by eliadsellem on 12/11/19.
//

#ifndef ADVANCED__OBJ_H_
#define ADVANCED__OBJ_H_
#include <string>
#include "Expression.h"
#include "Obj.h"
using namespace std;


class Obj : public Expression{
  string valName = " ";
  float value = 0;
  string sim;
  int direction = 0;

 public:
  Obj(const string s) {
    this->sim = s;
  }
  Obj(string name ,float val){
    this->valName = name;
    this->value = val;
  }
  void setDirection(int d);
  void setValue(int val);
  //prefix
  Obj &operator++();
  Obj &operator--();

  //postfix.
  Obj &operator++(int);
  Obj &operator--(int);

  Obj &operator-=(float val);
  Obj &operator+=(float val);

  float calculate() override;

  ~Obj(){};
};
#endif //ADVANCED__OBJ_H_