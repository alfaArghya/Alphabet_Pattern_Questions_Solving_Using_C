#include<stdio.h>

int main(){
  
/*
eeeee
 dddd
  ccc
   bb
    a
*/

    int n = 1;
    for(int i = 'e'; i >= 'a'; i--){
        for(int j = 1; j <= n-1; j++){
            printf(" ");
        }
        for(int k = 'a'; k <= i; k++){
            printf("%c",i);
        }
        printf("\n");
        n++;
    }
  
  return 0;
}
