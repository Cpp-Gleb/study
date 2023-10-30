#include <stdio.h>
int main(){
        int a = 4;
        short b;
        double c;
        int* ptr;
        printf("size of variable a = %ld\n",sizeof(a));
        printf("size of variable b = %ld\n",sizeof(b));
        printf("size of variable c = %ld\n",sizeof(c));
        ptr = &a;
        printf("value of a = %d\n",a);
        printf("*ptr is %d \n", *ptr);
        return 0;
}
