/*
#include <stdio.h>
int main(void){
	int buffer1[5] = {0xFF, 0x56, 0x7B, 0xFA, 0xF1};
    int buffer2[5];

    FILE * stream = fopen("student.dat", "wb");
    // fwrite(&buffer1, sizeof(int), 5, stream);
	//buffer1�� ������ 0xFF(int)�� ũ�⸸ŭ 5�� stream�� ���

	fwrite(&buffer1, sizeof(buffer1), 1, stream);
    fclose(stream);

	stream = fopen("student.dat", "rb");
	fread(&buffer2, sizeof(int), 5, stream);
	//stream�� ������ 5���� �о 0xFF(int)�� ũ�⸸ŭ buffer2 �����ض�
    printf("%#X %#X %#X %#X %#X", buffer2[0], buffer2[1], buffer2[2], buffer2[3], buffer2[4] ); 
	fclose(stream);

	return 0;
}
*/
