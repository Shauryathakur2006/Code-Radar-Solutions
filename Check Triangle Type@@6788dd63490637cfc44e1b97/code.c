#include <stdio.h>
int mian(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a=b=c){
        printf("Equilateral");
    }
    else{
        printf("Isosceles");
    }
}