#ifndef __CLIENT_H__
#define __CLIENT_H__

#define IO_ERROR 10
#define IO_SUCCESS 11

#define LOGIN_ERROR 12
#define LOGIN_SUCCESS 13

#define ACCOUNT_EXIST 14
#define ACCOUNT_NOT_EXIST 16

#define PASS_CORRECT 17
#define PASS_INCORRECT 18

#define ACCOUNT_BLOCKED 19
#define ACCOUNT_JUST_BLOCKED 33
#define ACCOUNT_IDLE 20
#define ACCOUNT_ACTIVE 21

#define MAX_USERNAME_LENGTH 50
#define MAX_PASS_LENGTH 20
#define ACTIVE_CODE_LENGTH 20

#define ACTIVE_SUCCESS 21
#define ACTIVE_ERROR 22

void gameRoom(int roomID, int isHost);

#endif
