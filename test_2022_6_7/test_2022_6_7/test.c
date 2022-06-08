//#include <stdio.h>
//
//int main()
//{
//	const int num =4;//const-常属性//const修饰的常变量
//	printf("%d\n",num);
//
//	printf("%d\n",num);
//	return 0;
//}
//枚举常量
//枚举：一一列举

//#include<stdio.h>
//
//enum Sex
//{ male,
//  female,
//  secret
//};
//int main()
//{
//	enum Sex a = male;
//	printf("%d\n",male);
//	printf("%d\n",female);
//	printf("%d\n",secret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] ="abc";
//	char arr2[] ={'a','b','c','\0'};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%d\n",strlen(arr1));//3//string length - strlen 计算字符串的长度
//	printf("%d\n",strlen(arr2));//3
//	return 0;
//

//#include <stdio.h>
//int main()
//{
//	int money =0;
//	while(money<500000)
//	{
//	printf("you have %d yuan\n",money);
//	money=money+1000;
//	}
//	printf("you have enough money to buy a house now\n");
//return 0;
//}
//int main()
//{
//	int input;
//	printf("你要不要好好学习？（1/0）：\n");
//	scanf("%d",&input);
//if(input==1)
//
//	{printf("恭喜你拿到了好offer！\n");
//}
//else
//{	printf("恭喜你只能烤地瓜\n");
//}
//}
#include<stdio.h>
int main()
{
	int i=0;
	while(i<=20000)
	{
	printf("郭振斌敲了%d行代码\n",i);
	i=i+10;
	
	}
	printf("郭振斌拿到了30w年薪\n");
	return 0;
}