#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char szBuffer[32] = { 0 };
	//Java랑의 차이는 형상을 보면 비슷하다 heap에 저장된 것이 stack에 hash값 주소값이 저장되는거랑.
	//하지만, C에서는 그냥 그 자체고 메모리 자체의 포인터를 내뱉는다. (Java에서는 참조값을 stack에서 관리하는 형상임) 

	scanf_s("%s", szBuffer, (unsigned)_countof(szBuffer));
	printf("%s\n", szBuffer);

	//scanf_s의 특징이 있다 %s 즉, 내가 넣은 형식까지만 정해지고 내가 만약 good job 이렇게 치면 공백은 내가 scanf_s에 넣지 않았으므로 거기서 잘려버린다. 
	//공백을 넣을려면 앞서 배운 Escape sequence중 공백문자를 넣어줘야 한다. 그리고 job을 표현하기 위해서는 %s를 한 번 더해야한다.
	//만약 goodjob이라고 하면 하나의 문자열로 인식하기때문에 괜찮은데 아니면 그렇게 안됨.  라고 생각했었지만, 그냥 공백문자(\0)가 scanf_s에서는 안먹네, 

	//어찌됐던 공백문자는 여기서 취급을 하지 않고 잘라내 버리고 형식들만 취함.

	/*gets_s()는 빈 공백을 받아도 출력이 됐지만 scanf_s는 white space를 만나면 잘라버리는 특징이 있다.*/

	char szBufferLeft[32] = { 0 };
	char szBfferRight[32] = { 0 };

	scanf_s("%s%s",
		szBufferLeft, (unsigned)_countof(szBufferLeft),
		szBfferRight, (unsigned)_countof(szBfferRight));
	printf("%s %s \n", szBufferLeft, szBfferRight);

	return;
}
