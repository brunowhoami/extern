#include <stdio.h>
#include "extern2.h"

int x = 10;

void func1(){
    printf("Valor de x em func1: %d\n", x);
}
int main(){
    func1();
    func2();
}