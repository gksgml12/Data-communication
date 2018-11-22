#include <stdio.h>

int b = 0;
int left = 0;
int right = 0;
int checksum = 0;
int error = 0;
int i = 0;

int calculation_checksum(int n,int *message) {
	for (i = 0;i < n;i++)
		b += message[n];

	left = b >> 4;
	right = b & 0x00001111;
	wrapped_sum = left + right;

	checksum = (~wrapped_sum) & 0x00001111;

	return checksum;
}/* 임의의 길이를 갖는 메시지를 넘겨받아 Checksum을 계산하여 return한다. */ 


void check_checksum(checksum) {
	b += checksum;
	left = b >> 4;
	right = b & 0x00001111;
	wrapped_sum = left + right;
	checksum = (~wrapped_sum) & 0x00001111;

	if (checksum == 0)
		printf("1\n");
	else
		printf("0\n");
}/* Checksum이 부착된 임의의 메시지를 넘겨받아, 에러가 검출되면 0, 아니면 1을 return한다. */ 