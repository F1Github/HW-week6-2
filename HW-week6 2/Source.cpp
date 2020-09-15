#include<stdio.h>
int main()
{
	char s[10000];
	int count=0,pimyai = 0,pimlek = 0;
	scanf_s("%s", s, sizeof(s));
	for (int i = 0; i <= 10000; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
		count += 1;
	}
	for (int i = 0; i < count; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			pimyai += 1;
		}
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			pimlek += 1;
		}
	}
	if (pimyai == 0 && pimlek > 0)
	{
		printf("All Small Letter");
	}
	else if (pimlek == 0 && pimyai > 0)
	{
		printf("All Capital Letter");
	}
	else
	{
		printf("Mix");
	}
	return 0;
}