#include <Stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int i,num1, num2, hap, cha, gob, number;
	double na;
	char op;

	printf("���� 2���� ������ �Է�(��> 7 + 6) : ");


		 

			scanf_s("%d %c %d", &num1, &op, sizeof(op), &num2);

			switch (op)
			{
			case '+':
				hap = num1 + num2;
				printf("%d %c %d = %d\n", num1, op, num2, hap);
				break;

			case '-':
				cha = num1 - num2;
				printf("%d %c %d = %d\n", num1, op, num2, cha);
				break;

			case '*':
				gob = num1 * num2;
				printf("%d %c %d = %d\n", num1, op, num2, gob);
				break;

			case '/':
				na = (float)num1 / num2;
				printf("%d %c %d = %f\n", num1, op, num2, na);
				break;

			default:
				printf("%d %c %d ������ ������� �ʽ��ϴ�.\n", num1, op, num2);
				printf("���α׷��� �ٽ� �����Ͻʽÿ�.\n");
				break;
			}

			return 0;

		}
		
	
	

