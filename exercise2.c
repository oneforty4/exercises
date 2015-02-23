#include <stdio.h>

void foo(void) {
   char str[10]; // Character array
   int a = 0; // Some integer value

   printf("Enter a string: ");
   gets(str); // Write into str

   printf("Contents of str: %s\nContents of a: %i\n", str, a);

   /* Can we get this code to execute? */
   if (a != 0)
      printf("Success... buffer overflow!\n"); // 0x0804847a

   return;
}

int main(void) {

   foo();

   return 0;
}
