#include <stdio.h>
int main(){
    int selling_price , cost_price;
    scanf("%d %d",&selling_price, &cost_price);
    if(selling_price > cost_price){
        printf("Profit");
    }
    else if(selling_price < cost_price){
        printf("Loss");
    }
    else{
        printf("Not Profit No Loss");
    }
}