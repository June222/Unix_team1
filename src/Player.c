#pragma warning(disable: 4996)
#include <stdio.h>
#include "node_2.h"
#include "textfilewriter_2.h"

int main() {
	char input_order[10]; // ��ɾ�
	int count_order; // ��ɾ� ���� Ƚ��

	scanf_s("%d", &count_order);

	for (int i = 0; i < count_order; i++) {

		scanf_s("%s", input_order, (unsigned int)sizeof(input_order));

		char order_first_char = input_order[0]; // order�� ù��°�� �ι�°�� ��ɾ ����
		char order_second_char = input_order[1];

		if (order_first_char == 'a') {

			printf("%s", input_order);
			printf("�տ� ����?");
		}
		else if (order_first_char == 'd') {

		}
		else if (order_first_char == 'l') {
			if (order_second_char == 'i') {

			}
			else if (order_second_char == 'o') { // load : ���� �а� �����ϱ� ���� ������ �� �ȵ�
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
		else if (order_first_char == 's') { // save : ���� ����

			write_file("test.txt");
		}
		else {
			printf("%s", input_order);
			printf("�տ� ����?");
		}





	}
	return 0;
}