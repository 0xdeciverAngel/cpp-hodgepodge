#include <stdio.h>
#include <string.h>
int len;
void encrypt(char plan[], char cipher[], char key) 
{
  int i;
  len=11;
  for (i=0; i<len; i++) 
  {
    cipher[i] = plan[i] ^ key;
  }
}
 
void decrypt(char cipher[], char plan[], char key) 
{
  int i;
  len=11;
  for (i=0; i<len; i++) 
  {
    plan[i] = cipher[i] ^ key;
  }
}
int main() {
  char plan[] = "Flag{25795}";
  char cipher[100], plan2[100];
  char key = 0x3;
  printf("org=%s\n", plan);
  encrypt(plan, cipher, key);
  printf("en=%s\n", cipher);
  decrypt(cipher, plan2, key);
  printf("de=%s\n", plan2);
}

