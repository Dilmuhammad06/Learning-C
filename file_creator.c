#include <stdio.h>


int main(){
    char code[] = 
    "print('Hello dear user')\nfor i in range(1,11):\n  print(f'countdown {i}')\nprint('THe end')"
    ;
    FILE *file_ptr = fopen("hello_man.py","w");
    fprintf(file_ptr,code);
    printf("%s",code);
    return 0;
}