#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	FILE *fptr1, *fptr2;
	char ch;
	int err, err1;
	err = fopen_s(&fptr1,"D:\\welcome1.txt", "r");
	err1 = fopen_s(&fptr2,"D:\\output.txt", "w");
	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
		{
			putc(ch, fptr2);
		}
		fclose(fptr1);

		fclose(fptr2);

		printf("�ɮ׫�������!!\n");
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("pause");
	return 0;
}