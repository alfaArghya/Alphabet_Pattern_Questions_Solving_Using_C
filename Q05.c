#include<stdio.h>

int main(){
  
/*
abcde
abcd
abc
ab
a
*/

    for(int i = 'e'; i >= 'a'; i--){
        for(int j = 'a'; j <= i; j++){
            printf("%c",j);
        }
        printf("\n");
    }
  
  return 0;
}
