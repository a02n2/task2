#include <stdio.h>

int main(void) {
	FILE *fp;
	char sBuf[256] = { 0 };
	int iSize = sizeof(sBuf);

	/*1行読み込み*/
	fp = fopen("STEP_00-07.txt", "r");

	fgets(&(sBuf[0]), iSize, fp);

	printf("%s", &(sBuf[0]));

	fclose(fp);

	/*追加を書き込み*/
	fp = fopen("STEP_00-07.txt", "a");

	fputs("追加", fp);

	fclose(fp);

	return 0;

}