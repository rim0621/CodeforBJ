/*����>>> 6��12�� 24��... 48�� �� �þ���� 1���� 6���� 12 ����...(���������� ��) �ϸ� 
ù���� �Ѷ��� ��������.... ���� ����*/


#include<stdio.h>

int main()
{
	int RoomNumber;
	int location=0,s=1;
	
	scanf_s("%d", &RoomNumber);

	for (int i = 1; 0 <RoomNumber;i++)
	{
		RoomNumber =RoomNumber-s;
		s = i * 6;
		location++;
		
		
	}
	
	printf("%d", location);

	return 0;
}
