#include<stdio.h>

int main(){
  
/*
a
ba
cba
dcba
edcba
*/

    for(int i = 'a'; i <= 'e'; i++){
        for(int j = i; j >= 'a'; j--){
            printf("%c",j);
        }
        printf("\n");
    }
  
  return 0;
}
