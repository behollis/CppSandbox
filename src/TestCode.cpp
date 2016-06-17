//============================================================================
// Name        : TestCode.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// some examples
// http://www.careerride.com/C++-what-is-virtual-function.aspx

#include <iostream>
using namespace std;

class B1 {
public:
  void f1() { std::cout << "f1 in B1 called." << std::endl; }
  virtual void f3() { std::cout << "f3 in B1 called. " << std::endl; }
};

class B2 : public B1 {
public:
  virtual void f2()
  {
    cout << "virtual f2 in B2 called." << endl;
  }
  virtual void f3() {
    cout << "virtual f3 in B2 called. " << endl;
  }
};


int main() {
  B1* p_b1obj = new B1();
  B2 b2obj;

/*
	b1obj->f1();
	b1obj->f3();

	B2* b2obj = dynamic_cast<B2*>(b1obj);

	// test for later
	b2obj->f3();
*/

  p_b1obj = &b2obj;

  p_b1obj->f3();

//  p_b1obj->f2();

	cout << "exiting.." << endl;

	return 0;
}


