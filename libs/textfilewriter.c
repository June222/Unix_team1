#include <stdio.h>
#include "textfilewriter_2.h"
#define MAX_TITLE_SIZE 50

void create_music_titles(FILE* stream) { // 한줄씩 파일의 내용을 읽는 것 까지 구현
	char* music_titles;
	char buffer[1000];

	while (!feof(stream)) {
		music_titles = fgets(buffer, sizeof(buffer), stream);
		printf("%s", music_titles);
	}
}