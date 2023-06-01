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
for(int i = 0; i < 4; i++){
    christmasList[i].present_name = malloc(char*)malloc(20*sizeof(char))
    christmasList[i].present_name = "Present";
}

}//end of main()

struct present* delete_present_list(struct present* present_list, int num){

}//end of delete_present_list()

void myFlush(){
    while(getchar() != '\n');
}//end of myFlush()

