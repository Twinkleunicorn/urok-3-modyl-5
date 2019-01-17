#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

void task1()
{
	const int n = 10;
	int A[n] = { 0 };
	int B[n] = { 0 };
	int C[n] = { 0 };
	for (size_t i = 0; i < n; i++)
	{
		A[i] = 1 + rand() % 10;
		printf("Ёлементы первого массива номер %d: %d\n",i, A[i]);
	}
	for (size_t i = 0; i < n; i++)
	{
		B[i] = 1 + rand() % 10;
		printf("Ёлемент второго массива номер %d: %d\n",i, B[i]);
	}
	for (size_t i = 0; i < n; i++)
	{
		if (i%2==0)
		{
			C[i] = A[i + 1];
			printf("Ёлемент третьего массива номер %d:%d\n",i, C[i]);
		}
		else if (i % 2 > 0)
		{
			C[i] = A[i - 1];
			printf("Ёлементы третьего массива %d:%d\n",i, C[i]);
		}
	}
}

void task2()
{
	int A[17] = { 0 };
	int sum = 0;
	for (size_t i = 0; i < 17; i++)
	{
		A[i] = 1 + rand() % 50;
		printf("%d=%d\n", i, A[i]);
		sum = sum + A[i];
		printf("%d\n", sum);
	}
}

void task3()
{
	const int n = 10;
	int X[n] = { 0 };
	int Y[n] = { 0 };
	int S[n] = { 0 };
		for (size_t i = 0; i < n; i++)
		{
			X[i] = 1 + rand() % 10;
			printf("Ёлементы первого массива номер %d : %d\n", i, X[i]);
		}
		for (size_t i = 0; i < n; i++)
		{
			Y[i] = 1 + rand() % 10;
			printf("Ёлемент второго массива номер %d : %d\n", i, Y[i]);
		}
		for (size_t i = 0; i < n; i++)
		{
			S[i] = 1 + rand() % 10;
			printf("Ёлементы  третьего массива номер %d : %d\n", i, S[i]);
		}
		for (size_t i = 0; i < n; i++)
		{
			if (S[i] == X[i])
			{
				S[i] = X[i];
			}
			else if (S[i] = Y[i])
			{
				S[i] = Y[i];
			}
			printf("Ёлементы третьего массива номер %d : %d\n", i, S[i]);
		}
}


void task4()
{
	const int n = 18;
	int Z[n] = { 0 };
	int sum = 0, r,sum1=0;
	for (size_t i = 0; i < n; i++)
	{
		Z[i] = 1 + rand() % 15;
		printf("Ёлементы  массива номер %d : %d\n", i, Z[i]);
	}
	for (size_t i = 0; i < n; i++)
	{
		if (i%2==0)
		{
			sum = sum + Z[i];	
		}
		if (i%3==0)
		{
			sum1 = sum1 + Z[i];
		}
	}
	printf("—умма элементов с четными коэфициентами : %d\n", sum);
	printf("—умма элементов с коэфициентами кратными 3 : %d\n", sum1);
	r = sum - sum1;
	printf("разность:%d\n", r);
}

void task5()
{
	const int n = 18;
	int A[n] = { 0 };
	int x, k=0;
	for (size_t i = 1; i < n; i++)
	{
		A[i] = 0 + rand() % 10;
		printf("Ёлементы массива:%d\n", A[i]);
	}

	size_t i = 1;
	for (; i < n - 1; i++)
	{
		for (size_t j = n - 2; j >= i; j--)
		{
			if (A[j] < A[j + 1])
			{
				x = A[j];
				A[j] = A[j + 1];
				A[j + 1] = x;	
				k = k + 1;
			}
			
		}
		
	}

    printf(" оличество перестановок: %d\n", k);

	printf("\n");
	for (size_t i = 1; i < n; i++)
	{
		printf("%d, ", A[i]);
		
	}

	printf("\n");

}

void task6()
{
	const int n = 11;
	int A[n] = { 0 };
	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		A[i] = 1 + rand() % 15;
		printf("Ёлементы  массива номер %d : %d\n", i, A[i]);
	}
	for (size_t i = 0; i < n; i++)
	{
		if (A[i]%2==0)
		{
			sum = sum + A[i];
		}
		
	}
	for (size_t i = 0; i < n; i++)
	{
		if (i % 3 == 0)
		{
			A[i] = sum;
			
		}
		if (i % 3 == 0)
		{
			A[i] = sum;

		}
		printf("Ёлементы массива :%d\n", A[i]);
	}
	
	printf("—умма нечетных: %d\n", sum);
}

void task8()
{
	const int n = 10;
	int A[n] = { 0 };
	int sum = 0, k = 0;
	for (size_t i = 0; i < n; i++)
	{
		A[i] = 1 + rand() % 19;
		printf("Ёлемент массива номер %d :%d\n", i, A[i]);
	}
	for (size_t i = 0; i < n; i++)
	{
		if (A[i]>=0)
		{
			sum = sum + A[i];
			k = k + 1;
		}
	}
	printf(" оличество положительных чисел: %d\n", k);
	printf("—умма положительных: %d\n", sum);
}
void task9()
{
	const int n = 10;
	int A[n] = { 0 };
	int k=0;
	for (size_t i = 0; i < n; i++)
	{
		A[i] = 1 + rand() % 16;
		printf("Ёлемент массива номер %d :%d\n", i, A[i]);
	}
	for (size_t i = 1; i < n-1; i++)
	{
		if (A[i] < A[i + 1] && A[i]<A[i-1])
		{
			k = k + 1;
		}
	}
	printf("¬сего чисел:%d\n", k);
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task;
	int flag;

	do
	{
		system("cls");

		printf("¬ведите номер задачи: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}
		break;
		case 2:
		{
			task2();
		}
		break;
		case 3:
		{
			task3();
		}
		break;
		case 4:
		{
			task4();
		}
		break;
		case 5:
		{
			task5();
		}
		break;
		case 6:
		{
			task6();
		}
		break;
		case 8:
		{
			task8();
		}
		break;
		case 9:
		{
			task9();
		}
		break;
		default:
			break;
		}

		printf("’отите продолжить?1/0\n");
		scanf_s("%d", &flag);

	} while (flag == 1);
}