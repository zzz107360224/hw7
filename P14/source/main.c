#include <stdio.h>

#include <stdlib.h>



int main(void)

{
	FILE *fptr;
	char ch;
	int count = 0;
	int err;


	err = fopen_s(&fptr,"D:\\welcome.txt", "r");

	if (fptr != NULL)

	{

		while ((ch = getc(fptr)) != EOF)

		{

			printf("%c", ch);

			count++;

		}

		fclose(fptr);

		printf("\n�`�@��%d�Ӧr��\n", count);

	}

	else

	{

		printf("�ɮ׶}�ҥ���!!\n");

	}

	system("pause");

	return 0;

}