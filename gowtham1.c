#include<stdio.h>
#include<math.h>
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
    scanf("%f",&l);
    float a=(3.14/4)*d*d;
    V=q/a;
    printf("\n%f",V);
    float r=V*d/v;
    printf("\n%f",r);
    //float s=1/4;
    float f=0.079/pow(r,0.25);
    printf("\n%f",f);
    float h=(4*f*l*V*V)/(d*2*9.81);
    printf("\n%f",h);
    return 0;
}