
#include <stdio.h>

// //打印3的倍数。
// //写一个代码打印1到100所有3的倍数的数字

// int main(void){
//     int num3 = 1;
//     for(num3 = 1; num3 <= 100; num3++){
//         if(0 == num3%3){
//             printf("%d是3的倍数。\n",num3);
//         }
//     }
// }


// //求最大公约数
// //给定两个数，求它们两个之间的最大公约数

// int main(){
//     int num1 = 0;
//     int num2 = 0;
//     int s = 0;
//     printf("输入两个数，来求他们之间的公约数:");
//     scanf("%d%d",&num1,&num2);
//     if(num1 < num2){
//         int tmp;
//         tmp = num1;
//         num1 = num2;
//         num2 = tmp;
//     }
//     while (1)
//     {
//         if(num1%num2){
//             s = num1%num2;
//         }
//         if(num1%s){
//             s = num1%s;
//         }
//         if(num1%s == 0){
//             printf("最大公约数是：%d\n",s);
//             break;
//         }
//     }
// }

//打印闰年
//打印1000年到2000年之间的闰年

// int main(void){
//     int year;
//     for(year = 1000; year <= 2000; year++){
//         if(0 == year%4 && 0 != year%100){
//             printf("%d\n",year);
//         }else if(0 == year%400){
//             printf("%d\n",year);
//         }
//     }
// }
// int main(void){
//     int count = 0;
//     for(int year = 1000; year <= 2000; year++){
//         if((0 == year%4)&&(0 != year%100) || (0 == year%400)){
//             printf("%d",year);
//             count++;
//         }
//     }
//     printf("\ncount = %d",count);
// }

