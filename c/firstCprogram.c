#include<stdio.h>

int add(int, int);
int main(){
    int x,y;
    printf("enter a no  ");
    scanf("%d%d",&x,&y);

    int sum = add(x,y);
    printf("%d",sum);
    return 0;
}

int add(int x,int y){
    return x+ y;

}