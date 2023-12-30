int main()
{
double answer, expno, natlog, lb10;
/* find exponent of entered number */
printf("exponental function:\n ");
printf("Please enter number:\n ");
scanf("%lf", &expno);
printf("You entered %lf\n", expno);
answer = exp(expno);
printf("exponent of %lf is %lf\n", expno, answer);
/* find natural logarithm of entered number */
printf("natural logarithm function:\n ");
printf("Please enter number:\n ");
scanf("%lf", &natlog);
printf("You entered %lf\n", natlog);
answer = log(natlog);
printf("natural logarithm of %lf is %lf\n", natlog, answer);
/* find log to base 10 of entered number */
printf("log to base 10 function:\n ");
printf("Please enter number:\n ");
scanf("%lf", &lb10);
printf("You entered %lf\n", lb10);
answer = log10(lb10);
printf("log to base 10 of %lf is %lf\n", lb10, answer);
}