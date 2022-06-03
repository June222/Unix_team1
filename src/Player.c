#pragma warning(disable: 4996)
#include <stdio.h>
#include "node_2.h"
#include "textfilewriter_2.h"

int main() {
	char input_order[10]; // 명령어
	int count_order; // 명령어 받을 횟수

	scanf_s("%d", &count_order);

	for (int i = 0; i < count_order; i++) {

		scanf_s("%s", input_order, (unsigned int)sizeof(input_order));

		char order_first_char = input_order[0]; // order의 첫번째와 두번째로 명령어를 구분
		char order_second_char = input_order[1];

		if (order_first_char == 'a') {

			printf("%s", input_order);
			printf("앞에 띄어쓰기?");
		}
		else if (order_first_char == 'd') {

		}
		else if (order_first_char == 'l') {
			if (order_second_char == 'i') {

			}
			else if (order_second_char == 'o') { // load : 파일 읽고 생성하기 아직 구현이 다 안됨
				read_file("test.txt");
			}
		}
		else if (order_first_char == 'n') {

		}
		else if (order_first_char == 'p') {
			if (order_second_char == 'r') {

			}
			else if (order_second_char == 'l') {

			}
		}
		else if (order_first_char == 'm') {

		}
		else if (order_first_char == 'c') {

		}
		else if (order_first_char == 'q') {

		}
		else if (order_first_char == 's') { // save : 파일 쓰기

			write_file("test.txt");
		}
		else {
			printf("%s", input_order);
			printf("앞에 띄어쓰기?");
		}





	}
	return 0;
}