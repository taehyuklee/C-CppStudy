#include <stdio.h>


int main(void){

    int a[10] = {1,2,3,4,5,6,7,8,9,1};

    // printf(_countof(a)); (이것도 Visual Studio에서만 사용 가능)

    //아래와 같이 해줘야 함 전체 배열의 메모리크기 / 한 요소의 메모리 크기 = 메모리 요소 개수
    printf("%zu\n" , sizeof(a)/sizeof(a[0]));

    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++){
        printf("%d\n", 3);
    }


    return 0;

}