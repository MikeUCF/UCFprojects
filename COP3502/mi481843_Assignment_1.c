/*******************************
**written by : Mike Castor     *
**Date written: June 1         *
**Purpose: Freeing dynamic Mem *
********************************/

//Preprocessor Directives
#define _CRT_SECURE_NO_WARNINGS
#define FLUSH myFlush()
#define PAUSE System("pause")
#define CLS System("cls")
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototype functions
struct present* delete_present_list(struct present* present_list, int num);
void myFlush();

//structs
struct present{
    char* present_name;
    float price;
};

int main(){
    struct present* christmasList = (struct present*)malloc(4*sizeof(struct present));

    if (christmasList == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(int i = 0; i < 4; i++){
        christmasList[i].present_name = (char*)malloc(20*sizeof(char));
        strcpy(christmasList[i].present_name, "present");
    }

    if(delete_present_list(christmasList, 4) != NULL){
        printf("Delete Unsuccessful.");
    }
    else{
        printf("Delete Successful.");
    }
    return 0;
}//end of main()

struct present* delete_present_list(struct present* present_list, int num){
    if(present_list == NULL)
        return NULL;
    for(int i = 0; i < num; i++){
        if(present_list[i].present_name != NULL)
            free(present_list[i].present_name);

    }
    free(present_list);
    present_list = NULL;
    return present_list;
}//end of delete_present_list()

void myFlush(){
    while(getchar() != '\n');
}//end of myFlush()
