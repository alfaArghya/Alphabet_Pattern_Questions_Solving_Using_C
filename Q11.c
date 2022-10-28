 #include<stdio.h>

int main(){
  
/*
    a
   ba
  cba
 dcba
edcba
*/

    int n = 1;
    for(int i = 'a'; i <= 'e'; i++){
        for(int j = 1; j <= 5-n; j++){
            printf(" ");
        }
        for(int k = i; k >= 'a'; k--){
            printf("%c",k);
        }
        n++;
        printf("\n");
    }
  
  return 0;
}
