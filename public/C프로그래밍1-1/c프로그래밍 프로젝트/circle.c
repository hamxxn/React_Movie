/*202311254,권동희,0438,2023.04.03*/
#include<stdio.h>
#include<math.h>

int main(void)
{
	short width, height, radius,x1,x2,x3;/*width=방의 가로 길이 height=방의 세로 길이 radius=테이블의 반지름*/
	unsigned char x, y; /*x=테이블 간 간격 y=테이블 하나에 앉을 수 있는 하객 수*/
	
	printf("방의 가로 및 세로 길이를 입력하시오:\n");
	scanf_s("%d %d", &width, &height);
	printf("테이블의 반지름 길이를 입력하시오:\n");
	scanf_s("%d", &radius);
	printf("테이블간 간격 (meter) 을 입력하시오:\n");
	scanf_s("%hhu", &x);
	printf("테이블 하나에 앉을 수 있는 하객 수를 입력하시오:\n");
	scanf_s("%hhu", &y);

	x1 = (width - x) / ((2 * radius) + x);/*세로에 놓을 수 있는 테이블 수*/
	x2 = (height - x) / ((2 * radius) + x);/*가로에 놓을 수 있는 테이블 수*/
	x3 = x1 * x2;/*방 안에 놓을 수 있는 전체 테이블의 수*/

	printf("총 하객 수는 %d 입니다.\n", x3 * y);

	return 0;

}