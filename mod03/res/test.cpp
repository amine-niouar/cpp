#include <iostream>

class A {
protected:
    int h;
    int dd;
    int e;
public:
    A() : h(0), dd(0), e(0) {}
};

class B : virtual public A {
public:
    B() {
        h = 100;
        dd = 100;
        e = 30;
    }
};

class C : virtual public A {
public:
    C() {
        h = 100;
        dd = 50;
        e = 20;
    }
};

class D : virtual public A, public B, public C {
public:
    D() : A(), B(), C() {
        h = B::h;
        dd = C::dd;
        e = B::A::e;
    }
    void show()
    {
         std::cout << "h = " << h << ", dd = " << dd << ", e = " << e << std::endl;
    }
};

int main() {
    D d;
    d.show();
    return 0;
}
