/*202311254,�ǵ���,0438,train.c,202304.03*/
#include<stdio.h>
#include<math.h>
#define MINUTE 60

int main(void)
{
	int distance, s1, s2;/*distance= �� ���� ������ �Ÿ� s1,s2=���� �ӵ�*/
	double time, d1, d2;/*time=�浹������ �ð� d1,d2=������ ���� �Ÿ�*/
	
	printf("�� ���� ������ �Ÿ��� �Է��Ͻÿ�:\n");
	scanf_s("%d", &distance);
	printf("ù ��° ������ �ӵ��� (km/h) �� �Է��Ͻÿ�:\n");
	scanf_s("%d", &s1);
	printf("�� ��° ������ �ӵ��� (km/h) �� �Է��Ͻÿ�:\n");
	scanf_s("%d", &s2);
	time =(double)distance / (s1 + s2); /*�浹������ �ð� , �Ҽ������� ����ϱ� ���� ����ȯ ����, time���� =�ð�*/
	d1 = time * s1; 
	d2 = time * s2;

	int min, sec, hour;

	hour = (int)time;//time�� int�� ���ϸ� �Ҽ����� �߷����� �ð��� ����
	min = (time - hour) * MINUTE;//time-hour�� ���� �� 60���� ���� �������� ��
	sec = ((time - hour) * MINUTE - min) * MINUTE;//�� min�� �Ҽ��� ���� �������� �� min�� ���ָ� �Ҽ����� ����, ���� ���� 60�� ���ϸ� �ʰ� ��

	printf("�浹���� ��%.3lf�� (%d�ð� %d�� %d��) �� �ҿ�˴ϴ�.\n", time * MINUTE, hour, min, sec);
	printf("ù ��° ������ ���� �Ÿ��� �� %.2lf (km) �Դϴ�.\n", d1);
	printf("�� ��° ������ ���� �Ÿ��� �� %.2lf (km) �Դϴ�.\n", d2);

	return 0;

}