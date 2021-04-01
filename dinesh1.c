#include<stdio.h>
#include<math.h>
int main(){
    int w,p,a;
    float PI=3.141;
    printf("Enter the following:");
    printf("\nEnter the Weight:");
    scanf("%d",&w);
    printf("Enter the force applied:");
    scanf("%d",&p);
    printf("Enter the angle of inclination:");
    scanf("%d",&a);
    double val = a*(PI/180);
    double temp=cos(val);
    double te2=sin(val);
    float r=w*temp;
    printf("The value of R: %f",r);
    float mu=350-(w*te2);
    float an=mu/r;
    printf("\nThe value of μ: %f",an);
    float p=w*temp+(mu*r);
    printf("The value of P: %f",p);
    return 0;
}