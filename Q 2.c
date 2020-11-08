#include <stdio.h>
#include <stdlib.h>

int main()
{int d ;
    int x ,y ,Remainder,Quotient;
      printf("enter the dividend\n");
        scanf("%d",&x);
      printf("enter the divisor\n");
        scanf("%d",&y);

    Quotient = x/y;
      printf("  Quotient = %d\n",Quotient);
  // printf("%d / %d = %d\n",x ,y ,x/y);

    Remainder = x%y;
      printf("  remainder = %d",Remainder);

    scanf("%d",d);


}
