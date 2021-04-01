#include <stdio.h>
int su(int m,int n){
    return m+n;
}
int main(){
    int a=5,b=6;
    int sum=su(a,b);
    printf("%d",sum);
    return 0;
}