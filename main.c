#include<stdio.h>
char canvas[30][60];
void initializeCanvas(){
    for(int i=0;i<30;i++){
        for(int j=0;j<60;j++){
            canvas[i][j]=' ';
        }
    }
}
void displayCanvas(){
    for(int i=0;i<30;i++){
        for(int j=0;j<60;j++){
            printf("%c",canvas[i][j]);
        }
        printf("\n");
    }
}
int main()

{
    initializeCanvas();
    displayCanvas();
    getchar();
    return 0;
}