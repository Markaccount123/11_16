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
////���������Ҫ��������Ӻܶ��ֲ�һ�����󷨱��簴λ�򣬰�λ��ȵȣ���ᷢ��������д��case��佫����ʮ�ֵĳ��ͷ���
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//����ǰ�����һ��0���Ϳ��Ժܺõغ�����menu�������ֵ����Ӧ��
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf_s("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//		/*	switch (input)
//		{
//		case 1:
//		printf("����������������:>");
//		scanf("%d%d", &x, &y);
//		printf("%d\n", Add(x, y));
//		break;
//		case 2:
//		printf("����������������:>");
//		scanf("%d%d", &x, &y);
//		printf("%d\n", Sub(x, y));
//		break;
//		case 3:
//		printf("����������������:>");
//		scanf("%d%d", &x, &y);
//		printf("%d\n", Mul(x, y));
//		break;
//		case 4:
//		printf("����������������:>");
//		scanf("%d%d", &x, &y);
//		printf("%d\n", Div(x, y));
//		break;
//		case 0:
//		printf("�˳�\n");
//		break;
//		default:
//		printf("�������������ѡ��\n");
//		break;
//		}
//		} while (input);*/
//		return 0;
//}
//7.ָ����ָ�������ָ��
//8.�ص�����������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ�������������ָ�뱻������������ָ���
//����ʱ�����Ǿ�˵���»ص�������ᷢ�������switch-case����г����˶��һ���Ĵ����У�Ϊ�˱������࣬���ǿ�����дһ������������װ�⼸�д���
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
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}

////ָ����ָ�������ָ��
//int(*pf)(int, int);//pf ��һ������ָ��
//int(*pfArr[4])(int, int);//pfArr��һ������ָ�������
//int(*(*ppfArr)[4])(int, int) = &pfArr; //��һ��ָ����ָ�������ָ��

//qsort ����������һ������

//ð��������Ҫ�����ٺúÿ�һ��--������������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ȷ��ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ����Ҫ�ȽϵĶ���
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
//	int sz = sizeof(arr) / sizeof(arr[0]); // ��ΪҪȷ��ð�������������������Ҫ��Ԫ�صĸ���Ҳ����ȥ
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
////������ʵ��
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
////������ʵ��
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����>=<���Ƚ�
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//int main()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };//��ʼ����һ���ṹ�����飬��������Ҫͨ����������ǽ���һ������
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
//base : �������ʼλ��
//num : �����Ԫ�ظ���
//width : ÿ��Ԫ�صĴ�С
//void* ���͵�ָ��  ���Խ����������͵ĵ�ַ������Ͱ��
//����void* ���͵�ָ���ǲ��ܹ�������Ҳ���ܽ��мӼ������Ĳ�������Ϊ�㲻֪�������׾�����ʼ����ֽ�

//qsort��ͷ�ļ���stdlib.h
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


//�Լ�ʵ��һ��qsort����
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
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
			{
				//����
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width); //����֮����Ҫ��width����ΪҪ֪���Ƚϵ��ַ�����
			}
		}
	}
}