#include <stdio.h>
#include "textfilewriter_2.h"
#define MAX_TITLE_SIZE 50

void create_music_titles(FILE* stream) { // ���پ� ������ ������ �д� �� ���� ����
	char* music_titles;
	char buffer[1000];

	while (!feof(stream)) {
		music_titles = fgets(buffer, sizeof(buffer), stream);
		printf("%s", music_titles);
	}
}
void read_file(char* file_name) { // ������ �̸��� test.txt�� �����ϰ� �����Ͽ��� -> �̴� Player.c���� ����
	// ���� �����Ϳ� text�� �����ϰ� create_m_t()�Լ��� ���ڷ� �Ѱ���.
	FILE* fp = NULL;
	if (fopen_s(&fp, file_name, "r") == 0) {
		printf("������ �������ϴ�.\n");
		create_music_titles(fp);
	}
	else {
		printf("������ ���� ���߽��ϴ�.\n");
	}

	fclose(fp);
}