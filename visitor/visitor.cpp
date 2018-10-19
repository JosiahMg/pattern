#include <iostream>
#include "visitor.h"

using namespace std;


/*Visitor A visit node A*/
void ConcreteVisitorA::VisitConcreteElementA(ConcreteElementA *pConcreteElementA)
{
  cout << "visitor A visit element A" << endl;
}

/*Visitor A visit node B*/
void ConcreteVisitorA::VisitConcreteElementB(ConcreteElementB *pConcreteElementB)
{
  cout << "visitor A visit element B" << endl;
}

/*Visitor B visit node A*/
void ConcreteVisitorB::VisitConcreteElementA(ConcreteElementA *pConcreteElementA)
{
  cout << "visitor B visit element A" << endl;
}

/*Visitor B visit node B*/
void ConcreteVisitorB::VisitConcreteElementB(ConcreteElementB *pConcreteElementB)
{
  cout << "visitor B visit element B" << endl;
}

/*Accept of node A*/
void ConcreteElementA::Accept(Visitor& visitor)
{
  visitor.VisitConcreteElementA(this);
}

/*Accept of node B*/
void ConcreteElementB::Accept(Visitor& visitor)
{
  visitor.VisitConcreteElementB(this);
}


int main()
{
  Visitor *pVisitorA = new ConcreteVisitorA();
  Element *pElement = new ConcreteElementB();

  pElement->Accept(*pVisitorA);

  delete pVisitorA;
  delete pElement;

  return 0;
}
