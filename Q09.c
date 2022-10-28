#include<stdio.h>

int main(){
  
/*
    a
   ab
  abc
 abcd
abcde
*/

    int n = 1;
    for(int i = 'a'; i <= 'e'; i++){
        for(int j = 1;j <= 5-n; j++){
            printf(" ");
        }
        for(int k = 'a'; k <= i; k++){
            printf("%c",k);
        }
        n++;
        printf("\n");
    }
  
  return 0;
}
