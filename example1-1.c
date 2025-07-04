#include <stdio.h> // 헤더 파일 추가

#pragma warning(disable: 4996) // 권장하지 않는 함수 사용 경고 무시

int a, b, c; // 전역 변수 a, b, c를 선언 
int product(int x, int y); // 사용자 함수를 선언

void main() {      // 메인 함수 시작
	
	printf("두 수를 입력해 주세요: ");
	scanf("%d", &a);
	scanf("%d", &b);// 두 수를 입력받아 a와 b에 저장
	c = product(a, b);  // product 함수를 호출하여 a와 b의 곱을 c에 저장
	printf("%d * %d = %d\n", a, b, c); // 결과 출력
}

// 사용자 정의 함수: 두 수의 곱을 계산하는 함수
int product(int x, int y) {
	return x * y;
}