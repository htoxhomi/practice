#include <stdio.h>
int main(void){
    int x,y,z;

    printf("please a");
    scanf("%d",&x);
    printf("please b");
    scanf("%d",&y);
    printf("please c");
    scanf("%d",&z);

    if((x*x + y - z) == 0)
        puts("ok!!");
    else
        puts("noooooooooooo \a ");
    return 0;
}