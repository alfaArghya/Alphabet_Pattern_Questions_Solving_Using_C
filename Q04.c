#include<stdio.h>

int main(){
  
/*
e
de
cde
bcde
abcde
*/

    for(int i = 'e'; i >= 'a'; i--){
        for(int j = i; j <= 'e'; j++){
            printf("%c",j);
        }
        printf("\n");
    }
  
  return 0;
}
