#include<stdio.h>
char canvas[30][60];
void initializeCanvas();
void displayCanvas();
void drawLine(int row,int col,int length);
void drawRectangle(int row,int col,int width,int height);
void drawTriangle(int row,int col,int size);
void drawCircle(int centerX,int centerY,int radius);
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
void drawTriangle(int row,int col,int size){
    for(int i=0;i<size;i++){
        canvas[row+i][col]='*';
        canvas[row+size-1][col+i]='*';
        canvas[row+i][col+i]='*';
    }
}
void drawCircle(int centerX,int centerY,int radius){
    for(int i=0;i<30;i++){
        for(int j=0;j<60;j++){
            int dx=i-centerX;
            int dy=j-centerY;
            int d=dx*dx+dy*dy;
            if(d>=radius*radius-radius && d<=radius*radius+radius){
                canvas[i][j]='*';
            }

        }
    }
}
int main()

{
    initializeCanvas();
    drawLine(2,5,10);
    drawRectangle(8,10,12,5);
    drawTriangle(15,5,8);
    drawCircle(15,45,4);
    displayCanvas();
    getchar();
    return 0;
}