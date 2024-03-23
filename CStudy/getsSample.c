#include <stdio.h>

int main(void) {

	char szName[32] = { 0 };
	char szBuffer[8] = { 0 };
	char lszBuffer[8] = { 0 };


	/* 초기화된 메모리를 확인해보면 아래와 같이 0으로 초기화 된 것을 확인할 수 있다.
		0x00000015898FF668  00 00 00 00 00 00 00 00  ........
		0x00000015898FF670  00 00 00 00 00 00 00 00  ........
		0x00000015898FF678  00 00 00 00 00 00 00 00  ........
		0x00000015898FF680  00 00 00 00 00 00 00 00  ........
	*/

	printf("이름을 입력하세요: ");
	gets(szName); //gets()를 써도 되지만 이 API는 보안 결함 문제가 있다 한다

	printf("당신의 이름은 ");
	puts(szName);

	/* 아래와 같이 Memory에 글자가 쓰인것을 확인할 수 있다. 1byte씩 위에 8글자 아래는 5글자 딱 맞다 
		0x00000015898FF668  48 6f 6e 67 20 67 69 6c  Hong gil
		0x00000015898FF670  2d 64 6f 6e 67 00 00 00  -dong... g다음에 00 null로 끝나는 것을 확인할 수 있다.
		0x00000015898FF678  00 00 00 00 00 00 00 00  ........
		0x00000015898FF680  00 00 00 00 00 00 00 00  ........
	*/
	puts("입니다."); //printf는 개행이 되지 않지만, puts는 개행이 된다.

	// 위의 gets가 문제가 보안상 문제가 있기 때문에, 
	// gets_s를 써보자 gets의 경운 overflow가 일어나서 경계를 넘어간 쓰기를 하게 된다.
	gets_s(szBuffer, sizeof(szBuffer));
	puts(szBuffer);

	//linux나 unix에서는 file gets를 사용한다 마지막에 file의 이름인 stdin까지 적어줘야 한다.
	fgets(lszBuffer, sizeof(lszBuffer), stdin);
	puts(lszBuffer);


	return 0;
}
