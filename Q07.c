#include<stdio.h>

int main(){
  
/*
edcba
edcb
edc
ed
e
*/

    for(int i = 'a'; i <= 'e'; i++){
        for(int j = 'e'; j >= i; j--){
            printf("%c", j);
        }
        printf("\n");
    }
  
  return 0;
}
