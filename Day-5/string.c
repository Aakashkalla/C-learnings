#include <stdio.h>
#include <string.h>

int main(void){
  char s[] = "Hello World!";
  char *t;
  char u[100];

  // This makes a copy of the pointer, not a copy of the string;
  t = s; 

  //This makes a copy of the srtring;
  strcpy(u,s);

  for(int i = 0; i < 13; i++){
    printf("%c", s[i]);
  }
  
  printf("\n");

  char *strg = "Hello String!";

  printf("%s\n", strg);
  printf("The string is %zu bytes long.\n", strlen(s));
  printf("The string is %zu bytes long.\n", strlen(strg));
  
  // modifying t, will also modify the original string.
  t[0] = 'Z';

  //Modifying copied string "u" doesn't affect original string;
  u[0] = 'S';

  printf("%s\n", s);
  printf("%s\n", u);
}
