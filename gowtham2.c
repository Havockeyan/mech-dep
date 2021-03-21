#include<stdio.h>
#include<math.h>
int main(){
    float d=0.20,l,h,f=0.009;
    printf("Enter the values for the following:");
    printf("Diameter of pipe:");
    scanf("%f",&d);
    printf("Length of the pipe:");
    scanf("%f",&l);
    printf("Defference of pressure head:");
    scanf("%f",&h);
    float r=(h*d*2*9.81)/(4*f*l);
    float rf=sqrt(r);
    printf("%f",rf);
    float q=rf*(3.14/4)*d*d;
    printf("\n%f",q);
}