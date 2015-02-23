#include <stdio.h>

void foo(void) {
   int a = 0; // Some integer value
   char str[10]; // Character array

   printf("Enter a string: ");
   gets(str); // Write into str

   printf("Contents of str: %s\nContents of a: %i\n", str, a);

   /* Can we get this code to execute? */
   if (a != 0)
      printf("Success... buffer overflow!\n");

   return;
}

int main(void) {

   foo();

   return 0;
}
