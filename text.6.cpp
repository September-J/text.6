
#include<stdio.h>
#include<stdlib.h>


//int swapArgs(int *pa,int *pb){
	//int tmp = *pa;
	//*pa = *pb;
	//*pb = tmp;
	//return 0;}
//int main(){
	//int x = 10, y = 8;
	//swapArgs(&x, &y);
	//printf("x=%d,y=%d\n", x, y);
	//system("pause");
	//return 0;}
//
//int judgeLeapYear(int y){
	//return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
//}

//void init(int data[], int a[], int n){
//	int i;
//	for (i = 0; i < n; ++i){
//		a[i] = data[i];
//	}
//}
//void empty(int a[], int n){
//	int i;
//	for (i = 0; i < n; ++i){
//		a[i] = 0;
//	}
//}
//void reverse(int a[], int n){
//	int i, j;
//	int tmp;
//	for (i = 0, j = n - 1; i < j; i++, j--){
//		tmp = a[i];
//		a[i] = a[j];
//		a[j] = tmp;
//	}
//}
//void printArray(int a[], int n){
//	int i;
//	for (i = 0; i < n; ++i){
//		printf("%d", a[i]);
//	}
//	putchar('\n');
//}
//int main(){
	//if (judgeLeapYear(1999)){
		//printf("是闰年\n");
	//}
	//else{
		//printf("是平年\n");
	//}
	/*int data[10] = { 9, 5, 4, 6, 7, 8, 3 };
	int a[10] = { 0 };
	init(data, a, 10);
	printArray(a, 10);
	reverse(a, 10);
	printArray(a, 10);
	empty(a, 10);
	printArray()
	system("pause");
	return 0;
}*/

int judgePrimeNumber(int n){
	int i;
	
	for (i = 2; i <= n; ++i){
		if (n%i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int i;
	for (i = 2; i <= 1000; ++i){
		if (judgePrimeNumber(i)){
			printf("%d\n",i);
		}
	}
	system("pause");
	return 0;
}

