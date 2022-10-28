#include<stdio.h>

int main(){
  
/*
edcba
 dcba
  cba
   ba
    a
*/

    int n = 1;
    for(int i = 'e'; i >= 'a'; i--){
        for(int j = 1; j <= n - 1; j++){
            printf(" ");
        }
        for(int k = i; k >= 'a'; k--){
            printf("%c",k);
        }
        printf("\n");
        n++;
    }
  
  return 0;
}
