using namespace std;

#include <iostream>

class Base {
public:
    Base() {
        test();
    }

public:
    virtual void test() { printf("A\r\n"); };
};

class Sub : public Base {
public:
    Sub() {}

public:
    void test() {
        printf("B\r\n");
    }
};
