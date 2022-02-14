#include <stdio.h>
int f(int x) {
    if (x>1) return (x+f(x-1));
       else if (x==0) return 0;
       else return 1;
}
int main() {
    int n;
    printf("silahkan masukkan angka : ");scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
