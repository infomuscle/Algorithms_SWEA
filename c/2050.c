﻿//알파벳으로 이루어진 문자열을 입력 받아 각 알파벳을 1부터 26까지의 숫자로 변환하여 출력하라.

//[제약 사항]
//문자열의 최대 길이는 200이다.

//[입력]
//알파벳으로 이루어진 문자열이 주어진다.

//[출력]
//각 알파벳을 숫자로 변환한 결과값을 빈 칸을 두고 출력한다.

#include <stdio.h>

int main() {
	char inCh[200];

	scanf("%s", &inCh);

	for (int i = 0; i < 200; i++) {
		if (inCh[i] != NULL) {
			printf("%d ", inCh[i]-64);
		}
		else {
			break;
		}
	}

	return 0;
}