#include<stdio.h>

int main(){
  
/*
edcba
 edcb
  edc
   ed
    e
*/

    int n = 1;
    for(int i = 'a'; i <= 'e'; i++){
        for(int j = 1; j <= n -1; j++){
            printf(" ");
        }
        for(int k = 'e'; k >= i; k--){
            printf("%c",k);
        }
        printf("\n");
        n++;
    }
  
  return 0;
}
