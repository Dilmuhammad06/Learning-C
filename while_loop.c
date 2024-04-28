#include <stdio.h>
#include <stdbool.h>

int main(){
    bool trigger = true;
    int cc = 0;

    while(trigger && cc<50){
        cc++;
        printf("Please turn off the trigger\n");
    }
}