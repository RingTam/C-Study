using namespace std;

#include <iostream>

/**
 * 父类
 */
class Parent {
public:

    /**
     * 构造方法
     */
    Parent() {
        test();
    }

    /**
     * 抽象方法
     */
    virtual void test() { printf("A\r\n"); };

};

/**
 * 子类
 */
class Sub : public Parent {

public:

    /**
     * 测试
     */
    void test() {
        printf("B\r\n");
    }
};
