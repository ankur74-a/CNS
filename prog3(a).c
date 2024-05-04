#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void encrypt() {
 char plaintext[128];
 char key[16];
 printf("\nEnter the plaintext:");
 scanf(" %[^\n]",plaintext);
 printf("\nEnter the key:");
 scanf(" %[^\n]",key);
 printf("\nCiphertext:");
 for (int i = 0,j=0; i < strlen(plaintext); i++,j++) {
    if (j>=strlen(key)) {
        j=0;
    }
    int shift=toupper(key[j])-'A';
    char encryptedChar=((toupper(plaintext[i])-'A'+shift)%26)+'A';
    printf("%c",encryptedChar);
 }
 printf("\n");
}
void decrypt() {
    char ciphertext[128];
    char key[16];
    printf("\nEnter the ciphertext:");
    scanf(" %[^\n]",ciphertext);
    printf("\nEnter the key:");
    scanf(" %[^\n]",key);
    printf("\nPlaintext:");
    for(int i=0,j=0;i<strlen(ciphertext);i++,j++){
        if(j>=strlen(key)){
            j=0;
        }
        int shift=toupper(key[j])-'A';
        char decryptedChar=((toupper(ciphertext[i])-'A'-shift+26)%26)+'A';
        printf("%c",decryptedChar);
    }
    printf("\n");
}
int main() {
 int choice;
 while(1){
     printf("\n1.Encrypt");
     printf("\n2.Decrypt");
     printf("\n3.Exit");
     printf("\nEnetr ur choice:");
     scanf("%d",&choice);
     switch (choice){
         case 1:
            encrypt();
            break;
         case 2:
            decrypt();
            break;
         case 3:
            exit(0);
         default:
            printf("\nInvalid choice");
            break;
         
     }
 }
 return 0;
}
