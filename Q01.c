#include<stdio.h>

int main(){
  
/*
a
ab
abc
abcd
abcde
*/

    for(int i = 'a'; i <= 'e'; i++){
        for(int j = 'a'; j <= i; j++){
            printf("%c",j);
        }
        printf("\n");
    }
  
  return 0;
}
