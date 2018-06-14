#include <iostream>
#include "Inherit.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    //多态
    Base *b = new Sub();
    b->test();
    return 0;
}