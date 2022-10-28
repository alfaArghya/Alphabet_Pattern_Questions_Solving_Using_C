#include<stdio.h>

int main(){
  
/*
    e
   de
  cde
 bcde
abcde
*/

    int n = 1;
    for(int i = 'e'; i >= 'a'; i--){
        for(int j = 1; j <= 5-n; j++){
            printf(" ");
        }
        for(int k = i; k <= 'e'; k++){
            printf("%c",k);
        }
        n++;
        printf("\n");
    }
  
  return 0;
}
