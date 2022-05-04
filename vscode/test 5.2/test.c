
#include <stdio.h>
#include <string.h>
// int main(){
//     int a = 10;//向系统申请了4个字节的空间
//     //printf("a = %p\n",&a);
//     int* p = &a;// P是一个变量，是一个指针变量
//     //rintf("p = %p",p);
//     *p = 20;//* --引用操作符/间接访问操作符
//     printf("a = %d\n",a);
//     return 0;
// }

// int main(){
//     double a = 3.14;
//     double* p = &a;//32操作系统有4地址,64位操作系统有8位
//     printf("a = %lf\n",a);
//     *p = 2.71828;
//     printf("a = %lf\n",a);
//     printf("a = %lf\n",*p);
//     printf("%d\n",sizeof(p));
//     return 0;
// }

// int main(){
//     printf("int* = %d\n",sizeof(int*));
//     printf("float* = %d\n",sizeof(float*));
//     printf("double* = %d\n",sizeof(double*));
//     printf("char* = %d\n",sizeof(char*));
//     printf("short* = %d\n",sizeof(short*));
//     return 0;
// } 

//创建一个结构体
// struct Book{
//     char name[20];
//     short price;
// };
// int main(){
//     //利用结构及类型创建一个该类型的结构体变量
//     struct Book a2 = {"C语言程序设计",55};
//     struct Book* pd = &a2;
//     printf("书名：%s\n",(*pd).name);
//     printf("价格：%d\n",(*pd).price);
//     printf("书名：%s\n",pd->name);
//     printf("价格：%d\n",pd->price);
//     printf("书名：%s\n",a2.name);
//     printf("价格：%d\n",a2.price);
//     a2.price = 133;
//     printf("修改后的价格：%d\n",a2.price);
//     strcpy(a2.name,"C++");//需要引用库函数string.h
//     printf("修改后的书名：%s\n",a2.name);
//     return 0;
// }

