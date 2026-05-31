#include<stdio.h>
char canvas[30][60];
void initializeCanvas();
void displayCanvas();
void drawLine(int row,int col,int length);
void drawRectangle(int row,int col,int width,int height);
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
void drawLine(int row,int col,int length){
    for(int i=0;i<length;i++){
        canvas[row][col+i]='*';
    }
}
void drawRectangle(int row,int col,int width,int height){
    for(int i=0;i<width;i++){
        canvas[row][col+i]='*';
        canvas[row+height-1][col+i]='*';

    }
    for(int i=0;i<height;i++){
        canvas[row+i][col]='*';
        canvas[row+i][col+width-1]='*';
    }
}
int main()

{
    initializeCanvas();
    drawLine(2,5,10);
    drawRectangle(8,10,12,5);
    printf("test\n");
    displayCanvas();
    getchar();
    return 0;
}