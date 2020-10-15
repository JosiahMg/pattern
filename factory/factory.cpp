#include <iostream>
#include "factory.h"


void Creator::AnOperation()
{
  Product* p = FactoryMethod();
  cout << "an operation of product" << endl;
  delete p;
}

Product* ConcreteCreator::FactoryMethod()
{
  return new ConcreteProduct();
}


int main()
{
  Creator *p = new ConcreteCreator();
  p -> AnOperation();

  delete p;
  return 0;
}


int oper()
{
  Creator *p = new ConcreteCreator();
  p -> AnOperation();

  delete p;
  return 0;
}
