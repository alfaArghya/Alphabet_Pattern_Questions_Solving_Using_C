#include<stdio.h>

int main(){
  
/*
aaaaa
bbbb
ccc
dd
e
*/

    for(int i = 'a'; i <= 'e'; i++){
        for(int j = 'e'; j >= i; j--){
            printf("%c",i);
        }
        printf("\n");
    }
  
  return 0;
}
