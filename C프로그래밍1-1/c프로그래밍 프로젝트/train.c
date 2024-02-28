/*202311254,권동희,0438,train.c,202304.03*/
#include<stdio.h>
#include<math.h>
#define MINUTE 60

int main(void)
{
	int distance, s1, s2;/*distance= 두 기차 사이의 거리 s1,s2=기차 속도*/
	double time, d1, d2;/*time=충돌까지의 시간 d1,d2=기차의 운행 거리*/
	
	printf("두 기차 사이의 거리를 입력하시오:\n");
	scanf_s("%d", &distance);
	printf("첫 번째 기차의 속도를 (km/h) 를 입력하시오:\n");
	scanf_s("%d", &s1);
	printf("두 번째 기차의 속도를 (km/h) 를 입력하시오:\n");
	scanf_s("%d", &s2);
	time =(double)distance / (s1 + s2); /*충돌까지의 시간 , 소수점까지 출력하기 위해 형변환 해줌, time단위 =시간*/
	d1 = time * s1; 
	d2 = time * s2;

	int min, sec, hour;

	hour = (int)time;//time에 int를 취하면 소숫점이 잘려나가 시간만 남음
	min = (time - hour) * MINUTE;//time-hour를 취한 후 60으로 나눈 나머지는 분
	sec = ((time - hour) * MINUTE - min) * MINUTE;//위 min을 소수점 까지 나오게한 후 min을 빼주면 소숫점만 남음, 남은 수에 60을 곱하면 초가 됨

	printf("충돌까지 총%.3lf분 (%d시간 %d분 %d초) 가 소요됩니다.\n", time * MINUTE, hour, min, sec);
	printf("첫 번째 기차의 운행 거리는 총 %.2lf (km) 입니다.\n", d1);
	printf("두 번째 기차의 운행 거리는 총 %.2lf (km) 입니다.\n", d2);

	return 0;

}