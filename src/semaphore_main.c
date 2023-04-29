#include "semaphore_main.h"

sem_t semaphore;

int main (void)
{
    int ret_val = FAIL;

    sem_init(&semaphore, 0, 1);

    pthread_t threads[2];

    int idx = 0;

    for (;idx < 2; ++idx)
    {
        pthread_create(&(threads[idx]), NULL, thread, NULL);
        sleep(2);
    }
    idx -= 1;

    for (; idx >= 0 ; idx--)
    {
        pthread_join(threads[idx], NULL);
    }

    ret_val = PASS;
    sem_destroy(&semaphore);

    return ret_val;
}

void * thread(void * arg)
{
    arg = NULL;
    sem_wait(&semaphore);
    printf("This used the semaphore.\n");

    sleep(2);

    printf("Exiting semaphore.\n");
    sem_post(&semaphore);
    return arg;
}
