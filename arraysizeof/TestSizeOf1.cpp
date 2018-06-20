#include <stdio.h>

int main(int argc, char *argv[]) {
    int *array = new int[10];
    int *a = new int[0];
    printf("%ld", sizeof(array)/ sizeof(a));
}