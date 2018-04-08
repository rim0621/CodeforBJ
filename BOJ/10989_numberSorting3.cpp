/************************************************************************
	날짜	: 2018/02/02
	작성자	: 임중현
	문제	: 백준 10989번 수 정렬하기3
	풀이	: 메모리 제한이 8MB을 주의!! 최대 10,000,000 메모리가 초과
		  할 것이다. 그럼 N만큼 갯수말고 0~100000보다 작은 자연수를
		  받을 수 있다는 것을 생각해 보자. 배열을 100000개를 잡고 받은 
		  수에 카운트를 올리고 정렬하지 말고 순차적으로 인덱스를 올리면서
		  카운트한 만큼 그 위치(인덱스)를 뽑니다.
*************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int number[10001];
int main()
{
	int n;
	scanf("%d",&n);
	int tmp;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&tmp);
		number[tmp]+=1;
	}
	for(int i=1;i<10001;i++)
	{
		tmp=number[i];
		for(int j=0;j<tmp;j++)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}