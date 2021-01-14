#include<stdio.h>
#include <stdlib.h>

int main() {
	int size_1,size_2;
	int i, j;
	int number;
	int **arr_1;
	int **arr_2;
	int **tmp;

	printf("m x n ���\n");

	printf("��� ������ �Է�(m) : ");
	scanf_s("%d", &size_1);
	printf("��� ������ �Է�(n) : ");
	scanf_s("%d", &size_2);

	arr_1 = (int**)malloc(sizeof(int)*size_1);          // ��� ũ��

	for (i = 0; i < size_1; i++) {
		arr_1[i] = (int*)malloc(sizeof(int)*size_2);
	}                                                   ////////////

	for (i = 0; i<size_1; i++)                         //arr_1 �� �Է�
	{
		for (j = 0; j<size_2; j++)
		{
			printf("[%d][%d] �Է� : ", i, j);
			scanf_s("%d", &arr_1[i][j]);
		}                                      
	}                                                   /////////////
	printf("\n");
	for (i = 0; i<size_1; i++)                        //arr_1 ���
	{
		for (j = 0; j<size_2; j++)
		{
			printf("%3d", arr_1[i][j]);
		}
		printf("\n");
	}                                                   //////////

	while (1) {
		printf("--------------------------------------------------------------\n");
		printf("1.(+) \n2.(-) \n3.(x) \n4.(=) \n"); 
		printf("����ּ���! => ");
		scanf_s("%d", &number);
		printf("--------------------------------------------------------------\n");
		switch (number)
		{
		case 1:                                                    //���ϱ�
			arr_2 = (int**)malloc(sizeof(int)*size_1);            //arr_2 ũ�� ����

			for (i = 0; i < size_1; i++) {
				arr_2[i] = (int*)malloc(sizeof(int)*size_2);
			}

			for (i = 0; i<size_1; i++)                             //arr_2 �� �Է�
			{
				for (j = 0; j<size_2; j++)
				{
					printf("[%d][%d] �Է� : ", i, j);
					scanf_s("%d", &arr_2[i][j]);
				}
			}

			tmp = (int**)malloc(sizeof(int)*size_1);              //tmp ũ�� ����

			for (i = 0; i < size_1; i++) {
				tmp[i] = (int*)malloc(sizeof(int)*size_2);
			}

			printf("\n");

			for (i = 0; i<size_1; i++)                              // tmp = arr_1 + arr_2
			{
				for (j = 0; j<size_2; j++)
				{
					tmp[i][j] = arr_1[i][j] + arr_2[i][j];
				}
			}

			for (i = 0; i<size_1; i++)
			{
				for (j = 0; j<size_2; j++)
				{
					printf("%3d", arr_1[i][j]);
				}
				printf("\n");
			}
			printf("+\n");

			for (i = 0; i<size_1; i++)
			{
				for (j = 0; j<size_2; j++)
				{
					printf("%3d", arr_2[i][j]);
				}
				printf("\n");
			}

			printf("=\n");

			for (i = 0; i<size_1; i++)
			{
				for (j = 0; j<size_2; j++)
				{
					printf("%3d", tmp[i][j]);
				}
				printf("\n");
			}

			for (i = 0; i<size_1; i++)
			{
				for (j = 0; j<size_2; j++)
				{
					arr_1[i][j] = tmp[i][j];
				}
			}
			break;
		case 2:                                                  //����
			arr_2 = (int**)malloc(sizeof(int)*size_1);            //arr_2 ũ�� ����

			for (i = 0; i < size_1; i++) {
				arr_2[i] = (int*)malloc(sizeof(int)*size_2);
			}

			for (i = 0; i<size_1; i++)                             //arr_2 �� �Է�
			{
				for (j = 0; j<size_2; j++)
				{
					printf("[%d][%d] �Է� : ", i, j);
					scanf_s("%d", &arr_2[i][j]);
				}
			}

			tmp = (int**)malloc(sizeof(int)*size_1);              //tmp ũ�� ����

			for (i = 0; i < size_1; i++) {
				tmp[i] = (int*)malloc(sizeof(int)*size_2);
			}

			printf("\n");

			for (i = 0; i<size_1; i++)                              // tmp = arr_1 - arr_2
			{
				for (j = 0; j<size_2; j++)
				{
					tmp[i][j] = arr_1[i][j] - arr_2[i][j];
				}
			}

			for (i = 0; i<size_1; i++)
			{
				for (j = 0; j<size_2; j++)
				{
					printf("%3d", arr_1[i][j]);
				}
				printf("\n");
			}
			printf("-\n");

			for (i = 0; i<size_1; i++)
			{
				for (j = 0; j<size_2; j++)
				{
					printf("%3d", arr_2[i][j]);
				}
				printf("\n");
			}

			printf("=\n");

			for (i = 0; i<size_1; i++)
			{
				for (j = 0; j<size_2; j++)
				{
					printf("%3d", tmp[i][j]);
				}
				printf("\n");
			}

			for (i = 0; i<size_1; i++)
			{
				for (j = 0; j<size_2; j++)
				{
					arr_1[i][j] = tmp[i][j];
				}
			}
			break;
		case 3:                                                 //���ϱ�
			break;
		case 4:                                                 //������ = 
			return 0;
		default:
			break;

		}

	}

	for (i = 0; i<size_1; i++)                                   //malloc free
	{ 
		free(arr_1[i]);
		free(arr_2[i]);
		free(tmp[i]);
	}
	free(arr_1);
	free(arr_2);
	free(tmp);

	return 0;
}

