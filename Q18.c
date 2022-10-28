#include<stdio.h>

int main(){
  
/*
e
dd
ccc
bbbb
aaaaa
*/

    for(int i = 'e'; i >= 'a'; i--){
        for(int j = 'e'; j >= i; j--){
            printf("%c",i);
        }
        printf("\n");
    }
  
  return 0;
}
