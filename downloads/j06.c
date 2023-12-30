/* ====================
pointer – 6
==================== */
#include <stdio.h>
void main()
{
char *str = "Eric";
printf( "%c", *(str+0) ); /* 也可寫 printf(“%c”,str[0] ); */
printf( "%c", *(str+1) ); /* 也可寫 printf(“%c”,str[1] ); */
printf( "%c", *(str+2) ); /* 也可寫 printf(“%c”,str[2] ); */
printf( "%c", *(str+3) ); /* 也可寫 printf(“%c”,str[3] ); */
}