case 3: //������
	dot_write(answer);//�� ���
	fnd_hexa_number(cur_num);//���� ���� ī�� ���
	clcd_write_string("choose up(1) & down(2)");//�� �����ϴ� �κ� �߰� �ʿ�
	clcd_write_string("chipe : x");//�� �����ϴ� �κ� �߰� �ʿ�

	int val = 0;
	while (1)
	{
		if (life > 0) { //����� ����������
			printf("choose up(1) & down(2) : "); //�Է� �ް�
			scanf("%d", &val);

			if (val == 1) {//up
				if (answer > cur_num) {//������
					score *= 2;
				}
				else {//Ʋ����
					life -= 1;
				}
			}
			else if (val == 2) {//down
				if (answer < cur_num) {
					score *= 2;
				}
				else {//Ʋ����
					life -= 1;
				}




				if (life == 0) {//����� ���µ� ���������ϱ� ���� �й�
					clcd_write_string("loser");//�� �����ϴ� �κ� �߰� �ʿ�
					sel.all = 1; //���� ������ ����
					break;


					printf("Do you want to one More? Y ");
					char re = 0x00;
					scanf("%s", &re);
					if (re == 0x59) {
						sel.all = 0;
					}
					else {
						sel.all = 1;
					}

					break;
				}


				break;
			}
		}

		unmapper();
		close(fd);
		return 0;
	}