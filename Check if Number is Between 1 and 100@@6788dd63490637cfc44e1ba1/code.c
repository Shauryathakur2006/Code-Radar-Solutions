#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>1){
        printf("In Range");
    }
    else if(a<100){
        printf("In Reange");
    }
    else{
        printf("Out of Range");
    }
}