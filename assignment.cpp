/* create a calculator program that will accept two numbers and compute the sum, difference, product, quotient and modules of the 2 nembers
inputs:
    num1,num2
    outputs:
        sum
        diff
        pro
        quot
        mod
        computations
        sum = num1+num2;
        diff = num-num2;
        pro = num1*num2;
        quot = num1/num2;
        mode = num1%num2;

    */
#include <stdio.h>
 int main()
 {
     //Variable declaration
    int num1,num2,sum,diff,pro,mod;
    float quot;

    //Assignment
    num1 = 600;
    num2 = 100;

    //Computations
    sum = num1 + num2;
    diff = num1-num2;
    pro = num1 * num2;
    quot = (float)num1  / num2;
    mod = num1 % num2;

    //output

    //sum:result
    //3+5=8
    printf("%d + %d = %d\n",num1,num2,sum);
    printf("%d - %d = %d\n",num1,num2,diff);
    printf("%d * %d = %d\n",num1,num2,pro),
    printf("%d / %d = %f\n",num1,num2,quot);
    printf("%d mod %d= %d\n",num1,num2,mod);

    return 0;
}
