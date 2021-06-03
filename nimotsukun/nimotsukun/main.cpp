#include <iostream>
#include <string>

//namespace Config {
//	const int x = 8 + 1;
//	const int y = 5;
//	const int all = x * y;
//}
//namespace keyInput {
//	enum input {
//		UP,
//		DOWN,
//		LEFT,
//		RIGHT
//	};
//}
//class Stage {
//private:
//	char stage[Config::y][Config::x] = {};
//	int current_x = 0;
//	int current_y = 0;
//	int dot_y = 0;
//public:
//	Stage()
//	{
//		FILE* fp = NULL;
//		fopen_s(&fp, "stage.txt", "r");
//		if (fp == NULL) {
//			std::cout << "No stage data." << std::endl;
//			exit(1);
//		}
//		for (int i = 0; i < Config::y; ++i) {
//			for (int j = 0; j < Config::x; ++j) {
//				stage[i][j] = fgetc(fp);
//			}
//		}
//		fclose(fp);
//	}
//	void draw()
//	{
//		for (int i = 0; i < Config::y; ++i) {
//			for (int j = 0; j < Config::x; ++j) {
//				std::cout << stage[i][j];
//			}
//		}
//		std::cout << std::endl;
//	}
//	void getPosition()
//	{
//		for (int i = 0; i < Config::y; ++i) {
//			for (int j = 0; j < Config::x; ++j) {
//				if (stage[i][j] == 'p' || stage[i][j] == 'P') {
//					current_y = i;
//					current_x = j;
//				}
//			}
//		}
//	}
//	void update(char &c)
//	{
//		int dx = 0;
//		int dy = 0;
//		switch (c) {
//		case 'a': dx = -1; break;
//		case 's': dx = 1; break;
//		case 'w': dy = -1; break;
//		case 'z': dy = 1; break;
//		}
//		getPosition();
//
//		int next_x = current_x + dx;
//		int next_y = current_y + dy;
//		if (next_x < 1 || next_y < 1 || next_x >= Config::x - 2 || next_y >= Config::y - 1) {
//			return;
//		}
//
//		int tp_x = next_x;
//		int tp_y = next_y;
//
//		if (stage[tp_y][tp_x] == ' ' || stage[tp_y][tp_x] == '.') {
//			stage[tp_y][tp_x] = (stage[tp_y][tp_x] == '.') ? 'P' : 'p';
//			stage[current_y][current_x] = (stage[current_y][current_x] == 'P') ? '.' : ' ';
//		}
//		else if (stage[tp_y][tp_x] == 'o' || stage[tp_y][tp_x] == 'O') {
//			int tx2 = tp_x + dx;
//			int ty2 = tp_y + dy;
//			if (tx2 < 0 || ty2 < 0 || tx2 >= Config::x - 1 || ty2 >= Config::y) {
//				return;
//			}
//
//			if (stage[ty2][tx2] == ' ' || stage[ty2][tx2] == '.') {
//				stage[ty2][tx2] = (stage[ty2][tx2] == '.') ? 'O' : 'o';
//				stage[tp_y][tp_x] = (stage[tp_y][tp_x] == '.') ? 'P' : 'p';
//				stage[current_y][current_x] = (stage[current_y][current_x] == 'P') ? '.' : ' ';
//			}
//		}
//	}
//	bool isClear()
//	{
//		for (int i = 0; i < Config::y; ++i) {
//			for (int j = 0; j < Config::x; ++j) {
//				if (stage[i][j] == 'o') {
//					return false;
//				}
//			}
//		}
//		std::cout << "Clear!" << std::endl;
//		return true;
//	}
//};

//int main()
//{
//	Stage s;
//	s.draw();
//	while (true) {
//		char c;
//		std::cout << "w: UP, z: DOWN, a: LEFT, s: RIGHT. Press key: ";
//		std::cin >> c;
//		if (c == 'q') { break; }
//		s.update(c);
//		s.draw();
//		if (s.isClear()) {
//			return 0;
//		}
//		
//	}
//}