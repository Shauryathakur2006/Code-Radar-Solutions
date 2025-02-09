#include <stdio.h>
int main(){
    char sh;
    scanf("%ch",&sh);
    if(sh>='A'  && sh>='Z'){
        printf("Uppercase");
    }
    else if((sh>='a' && sh>='z')){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}