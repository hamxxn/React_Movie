/*202311254,권동희,c프로그래밍(0438),rect.c,2023.04.03*/
#include<stdio.h>
#include<math.h>

int main(void)
{
	short width, height, twidth, theight,z,x1,x2,x3;/*width=방 가로 길이 height=방 세로 길이 twidth=테이블 가로 길이 theight=테이블 세로 길이 z= 총 하객 수*/
	unsigned char x,y;/*x=테이블간 간격 y=테이블 하나에 앉을 수 있는 하객수*/
	
	printf("방의 가로 및 세로 길이를 입력하시오(단위, meters):\n");
	scanf_s("%d %d", &width, &height);
	printf("테이블의 가로 및 세로의 길이를 입력하시오(단위, meters):\n");
	scanf_s("%d %d", &twidth, &theight);
	printf("테이블간 간격 (meter)을 입력하시오:\n");
	scanf_s("%hhu", &x);
	printf("테이블 하나에 앉을 수 있는 하객 수를 입력하시오:\n");
	scanf_s("%hhu", &y);
	
	x1 = (width - x) / (x + twidth); /*가로에 놓을 수 있는 테이블 수=방의 가로 길이-테이블간 간격/테이블 가로 길이+테이블 간의 간격 의 몫*/
	x2 = (height - x) / (x + theight);/*세로에 놓을 수 있는 테이블 수=방이 세로 길이-테이블간 간격/테이블 세로 길이+테이블 간의 간격 의 몫*/
	x3 = x1 * x2; /*방 안에 놓을 수 있는 전체 테이블 수=세로에 놓을 수 있는 테이블*가로에 놓을 수 있는 테이블*/
	z = y * x3; /*총 하객수=테이블 수 * 테이블 하나에 앉을 수 있는 하객 수*/
	
	printf("총 하객 수는 %d명 입니다:\n", z);
	return 0;

}