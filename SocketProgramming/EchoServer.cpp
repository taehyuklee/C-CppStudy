// winsock2.h 는 Socket객체를 가지고 있다.
#include <winsock2.h>

int main(void) {

	// 1. 접속대기 소켓 생성 socket(L3 방식, L4 방식, 0) SystemCall을 하게 된다. 
	// socket 객체를 만들어서 가져온다
	SOCKET hSocket = ::socekt(AF_INET, SOCK_STREAM, 0);
	if (hSocket == INVALID_SOCKET) {
		puts("ERROR: 접속 대기 소켓을 생성할 수 없습니다.");
		return 0;
	}


	// 2. 포트 바인드 (Socket은 파일에 IP, Port 정보가 더 들어가 있다)
	SOCKADDR_IN svraddr = { 0 }; //SOCKETADDR_IN 구조체로 정의된다.
	svraddr.sin_family = AF_INET; // Family라고 나와 있는것은 AF_INET <- IP방식을 의미한다.
	svraddr.sin_port = htons(25000); // htons {host to network short}
	svraddr.sin_addr.S_un.S_addr = htonl(INADDR_ANY); // htonl {host to network long}
	if (::bind(hSocket, (SOCKADDR*)&svraddr, sizeof(svraddr)) == SOCKET_ERROR) {
		puts("ERROR: 소켓에 IP주소와 포트를 바인드 할 수 없습니다.");
		return 0;
	}


	// 3. Listen상태로 전환
	if (::listen(hSocket, SOMAXCONN) == SOCKET_ERROR) {
		puts("ERROR: 리슨 상태로 전환할 수 없습니다.");
		return 0;
	}
	
}
