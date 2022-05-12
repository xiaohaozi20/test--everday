//从大到小输出
//写代码将三个数从大到小输出

#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int big = 0;
    printf("请输入第一个数\n");
    scanf("%d",&num1);
    printf("第2个\n");
    scanf("%d",&num2);
    printf("第3个\n");
    scanf("%d",&num3);

    if(num1 < num2){
        big = num1;
        num1 = num2;
        num2 = big;
    }
    if(num1 < num3){
        big = num1;
        num1 = num3;
        num3 = big; 
    }
    if(num2 < num3){
        big = num2;
        num2 = num3;
        num3 = big;
    }


    printf("%d > %d > %d\n",num1,num2,num3);
    return 0;
}

