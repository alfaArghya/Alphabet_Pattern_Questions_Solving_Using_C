#include<stdio.h>

int main(){
  
/*
    e
   dd
  ccc
 bbbb
aaaaa
*/

    int n = 1;
    for(int i = 'e'; i >= 'a'; i--){
        for(int j = 1; j <= 5-n; j++){
            printf(" ");
        }
        for(int k = 'e'; k >= i; k--){
            printf("%c",i);
        }
        printf("\n");
        n++;
    }
  
  return 0;
}
