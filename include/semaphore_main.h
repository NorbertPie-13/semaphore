#ifndef _SEMAPHORE_MAIN_H
#define _SEMAPHORE_MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

typedef enum
{
    ERROR = -1,
    PASS,
    FAIL
} return_codes;

#define err(...) fprintf(stderr, __VA_ARGS__)

void * thread(void * arg);


#endif