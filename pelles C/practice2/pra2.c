﻿/*
#include<stdio.h>

int main(void)
{
	FILE* src = fopen("src.jpg", "rb"); // 입력 스트림 rb 바이너리 파일 일때는 txt 가 아닌 bin 을 쓰는듯하다
	FILE* des = fopen("dst.jpg", "wb"); // 출력 스트림 wb 텍스트 파일이 아닌 바이너라 파일이라 t가 아닌 b 를 붙인다
	// 파일이름 뒤 .XXX 를 붙일때 XXX는 파일확장자 명을 붙여야한다. 예제에는 bin으로 나왔지만
	  // jpg 파일을 복사하기 위해서 확장자 명을 jpg 로 해줘야 복사가 된다.
	char buf[100];
	int readCnt;

	if (src == NULL || des == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}

	while (1) // 반복문 조건식이 1 이라서 무한루프
	{
		readCnt = fread(buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("파일복사 완료");
				break;
			}
			else
				puts("파일복사 실패");

			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
	return 0;
}
*/
