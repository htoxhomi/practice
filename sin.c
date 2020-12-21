/*直角三角形のsin,cos,tanの近似値を出す*/

#include <stdio.h>
int main(void){

int x,y,z;
double a,b,c;

printf("Please enter the [hypotenuse]");
scanf("%d",&x);
printf("Please enter the [bottom]");
scanf("%d",&y);
printf("Please enter the [height]");
scanf("%d",&z);

if(x > y+z)
    printf("Can't make a triangle");
else if(x*x == (y*y + z*z)){         /* aを使い回していく事も可*/
    a= a*z/x/a;                    
    printf("sin=%f \n",a);
    b= a*y/x/a;
    printf("cos=%f \n",b);
    c= a*z/y/a;
    printf("tan=%f \n",c);
}
else if(x == y+z){
    printf("It's a straight line");  /*0.90.180°であることをそれぞれ認識し、別で答えを出せるようにする*/
}

else
    printf("There is no right angle");

return 0;
}