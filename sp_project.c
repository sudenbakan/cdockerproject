#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generate_password(int password_length){

    char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!#$&*()_-+=QWERTYUIOPASDFGHJKLZXCVBNM[};:";
    srand(time(NULL));
    for(int i = 0; i < password_length; i++) {
        printf("%c", list[rand() % (sizeof list - 1)]);
        }
}

int main(){
    printf("Generated password : ");
    generate_password(20);
    printf("\n");

return 0;
}