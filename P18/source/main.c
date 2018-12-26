#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	FILE *in, *out;
	int cnt;
	char str[100];
	int err, err1;
	err = fopen_s(&in,"D:\\welcome2.txt", "r");
	err1 = fopen_s(&out,"D:\\output3.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);
		if (cnt > 0)
		{
			fprintf(out, "%s\n", str);
		}
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}