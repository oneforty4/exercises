#include <stdio.h>

void foo(void) {

   char arr[255];

   gets(arr);

   return;
}

int main(void) {

   foo();

   return 0;
}
