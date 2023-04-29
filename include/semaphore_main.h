#ifndef _SEMAPHORE_MAIN_H
#define _SEMAPHORE_MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define err(...) fprintf(stderr, __VA_ARGS__)

typedef enum
{
    ERROR = -1,
    PASS,
    FAIL
} return_codes;

void * thread(void * arg);


#endif