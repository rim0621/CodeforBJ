#include<stdio.h>


int main()
{
	long long int fibo[46];
	int n, result;
	scanf_s("%d", &n);
	fibo[0] = 0;//���� �ʱ�ȭ
	fibo[1] = 1;// ''
	fibo[2] = 1;// ''
	for (int i = 3; i <= n; i++)//''
	{
		fibo[i] = i;
	}
	for (int i = 3; i <= n; i++)//���
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	
	printf("%d\n", fibo[n]);
	return 0;
}


/*��� �ʹ�����
int Fibonacci_number(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fibonacci_number(n - 1) + Fibonacci_number(n - 2);
}
*/