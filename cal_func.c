#include "cal.h"

float calculator(float num1,char op, float num2)
{
    float result=0.0f;
    switch(op)
    {
        case '+':
            result = add(num1, num2);

            break;

        case '*':
            result = mult(num1, num2);
            break;


        default:
            printf("Operator Invalid");
    }
    return result;
}
float add(float num1, float num2)
{

    return num1 + num2;
}
float mult(float num1, float num2)
{
    return num1 * num2;
}
