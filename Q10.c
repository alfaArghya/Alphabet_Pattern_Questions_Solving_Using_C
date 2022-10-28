#include<stdio.h>

int main(){
  
/*
    e
   ed
  edc
 edcb
edcba
*/
    int n = 1;
    for(int i = 'e'; i >= 'a'; i--){
        for(int j = 1; j <= 5-n; j++){
            printf(" ");
        }
        for(int k = 'e'; k >= i; k--){
            printf("%c",k);
        }
        n++;
        printf("\n");
    }
  
  return 0;
}
