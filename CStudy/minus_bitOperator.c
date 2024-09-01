#include <stdio.h>

int main(void){

    int a =0 , b = 0;
    int result = 0;
    // scanf_s("%d%d", &a, &b);
    //scanf_s는 보안강화 문법으로 MS Visual Studio에서만 제공되고 일반적으로 scanf를 사용할수 있다.
    scanf("%d%d", &a, &b);

    //result = a - b;

    //bit연산자 이용 
    result = a + (~b + 1);
    printf("%d\n", result);

    return 0;

}