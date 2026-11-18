#include <stdio.h>

int main() {
    int n;
    float height,weight;
    printf("enter 1 for inch\nenter 2 for feet\n");
    scanf("%d",&n);
    printf("enter the value of height : ");
    scanf("%f",&height);
    if(n==1){
        height=(height*2.54)/100;
    }
    else if(n==2){
        height=(height*12*2.54)/100;
    }
    else{
        printf("enter the value of n !!");
        return -1;
    }
    printf("enter the weight : ");
    scanf("%f",&weight);
    printf("BMI = %f",weight/(height*height));

    return 0;
}