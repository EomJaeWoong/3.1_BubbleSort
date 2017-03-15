#include <stdio.h>
#include <Windows.h>

#define LENGTH 10

void BubbleSort(int[]);

void main()
{
	int Array[LENGTH] = { 10, 25, 13, 2, 11, 4, 7, 5, 9, 12 };

	BubbleSort(Array);
}

void BubbleSort(int arr[])
{
	int i, j, cnt, temp;

	/* 첫 배열 출력 부분 */
	for (i = 0; i < LENGTH; i++){
		for (j = 0; j < LENGTH - i - 1; j++){
			system("cls");
			for (cnt = 0; cnt < LENGTH; cnt++){
				if ((cnt == j) || (cnt == j + 1))
					printf("[%d] ", arr[cnt]);
				else if (cnt >= LENGTH - i)
					printf("(%d) ", arr[cnt]);
				else
					printf("%d ", arr[cnt]);
			}
			Sleep(2000);

			if (arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	system("cls");
	printf("Result : ");
	for (cnt = 0; cnt < LENGTH; cnt++)
		printf("%d ", arr[cnt]);
	printf("\n");
}