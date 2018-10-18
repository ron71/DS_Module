#include<stdio.h>
#include<stdlib.h>
#define N 100
#define file_name "TestCase1.txt"
#define True 1
#define False 0

int USER_INPUT= False;

struct prob{
    char* statement;
    int size;
    int ds[N]; 
};

typedef struct prob PROB;

void take_input(){
    if(USER_INPUT){
        PROB* p = (PROB*)malloc(sizeof(PROB));
        printf("\nPlease provide size of the array.\n>> ");
        scanf("%d", p->size);
        printf("\nPlease provide input for the array.\n");
        for(int i=0; i<p->size; ++i){
            scanf("%d", p->ds[i]);
        }

    }
    else{
        FILE *fp;
        fp = fopen(file_name, "r");
        int c;
        while((c=getc(fp))!=EOF){
            
        }
    }
}

int main(){
    PROB* p = (PROB*)malloc(sizeof(PROB));
    p->statement = "\n\n**************************\tMove all zeroes to end of array \t**************************\n\nGiven an array of random numbers, Push all the zero’s of a given array to the end of the array. \nFor example, \nif the given arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, \nit should be changed to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. \nThe order of all other elements should be same.\nExpected time complexity is O(n) and extra space is O(1).\n\n";
    printf("%s",p->statement);
    
        

}