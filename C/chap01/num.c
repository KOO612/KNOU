/*
두 수를 키보드로 입력받아 곱의 결과 출력
*/

#include <stdio.h>
#pragma warning(disable:4996)

int a, b, c;
int product(int x, int y);

void main() {
	printf("enter number 1~10 : ");
	scanf("%d", &a);
	printf("enter number 1~10 : ");
	scanf("%d", &b);

	c = product(a, b);
	printf("%d * %d = %d", a, b, c);

}
int product(int x, int y) {
	return (x * y);
}