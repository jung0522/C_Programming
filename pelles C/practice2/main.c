/*
#include <stdio.h>
int main(void){
	int buffer1[5] = {0xFF, 0x56, 0x7B, 0xFA, 0xF1};
    int buffer2[5];

    FILE * stream = fopen("student.dat", "wb");
    // fwrite(&buffer1, sizeof(int), 5, stream);
	//buffer1의 내용을 0xFF(int)의 크기만큼 5번 stream에 써라

	fwrite(&buffer1, sizeof(buffer1), 1, stream);
    fclose(stream);

	stream = fopen("student.dat", "rb");
	fread(&buffer2, sizeof(int), 5, stream);
	//stream의 내용을 5번을 읽어서 0xFF(int)의 크기만큼 buffer2 저장해라
    printf("%#X %#X %#X %#X %#X", buffer2[0], buffer2[1], buffer2[2], buffer2[3], buffer2[4] ); 
	fclose(stream);

	return 0;
}
*/
