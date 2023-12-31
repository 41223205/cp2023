#include <stdio.h> 
#include <time.h>
#include <locale.h>

int main(void)
{
    char time_buff[70];
    struct tm mytime = { .tm_year=116, // = year 2016
                          .tm_mon=8,    // = 9th month
                          .tm_mday=2,   // = 2nd day
                          .tm_hour=16,   // = 16 hours
                          .tm_min=30,   // = 30 minutes
                          .tm_sec=32    // = 32 secs
    };
    printf("\n The textual representation of specified date and time :\n"); 
    if (strftime(time_buff, sizeof time_buff, "%B %c %P" , &mytime)) 
    {
        puts(time_buff);
    } else {
        puts("strftime failed");
    }
    setlocale(LC_TIME, "el_GR.utf8");

    if (strftime(time_buff, sizeof time_buff, "%B %c %P", &mytime)) {
        puts(time_buff);
    } else {
        puts("strftime failed");
    }
    printf("\n");     
}