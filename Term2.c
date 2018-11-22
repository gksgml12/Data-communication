int main(void) {
	printf("데이터의 갯수를 입력하시오.");
	scanf_s("%d", &n);
	printf("데이터를 입력하시오.\n");
	message = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &message[i]);
	}
	printf("데이터 입력이 끝났습니다.\n\n");
	checksum = calculation_checksum(n,message);
	check_checksum(checksum);

	return 0;
}