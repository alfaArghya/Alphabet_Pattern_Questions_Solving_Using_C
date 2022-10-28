#include<stdio.h>

int main(){
  
/*
abcde
bcde
cde
de
e
*/

    for(int i = 'a'; i <= 'e'; i++){
        for(int j = i; j <= 'e'; j++){
            printf("%c",j);
        }
        printf("\n");
    }
  
  return 0;
}
