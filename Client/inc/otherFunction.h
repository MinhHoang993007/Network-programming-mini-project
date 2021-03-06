#ifndef __OTHERFUNCTION_H__
#define __OTHERFUNCTION_H__

#define TIMEOUT -1;

typedef struct
{
    char* str1;
    char* str2;
    int* int1;
    int* int2;
    struct sockaddr_in* addr1;
    struct sockaddr_in* addr2;
    pthread_t thread1;
}Args;

void holdScreen ();
void clearScreen ();
int fgets_timeout (char* buff, int sizeOfBuff, int seconds, int* len);
void tostring(char str[], int num);
int checkCharacter(char* c);
void delay(int secs);
int bigNumberChoose(int startNum, int endNum);
void* numberRun(void* args);
void print_number(int number);

#endif
