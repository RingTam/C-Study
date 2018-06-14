#include <iostream>
#include "Inherit.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    //多态
    Parent *b = new Sub();
    b->test();
}