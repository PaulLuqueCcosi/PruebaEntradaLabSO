#include<iostream>
using namespace std;

class A{
	public:
		virtual void foo(){
			cout << "A" << endl;
		}

};

class  B: public A{
	public:
		virtual void foo(){
			cout << "B" << endl;
		}
};

class C: public A{
	public:
		virtual void goo(){
			cout << "C" << endl;
		}
};

class D: public B{
	public:
		void goo(){
			cout << "D" << endl;
		}
};

class E: public C{
	public:
		void foo(){
			cout << "E" << endl;
		}
};


int main(){
	A *a = new A();
	B *b = new B();
	C *c = new C();
	D *d = new D();
	E *e = new E();

	cout << "----------" << endl;
	cout << "a->foo()" << endl;
	a->foo();
	cout << "b->foo()" << endl;
	b->foo();
	cout << "c->foo()" << endl;
	c->foo();
	cout << "c->goo()" << endl;
	c->goo();
	cout << "d->foo()" << endl;
	d->foo();
	cout << "d->goo()" << endl;
	d->goo();
	cout << "e->foo()" << endl;
	e->foo();
	cout << "e->goo()" << endl;
	e->goo();

	cout << "----------" << endl;

	/*
		 A a1;
		 a1  = *e;
		 cout << "e->foo()" << endl;
		 e->foo();
		 cout << "e.goo()" << endl;
		 e->goo();
		 cout << "e1.foo()" << endl;
		 E e1;
		 e1 = *a; // error	en la conversion
		 e1.foo();
		 cout << "a1.foo()" << endl;
		 a1.foo();
		 cout << "a1.goo()" << endl;
	//a1.goo(); // error, la clase A no tiene el metodo go
	cout << "e->goo()" << endl;
	e->goo();
	cout << "c->foo()" << endl;
	c->foo();
	*/
}
