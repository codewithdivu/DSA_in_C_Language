// POINTER

#include <stdio.h>

int main()
{

   int var = 20;
   int *ip;

   ip = &var;

   printf("value of var %d\n", var);

   printf("Value of *ip variable: %d\n", *ip);

   printf("Address of var variable: %x\n", &var);

   printf("Address stored in ip variable: %x\n", ip);

   return 0;
}