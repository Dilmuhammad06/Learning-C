#include <stdio.h>

int main(){

    int n = 100;

    for(int i=0; i<n;i++){
        if(i<1){
            printf("Start\n");
        }
        else if(i==99){
            printf("The end\n");
        }
        printf("Current num is %i\n",i);
    }


    return 0;
}