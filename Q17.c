#include<stdio.h>

int main(){
  
/*
a
bb
ccc
dddd
eeeee
*/

    for(int i = 'a'; i <= 'e'; i++){
        for(int j = 'a'; j <= i; j++){
            printf("%c", i);
        }
        printf("\n");
    }
  
  return 0;
}
