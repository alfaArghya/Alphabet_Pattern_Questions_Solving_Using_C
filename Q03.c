#include<stdio.h>

int main(){
  
/*
e
ed
edc
edcb
edcba
*/

    for(int i = 'e'; i >= 'a'; i--){
        for(int j = 'e'; j >= i; j--){
            printf("%c", j);
        }
        printf("\n");
    }
  
  return 0;
}
