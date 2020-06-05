case 3: //게임중
	dot_write(answer);//답 출력
	fnd_hexa_number(cur_num);//현재 선택 카드 출력
	clcd_write_string("choose up(1) & down(2)");//줄 선택하는 부분 추가 필요
	clcd_write_string("chipe : x");//줄 선택하는 부분 추가 필요

	int val = 0;
	while (1)
	{
		if (life > 0) { //목숨이 남아있을때
			printf("choose up(1) & down(2) : "); //입력 받고
			scanf("%d", &val);

			if (val == 1) {//up
				if (answer > cur_num) {//맞으면
					score *= 2;
				}
				else {//틀리면
					life -= 1;
				}
			}
			else if (val == 2) {//down
				if (answer < cur_num) {
					score *= 2;
				}
				else {//틀리면
					life -= 1;
				}




				if (life == 0) {//목숨이 없는데 못맞췄으니까 최종 패배
					clcd_write_string("loser");//줄 선택하는 부분 추가 필요
					sel.all = 1; //게임 끝나고 종료
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