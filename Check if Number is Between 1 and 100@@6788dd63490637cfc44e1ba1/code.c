#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>1){
        printf("In Range");
    }
    else if(a<100){
        printf("In Range");
    }
    else if(a==0){
        printf("Out of Range");
    }
    else{
        printf("Out of Range");
    }
}