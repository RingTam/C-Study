#include <cstdio>

int main(int argc, char *argv[]) {
    int a = 511, *b=&a;
    printf("%d\n", *b);
}