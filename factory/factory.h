#ifndef _FACTORY_H_
#define _FACTORY_H_

#include <iostream>
using namespace std;

class Product{

public:
  Product(){}
  virtual ~Product(){}
};


class ConcreteProduct : public Product{

public:
  ConcreteProduct()
  {
    cout << " Construction of ConcreteProduct" << endl;
  }

  virtual ~ConcreteProduct()
  {
    cout << "Destruction of ConcreteProduct" << endl;
  }
};


class Creator
{
public:
  Creator(){}
  virtual ~Creator(){}

  void AnOperation();

protected:
  virtual Product* FactoryMethod() = 0;
};


class ConcreteCreator : public Creator{

public:
  ConcreteCreator()
  {
    cout << "Construction of ConcreteCreator" << endl;
  }
  virtual ~ConcreteCreator()
  {
    cout << "Destruction of ConcreteCreator" << endl;
  }
protected:
  virtual Product* FactoryMethod();
};















#endif
