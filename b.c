#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int z=0;
    char c;
    printf("entter operation\n");
    scanf("%c",&c);
    printf("entter first number\n");
    scanf("%d",&x);
    printf("entter second number\n");
    scanf("%d",&y);



    switch(c)
    {
    case '+': z=x+y ;   break;
    case '-':z=x-y ;   break;
    case '*': z=x*y ;   break;
    case '/': z=x/y ;   break;

    }
    printf("%d",z);

}
