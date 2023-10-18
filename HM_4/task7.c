#include <stdio.h>
#include <math.h>
int main(){
        long int bin = 10101010010;
        double dec =0;
        int k = 0;
        while(bin !=0){
                dec += (bin %10)*pow((double)2,(double)k);
                k++;
                bin/=10;
        }
        printf("%d",(int)dec);
        return 0;
}
