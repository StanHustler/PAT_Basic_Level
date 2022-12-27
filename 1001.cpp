#include <stdio.h>

using namespace std;
int main(){
    int a,c=0;
    scanf("%d",&a);

    while (a!=1) {
        c++;
        if (a%2!=0) a=3*a+1;
        a/=2;
    }

    printf("%d",c);
}