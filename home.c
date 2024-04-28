#include <stdio.h>


int main(){


int cc = 0;

for(int i=0;i<100000000000;i++){
    cc++;
    int res = cc*cc;
    cc++;
    printf("Smt %d times %d\n",i,res);
}
return 0;
}

