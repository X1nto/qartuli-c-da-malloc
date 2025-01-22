//
// Created by Tornike Khintibidze on 22.01.25.
//

#ifndef DRO_H
#define DRO_H

#include <time.h>
#include "qartuli.h"

typedef  clock_t

char *asctime(const struct tm *timeptr);
clock_t clock(void)
char *ctime(const time_t *timer)
double difftime(time_t time1, time_t time2);
struct tm *localtime(const time_t *timer);
time_t mktime(struct tm *timeptr);
size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr);

#endif //DRO_H
