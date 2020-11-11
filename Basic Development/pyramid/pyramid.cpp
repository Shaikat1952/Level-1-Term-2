#include <stdio.h>
#include <stdlib.h>
int main()
{
int l;
printf("Enter size : ");
scanf("%d",&l);
for(int c=1;c<=l;c++){
for(int d=(l-1);d>=c;d--)
{
printf(" ");
}
for(int e=1;e<=c;e++)
{
printf("*");
}
printf("\n");
}
return 0;
}
