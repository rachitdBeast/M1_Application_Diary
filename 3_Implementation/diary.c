/**
 * @file diary.c
 * @author Selwyn Rachit Bhengra (selwynrachit@karunya.edu.in)
 * @brief 
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "afro.h"

FILE *fp;
int main()
{
   welcome_message();
    char press;
    int num;
First:
    printf("\n\n---- Press ----- operation ------\n\n");
    printf("     '+' ------ add new note     \n");
    printf("     'a' ------ append new note     \n");
    printf("     'v' ------ View Previous     \n");
    printf("     'e' ------ Exit Program     \n\n");
    printf("-------------------------------\n\n");

while(1)
{
    scanf("%c",&press);

    if (press == '+'){
        insert();
        printf("Press '1' for continue\n'0' for Exit\n");
        scanf("%d", &num);
        if (num == 1){
            goto First;
        }
        else{
            break;
        }
    }
    else if (press == 'a'){
        append();
        printf("Press '1' for continue\n'0' for Exit\n");
        scanf("%d", &num);
        if (num == 1){
            goto First;
        }
        else{
            break;
        }
    }
    else if (press == 'v'){
        view();
        printf("Press '1' for continue\n'0' for Exit\n");
        scanf("%d", &num);
        if (num == 1){
            goto First;
        }
        else{
            break;
        }
    }
    else if (press == 'e'){
        return 0;
    }
    else{
        printf("Please press correct key.\n");
    }
}
    return 0;
}




