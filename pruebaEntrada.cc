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
		void goo(){
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
		
	cout << "ac->foo()" << endl;
	A ac;
	ac = *c;
	ac.foo();


	cout << "ea->foo()" << endl;
	E ea;
	//ea = *a;
	//ea.foo(); // error
	
}
