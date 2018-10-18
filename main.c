#include<stdio.h>
#include<stdlib.h>

void arrayModule(){
    printf("Welcome to array Module.\nPress:\n1 - To see Documentation\n");
    int choice;
    scanf("%d", &choice);
    if(choice == 1){
        FILE *fp;
        fp = fopen("main.c", "r");
        
        int ch;
        while( (ch = getc(fp)) != EOF){
            printf("%c",ch);
        }
    
        // closing the file pointer
        fclose(fp);

    }
}

void maniModule(){
    printf("Welcome to Gaye Gujre logon ka Module.\nPress :\n1 - Array\n");

    int choice;
    scanf("%d", &choice);

    if(choice == 1){
        arrayModule();
    }


}

int main(){
    maniModule();

    return 0;
}
