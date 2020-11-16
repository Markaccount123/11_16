#define _CRT_SECURE_N0_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("****1.add       2.sub  ***\n");
//	printf("****3.mul       4.div  ***\n");
//	printf("***      0.exit        ***\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////如果我们需要在这里添加很多种不一样的求法比如按位或，按位与等等，你会发现我们缩写的case语句将会变得十分的长和繁杂
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//这里前面添加一个0，就可以很好地和我们menu里面的数值所对应上
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf_s("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//		/*	switch (input)
//		{
//		case 1:
//		printf("请输入两个操作数:>");
//		scanf("%d%d", &x, &y);
//		printf("%d\n", Add(x, y));
//		break;
//		case 2:
//		printf("请输入两个操作数:>");
//		scanf("%d%d", &x, &y);
//		printf("%d\n", Sub(x, y));
//		break;
//		case 3:
//		printf("请输入两个操作数:>");
//		scanf("%d%d", &x, &y);
//		printf("%d\n", Mul(x, y));
//		break;
//		case 4:
//		printf("请输入两个操作数:>");
//		scanf("%d%d", &x, &y);
//		printf("%d\n", Div(x, y));
//		break;
//		case 0:
//		printf("退出\n");
//		break;
//		default:
//		printf("输入错误，请重新选择！\n");
//		break;
//		}
//		} while (input);*/
//		return 0;
//}
//7.指向函数指针数组的指针
//8.回调函数：就是一个通过函数指针调用的函数，如果你把函数的指针（地址）作为参数传递给另一个函数，当这个指针被用来调用其所指向的
//函数时，我们就说这事回调函数你会发现上面的switch-case语句中出现了多次一样的代码行，为了避免冗余，我们可以在写一个函数，来封装这几行代码
//void menu()
//{
//	printf("**************************\n");
//	printf("****1.add       2.sub  ***\n");
//	printf("****3.mul       4.div  ***\n");
//	printf("***      0.exit        ***\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误，请重新选择！\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}

////指向函数指针数组的指针
//int(*pf)(int, int);//pf 是一个函数指针
//int(*pfArr[4])(int, int);//pfArr是一个函数指针的数组
//int(*(*ppfArr)[4])(int, int) = &pfArr; //是一个指向函数指针数组的指针

//qsort 可以排序任一种类型

//冒泡排序需要重新再好好看一遍--又他妈忘记了
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//确定冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟需要比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]); // 因为要确定冒泡排序的趟数，所以需要把元素的个数也传过去
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
////年龄来实现
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
////名字来实现
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用>=<来比较
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//int main()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };//初始化了一个结构体数组，现在我想要通过年龄把他们进行一下排序
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//		printf("%d ", s[i].age);
//		printf("\n");
//	}
//	return 0;
//}

//void qsort(void *base, size_t num, size_t width, int(__cdecl *compare)(const void *elem1, const void *elem2));
//base : 数组的起始位置
//num : 数组的元素个数
//width : 每个元素的大小
//void* 类型的指针  可以接受任意类型的地址（万能桶）
//对于void* 类型的指针是不能够解引用也不能进行加减整数的操作，因为你不知道他到底具体访问几个字节

//qsort的头文件是stdlib.h
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//int cmp_float(const void* e1, const void* e2)
//{
//	return(int)(*(float*)e1 - *(float*)e2);
//}
//
//int main()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	return 0;
//}


//自己实现一个qsort函数
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
			{
				//交换
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width); //这里之所以要传width是因为要知道比较的字符对数
			}
		}
	}
}