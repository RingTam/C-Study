#include <cstdio>

int main(int argc, char *argv[]) {
    int array[10];
    int a[1];
    printf("%ld\n", sizeof(array)/sizeof(a));
    printf("-----------------------------------------\n");
    int array2[8];
    int a2[0];
    //如果sizeof(a2)出错
    printf("%d\n", sizeof(array2) / sizeof(a2[0]));
}