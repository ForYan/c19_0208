//求两个数的最大公约数
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1, num2;
	int max;
	printf("请输入两个整数：");
	scanf("%d%d", &num1, &num2);
	if (num1 > num2){
		for (max = num2; max > 0; max--){
			if ((num2%max == 0) && (num1%max == 0))
				printf("最大公约数为：%d\n", max);
			else
				break;
		}

	}
	else{
		for (max = num1; max > 0; max--){
			if ((num2%max == 0) && (num1%max == 0))
				printf("最大公约数为：%d\n", max);
			else
				break;
		}
	}
	system("pause");
	return 0;
}
//将三个数从大到小排列
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int num1, num2, num3;
//	printf("请输入三个整数：");
//	scanf("%d%d%d", &num1, &num2, &num3);
//	if (num1 > num2){
//		if (num1 > num3){
//			if (num2 > num3){
//				printf("顺序为：%d %d %d\n", num1, num2, num3);
//			}
//			else{
//				printf("顺序为：%d %d %d\n", num1, num3, num2);
//			}
//		}
//		else{
//			printf("顺序为：%d %d %d\n", num3, num1, num2);
//		}
//	}
//	else{
//		if (num2 > num3){
//			if (num1 > num3){
//				printf("顺序为：%d %d %d\n", num2, num1, num3);
//			}
//			else{
//				printf("顺序为：%d %d %d\n", num2, num1, num3);
//			}
//		}
//		else{
//			printf("顺序为：%d %d %d\n", num3, num2, num1);
//		}
//	}
//	system("pause");
//	return 0;
//}

//求10个整数中的最大值
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr[10] = { 32, 43, 13, 54, 107, 76, 87, 4, 67, 9 };
//	int max = arr[0];
//	for (int i = 1; i < 10; i++){
//		if (max < arr[i]){
//			max = arr[i];
//		}
//	}
//	printf("10个整数中的最大值是：%d\n", max);
//	system("pause");
//	return 0;
//}

//通过函数的方法，交换两个数的值
//#include <stdio.h>
//#include <stdlib.h>
//void Exch(int* p1, int* p2){
//	int* p;
//	p = p1;
//	p1 = p2;
//	p2 = p;
//	printf("交换之后：num1 = %d,num2 = %d", *p1, *p2);
//}
//int main(){
//	int num1 = 10;
//	int num2 = 20;
//	printf("交换之前：num1 = %d,num2 = %d\n", num1, num2);
//	Exch(&num1,&num2);
//	system("pause");
//	return 0;
//}


//通过创建临时变量，交换两个数的值
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int num1 = 10;
//	int num2 = 20;
//	int tem = 0;
//	printf("交换之前：num1 = %d,num2 = %d\n", num1, num2);
//	tem = num1;
//	num1 = num2;
//	num2 = tem;
//	printf("交换之后：num1 = %d,num2 = %d\n", num1, num2);
//	system("pause");
//	return 0;
//}

