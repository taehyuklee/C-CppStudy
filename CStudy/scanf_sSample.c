#include <stdio.h>
#include <conio.h>

int main(void) {

	char szName[6] = { 0 };
	int nAge = 0;


	printf("나이를 입력하세요. : ");
	//scanf_s("%d", &nAge);
	scanf_s("%d%*c", &nAge);
	
	/* 여기서 scanf_s의 특성상 Enter를 쳐야 긑이 난다. 
	* 기작
	* 1. ""안에 있는 문자가 &nAge주소로 값이 들어가는 형상이 된다.
	* 2. 그러나 Enter /n문자는 여전히 I/O Buffer에 들어가 있다 (File)
	* 3. 아래 gets_s에서 File 안에 있는 /n 문자를 받아와서 그냥 수행해버린다.
	* 해결방법은 %*c를 이용해서 해당 순서의 Character를 없애버리면 된다는 의미이다. 
	
	* -> scanf "" 안에 있는건 형식대로 키를 받아오게 된다 %d integer 받아오고 그 이후 받아올게 없네? 그러면 파일 버퍼에 그대로 남겨놓은 상태로 진행된다
	* 따라서 명시를 해줘서 그걸 처리해줘야 한다 "%d%*c" 여기서 숫자 enter를 쳤을때 예를 들어 다음과 같은 방식이 될 것이다 5\n 여기서 5는 %d로 처리되어 있고
	* 처리되지 않고 있던 \n이 %*c형식으로 처리된다 해당 형식은 해당 Char를 버린다는 의미가 된다. *c */

	/*-----------------------------------------------------------------------*/

	printf("이름을 입력하세요. : ");
	gets(szName); //, sizeof(szName)
	// 여기서도 내가 위에 메모리를 6byte잡아놨는데 마지막에 Enter가 들어가는걸 고려하지 않았다. 한글은 한 글자당 UTF-8체계에서는 2byte를 먹기 때문에, Enter까지 고려해서 7byte를 해줘야 한다.

	// 중요 비교 포인트 gets method특징상 보면 File buffer에 있는 걸 메모리에 그냥 박아버리네 scanf_s는 자기 형식 외의 것들은 끊어지면 file buffer에 남겨놓나보다
	// 위에 scanf_s에서 /n을 버리지 않으면 File Buffer에 남아 있는 /n를 인식해서 그냥 넘어가버린거

	/*-------------------------------------------------------------------------*/



	printf("%d세 %s\n", nAge, szName);


	return 0;

}
