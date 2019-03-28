#include<stdio.h>
#include<assert.h>
#include "cal.h"

void add_test()
{
    printf("Testing Addition function\n");
    assert(calculator(2,'+',2)==4);
    assert(calculator(2,'+',-2)==(0));
    assert(calculator(-2,'+',-2)==(-4));
    printf("OK, Addition Tested...\n");
}
void multiply_test()
{
    printf("Testing Multiplication function\n");
    assert(calculator(2,'*',0)==(0));
    assert(calculator(2,'*',-2)==(-4));
    assert(calculator(-2,'*',-2)==(4));
    printf("OK, Multiplication Tested...\n");
}
int main()
{
    add_test();
    multiply_test();
    printf("Test complete\n");
}
