/*202311254,�ǵ���,0438,2023.04.03*/
#include<stdio.h>
#include<math.h>

int main(void)
{
	short width, height, radius,x1,x2,x3;/*width=���� ���� ���� height=���� ���� ���� radius=���̺��� ������*/
	unsigned char x, y; /*x=���̺� �� ���� y=���̺� �ϳ��� ���� �� �ִ� �ϰ� ��*/
	
	printf("���� ���� �� ���� ���̸� �Է��Ͻÿ�:\n");
	scanf_s("%d %d", &width, &height);
	printf("���̺��� ������ ���̸� �Է��Ͻÿ�:\n");
	scanf_s("%d", &radius);
	printf("���̺� ���� (meter) �� �Է��Ͻÿ�:\n");
	scanf_s("%hhu", &x);
	printf("���̺� �ϳ��� ���� �� �ִ� �ϰ� ���� �Է��Ͻÿ�:\n");
	scanf_s("%hhu", &y);

	x1 = (width - x) / ((2 * radius) + x);/*���ο� ���� �� �ִ� ���̺� ��*/
	x2 = (height - x) / ((2 * radius) + x);/*���ο� ���� �� �ִ� ���̺� ��*/
	x3 = x1 * x2;/*�� �ȿ� ���� �� �ִ� ��ü ���̺��� ��*/

	printf("�� �ϰ� ���� %d �Դϴ�.\n", x3 * y);

	return 0;

}