#include<stdio.h>

int main(){
  
/*
edcba
dcba
cba
ba
a
*/

    for(int i = 'e'; i >= 'a'; i--){
        for(int j = i; j >='a'; j--){
            printf("%c",j);
        }
        printf("\n");
    }
  
  return 0;
}
