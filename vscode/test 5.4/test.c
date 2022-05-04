#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//循环学习

// int main(){
//     int ch = 0;
//     while((ch = getwchar()) != EOF){
//         putwchar(ch);

//     }    
//     return 0;
// }

// int main(){
//     int ret = 0;
//     int ch;
//     char password[20] = {0};
//     printf("请输入密码。\n");
//     scanf("%s",password);
//     //输入缓冲区有一个\n
//     while((ch = getwchar()) != '\n'){
//         ;
//     }//\n读取
//     printf("请确认（Y/N）\n");
//     ret = getchar();
//     if('Y' == ret){
//         printf("确认成功\n");
//     }else{
//         printf("确认失败\n");
//     }
//     return 0;
// }

// //只输出数字字符
// int main(){
//     int ch;
//     while((ch = getchar()) != EOF){
//         if('0'> ch || '9' < ch)continue;
//         putchar(ch);
//     }
//     return 0;
// }

// for (size_t i = 0; i < count; i++)
// {
//     /* code */
// }

// int main(){
//     int i;
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d\n",i);
//     }
    
//     return 0;
// }

// //计算n的阶乘
// int main(){
//     int num;
//     int sum = 1;
//     printf("请输入一个数。\n");
//     scanf("%d",&num);
//     for ( ; 1 != num; num--)
//     {
//         sum = sum*num;
//     }
//     printf("sum = %d",sum);
//     return 0;
// }

// //计算1~10的相加的阶乘
// int main(){
//     int sum = 0;
//     int a = 1;
//     int b = 4;
//     for(;0 < b; b--){

//         for(int i = 1;b != i;i++){
//             a = a*i;
//         }

//     sum = a + sum;
//     a = 1;
//     }
//     sum -=1;
//     printf("sum = %d",sum);
//     return 0;
// }
// int main(){
//     int num = 1;
//     int sum = 0;
//     int i = 0;

//     for(i= 1; 10 >= i; i++){
//         num *= i;
//         sum += num;
//     }
//     printf("sum = %d\n",sum);
//     return 0;
// }

// //对分查找法
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 7;//查找元素
//     int ak = sizeof(arr)/sizeof(arr[0]);//计算元素数量
//     int left = 0;//左下标
//     int right = ak;//右下标
//     while(left <= right){
//         int mak = (left + right)/2;//进行2分
//         if(k > arr[mak]){
//             left = mak + 1;
//         }else if(k < arr[mak]){
//             right = mak - 1;
//         }else if(k == arr[mak]){
//             printf("找到了,下标是%d\n",mak);
//             break;
//         }
//     }
//     if(left >= right){
//         printf("没有找到\n");
//     }
//     return 0;
// }

// //编写代码,显示多个字符从两端向中间移动
// int main(){
//     char arr1[] = {"xiaohaozi vscode!!!!"};
//     char arr2[] = {"####################"};
//     int laft = 0;
//     int right = strlen(arr1);
//     while (laft <= right)
//     {
//         arr2[laft] = arr1[laft];
//         arr2[right] = arr1[right];
//         printf("%s",arr2);

//         Sleep(1000);
//         system("cls");
//         laft++;
//         right--;
//     }
//     printf("%s",arr2);
   
//     return 0;
// }

// //编写代码，模拟用户登录场景，只允许登录三次。
// int main(){
//     char password[20] ={"123456"};
//     char user[20];
//     int i;
//     for(i = 0;3 > i;i++){
//         printf("请输入密码:");
//         scanf("%s",user);
//         if(0 == strcmp(password,user)){
//             printf("输入密码正确\n");
//             break;
//         }else{
//             printf("密码输入错误\n");
//         }

//     }
//     if(2 == i)
//         printf("密码输入失败。\n");
//     return 0;
// }


