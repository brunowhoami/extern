#include <stdio.h>

extern int x;

void func2(){
    x = 42;
    printf("Valor de x em func2: %d\n", x);
}
