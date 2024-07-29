#include <stdio.h>
#include <string.h>

int main(void) {

	char szBuffer[16] = {"Hello"};
	char* pszData = szBuffer;

	int nLength = 0;

	while (*pszData != '\0') {
		pszData++; // 주소가 char하나만큼 1개 증가한다
		nLength++;
	}

	printf("%d\n" ,nLength);
	

	//위에서 문자열을 계측해주는 program을 짜본건데 실제로는 이미 해당 함수가 존재한다.
	/* strlen */
	printf("%u\n", strlen(szBuffer));

}
