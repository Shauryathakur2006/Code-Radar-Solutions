#include <stdio.h>
int main(){
    char sh;
    scanf("%s",&sh);
    if(s>=A  && s>=Z){
        printf("Uppercase");
    }
    else if((s>=a && s>=z)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}