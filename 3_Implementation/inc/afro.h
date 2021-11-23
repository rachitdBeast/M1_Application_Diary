#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void welcome_message();

 int insert()
{
FILE *fp;
    char note[2000], date[20] ;
    welcome_message();
    printf("Enter date of your note : ");
    scanf("%s", date);
    //printf("%s",date);
    printf("\n");
    printf("Just write your note from here....\n---->>");
    scanf(" %[^\n]s",note);
    fp = fopen("diary.txt", "w");
    fprintf(fp, "%s", date);
    fprintf(fp, "\n");
    fprintf(fp, "%s", note);
    fprintf(fp, "\n\n");
    printf("\nSuccessfully Copied.....:)\n");
    fclose(fp);
    return 0;
}

int append() 
{
    FILE *fp;
    char note[2000], date[20] ;
    welcome_message();
    printf("Enter date of your note : ");
    scanf("%s", date);
    //printf("%s",date);
    printf("\n");
    printf("Just write your note from here....\n---->>");
    scanf(" %[^\n]s", note);
    fp = fopen("diary.txt", "a");
    fprintf(fp,"%s", date);
    fprintf(fp, "\n");
    fprintf(fp,"%s", note);
    fprintf(fp, "\n\n");
    printf("\nSuccessfully Copied.....:)\n");
    fclose(fp);
    return 0;
}

int view() 
{
    FILE *fp;
    char ch;
    fp = fopen("diary.txt", "r");
    if (fp == NULL){
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }
    printf("\nYour previous note : \n\n");
    printf("===============================================================================\n");

    while( ( ch = fgetc(fp) ) != EOF ){
        printf("%c", ch);
    }
    printf("\n");
    printf("===============================================================================\n");
    fclose(fp);
    return 0;
}

void welcome_message() 
{
    printf("---***---***----***----***----***---\n\n");
    printf("|<--     Welcome to our Diary    -->|\n\n");
    printf("---***---***----***----***---***---\n\n");
}
