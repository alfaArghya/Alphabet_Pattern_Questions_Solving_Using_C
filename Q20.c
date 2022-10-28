#include<stdio.h>

int main(){
  
/*
eeeee
dddd
ccc
bb
a
*/

    for(int i = 'e'; i >= 'a' ; i--){
        for(int j = 'a'; j <= i; j++){
            printf("%c",i);
        }
        printf("\n");
    }
  
  return 0;
}
