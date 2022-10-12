#include<iostream>
using namespace std;

class A{
	public:
		void foo(){
			cout << "A" << endl;
		}

};

class  B: public A{
	public:
		void foo(){
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
	
	A a1;
	a1  = *e;
	a1.foo();
}
