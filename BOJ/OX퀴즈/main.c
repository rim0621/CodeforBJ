#include<stdio.h>
#include<string.h>
int Score(char *OX);

int main()
{
	int NumCase;
	char OX[80] ;
	
	scanf_s("%d", &NumCase);

	gets(OX);// for�� �ȿ� �ϸ� 0�̸��� ��µ�(��?)
	for (int i = 0; i < NumCase; i++)
	{
		printf("%d\n",Score(OX));
	}
	
}

int Score(char *OX)
{
	gets(OX);
	int a = 0,score=0;
	int len = strlen(OX);
	for (int i = 0; i < len;i++)
	{
		if (OX[i] == 'O')
		{
			a++;
			score += a;
		}
		else
		{
			a = 0;
		}
	}
	return score;
}
