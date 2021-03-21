#include<stdio.h>
int main(){
    float v,d,q,l,V;
    printf("Enter the values of the following:");
    printf("Kinamatic viscocity:");
    scanf("%f",&v);
    printf("Diameter of pipe:");
    scanf("%f",&d);
    printf("Discharge:");
    scanf("%f",&q);
    printf("Length of pipe:");
    scanf("%f,&l");
    float a=(3.14/4)*d*d;
    V=q/a;
    printf("\n%f",V);
    
}