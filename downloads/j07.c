/* 請將這個程式存為 file1.c */
int sum( int a, int b )
{
return (a+b);
}

/* 請將這個程式存為 file2.c */
int mul( int a, int b )
{
return (a*b);
}
/* 請將這個程式存為 file3.c */
extern int sum( int, int );
extern int mul( int, int );
#include <stdio.h>
int main()
{
printf(“6+2 = %d\n”, sum(6,2) );
printf(“6*2 = %d\n”, mul(6,2) );
return 0;
}