#include <stdio.h>
#define MAX_TITLE_SIZE 50

void create_music_titles(FILE* stream) { // 한줄씩 파일의 내용을 읽는 것 까지 구현
	char* music_titles;
	char buffer[1000];

	while (!feof(stream)) {
		music_titles = fgets(buffer, sizeof(buffer), stream);
		printf("%s", music_titles);
	}
}

void read_file(char* file_name) { // 파일의 이름은 test.txt로 고정하고 구현하였음 -> 이는 Player.c에서 적음
	// 파일 포인터에 text를 배정하고 create_m_t()함수의 인자로 넘겨줌.
	FILE* fp = NULL;
	if (fopen_s(&fp, file_name, "r") == 0) {
		printf("파일을 열었습니다.\n");
		create_music_titles(fp);
	}
	else {
		printf("파일을 열지 못했습니다.\n");
	}
	
	fclose(fp);
}

void write_file(char* file_name) { // song_list의 문자열을 txt파일에 작성하는 함수.
	char* song_list = "Hello\nEnemy\nabc";
	int num;

	FILE* fp = NULL;
	num = fopen_s(&fp, file_name, "wt");
	if (num == 0) {
		puts("파일오픈성공\n");
		if (fputs(song_list, fp) == 0) {
			printf("입력됐음\n");
		}
		else {
			printf("입력이 안 됐음\n");
		}
	}
	else {
		puts("실패\n");
	}
	
	fclose(fp);
}