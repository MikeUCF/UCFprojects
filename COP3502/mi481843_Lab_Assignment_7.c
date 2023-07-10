/****************************************
** Written by  : Mike Castor            *
** Date Written: July 9                 *
** Purpose: Lab Assignment 7            *
****************************************/

//preprocessor directives
#define _CRT_SECURE_NO_WARNINGS
#define FLUSH myFlush()
#define PAUSE System("pause")
#define CLS System("cls")
#include<stdio.h>
#include<stdlib.h>

//prototype functions
void myFlush ();
int bubbleSort(int arr[], int n);

int main(){
int arr[] = {0,9,3,2,4,5,7,2,1};
for(int i =0; i < 9; i++)
    printf("%d," , arr[i]);

    printf("\nNumber of swaps: %d\n",bubbleSort(arr,9));
    printf("Sorted array: ");
    for(int i =0; i < 9; i++)
        printf("%d," , arr[i]);

    return 0;
} //end of main()
int bubbleSort(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]) {
                int  temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
    }
    return count;
}//end of bubbleSort()
void myFlush(){
    while(getchar() != '\n');
}// end of myFlush()
