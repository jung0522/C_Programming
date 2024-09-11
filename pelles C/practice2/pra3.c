#include <stdio.h>
int main(void) {
long fpos;
int i;
/* 파일 생성 */
FILE *fp = fopen("test.txt", "w");
fputs("1234-", fp);
fclose(fp);

/* 파일 개방 */
fp = fopen("test.txt", "r");
for (i = 0; i < 4; i++) {
printf("%c", fgetc(fp)); // 현재 위치 1증가
fpos = ftell(fp); // 현재 위치 저장 
fseek(fp, -1, SEEK_END); // 맨 뒤로 이동 
printf("%c", fgetc(fp));
// 저장해놓은 위치 복원 
fseek(fp, fpos, SEEK_SET); 
}
fclose(fp);
return 0;
}
