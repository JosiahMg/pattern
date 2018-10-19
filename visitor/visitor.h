#ifndef _VISITOR_H_
#define _VISITOR_H_

class Visitor;

/*base class of node*/
class Element{

public:
  virtual ~Element(){}
  virtual void Accept(Visitor& visitor) = 0;
};


/*derived class of node : ElementA*/
class ConcreteElementA : public Element{

public:
  virtual ~ConcreteElementA(){}
  virtual void Accept(Visitor& visitor);
};

/*derived class of node : ElementB*/
class ConcreteElementB : public Element{

public:
  virtual ~ConcreteElementB(){}
  virtual void Accept(Visitor& visitor);
};

/*base of class visitor*/
class Visitor{
public:
  virtual ~Visitor(){}
  virtual void VisitConcreteElementA(ConcreteElementA *pConcreteElementA) = 0;
  virtual void VisitConcreteElementB(ConcreteElementB *pConcreteElementB) = 0;

protected:
  Visitor(){}
};


class ConcreteVisitorA : public Visitor {
public:
  virtual ~ConcreteVisitorA(){}
  virtual void VisitConcreteElementA(ConcreteElementA* pConcreteElementA);
  virtual void VisitConcreteElementB(ConcreteElementB* pConcreteElementB);
};

class ConcreteVisitorB : public Visitor {
public:
  virtual ~ConcreteVisitorB(){}
  virtual void VisitConcreteElementA(ConcreteElementA* pConcreteElementA);
  virtual void VisitConcreteElementB(ConcreteElementB* pConcreteElementB);
};








#endif
