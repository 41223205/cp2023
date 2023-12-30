#include <stdio.h>
#include <time.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    wchar_t buff[40];
    struct tm mytime = { .tm_year=116, // = year 2016
                          .tm_mon=8,    // = 9th month
                          .tm_mday=2,   // = 2nd day
                          .tm_hour=17,   // = 17 hours
                          .tm_min=51,   // = 51 minutes
                          .tm_sec=10    // = 10 secs
    };
     printf("\n The textual representation of specified date and time :\n"); 
    if (wcsftime(buff, sizeof buff, L"%A %c", &mytime)) {
        printf("\n%ls\n", buff);
    } else {
        puts("wcsftime failed");
    }
    setlocale(LC_ALL, "en_US.UTF-8");
    if (wcsftime(buff, sizeof buff, L"%A %c", &mytime)) {
        printf("%ls\n\n", buff);
    } else {
        puts("wcsftime failed");
    }
}