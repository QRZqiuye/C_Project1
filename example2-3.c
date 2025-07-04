#include "example2-3.h"
/*사용자 헤더파일을 포함시켜 파일을 구성*/

void main() {
	printf("10 + 5 = %d\n", ADD(10, 5));/*매크로 함수 ADD를 호출하여 결과를 출력*/
	printf("10 - 5 = %d\n", SUB(10, 5));/*매크로 함수 SUB를 호출하여 결과를 출력*/
}