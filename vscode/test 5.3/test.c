#include <stdio.h>


// //学习if分支
// int main(){
//     int age;

//     printf("输入你的年龄：\n");
//     scanf("%d",&age);

//     if(18 > age){
//         printf("%d岁的小朋友\n",age);
//     }else if(18 <= age && 28 > age){
//         printf("%d岁的小青年\n",age);
//     }else if(28 <= age && 48 > age){
//         printf("%d岁的成年人\n",age);
//     }else if(48 <= age && 88 > age){
//         printf("%d岁的老年人\n",age);
//     }else if(88 <= age){
//         printf("%d岁的老不死\n",age);
//     }

//     return 0;
// }

// //注意书写格式
// //if else就近原则
// int main(){
//     int a = 1;
//     int b = 4;

//     if(3 == a)
//         if(4 == b)
//             printf("haha");
//     else
//     printf("hehe");
// //结果不打印
//     return 0;
// }

// //判断一个数是否为奇数
// int main(){
//     int unm;
//     printf("输入一个数判断是否为奇数.\n");
//     scanf("%d",&unm);
//     if(0 == unm%2){
//         printf("%d是偶数\n",unm);
//     }else{
//         printf("%d是奇数\n",unm);
//     }
//     return 0;
// }

// //输出1~100之间的奇数
// int main(){
//     int unm = 1;
//     while(99 > unm)
//     {
//         unm+=2;
//         printf("%d是奇数\n",unm);

//     }
//     return 0;
// }

//switch的应用
// switch (expression)
// {
// case /* constant-expression */:
//     /* code */
//     break;

// default://用于查询不到目标后执行
//     break;
// }

// int main(){
//     int n = 1;
//     int m = 2;
//     switch (n)
//     {
//     case 1:m++;
//     case 2:n++;
//     case 3:
//         switch(n){
//             //switch允许嵌套
//             case 1:n++;
//             case 2:m++;n++;break;
//         }
//     case 4:m++;
//         break;
    
//     default:
//         break;
//     }
//     printf("m = %d,n = %d\n",m,n);
//     //求m,n的值是多少?
//     return 0;
// }

// while (/* condition */)
// {
//     /* code */
// }学习

int main(){
    int n = 1;
    while (10 >= n)
    {
        if(5 == n)continue;
        printf("%d\n",n);
        n++;
    }
    
    return 0;
}

