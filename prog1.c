#include <stdio.h>
int main() {
 // Initialize the string
   char str[] = "Hello world";
   printf("Original string: %s\n\n", str);
   printf("Performing bitwise AND with 127:\n");
   for (int i = 0; str[i] != '\0'; i++) {
     str[i] = str[i] & 127;
     printf("%c", str[i]);
   }
   printf("\n\n");
   printf("Performing bitwise OR with 127:\n");
   for (int i = 0; str[i] != '\0'; i++) {
     str[i] = str[i] | 127;
     printf("%c", str[i]);
   }
   printf("\n\n");
   printf("Performing bitwise XOR with 127:\n");
   for (int i = 0; str[i] != '\0'; i++) {
     str[i] = str[i] ^ 127;
     printf("%c", str[i]);
   }
 printf("\n");
 return 0;
}
