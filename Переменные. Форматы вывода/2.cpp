#include<stdio.h>

main()
{
  int a = 5;
  printf("Number is %d!\n", 10+a);   // вместо шаблона %d, 
                                   // подставится значение 10
  printf("Number is %d!", a);      // вместо шаблона %d, 
                                   // подставится значение переменной a 
}