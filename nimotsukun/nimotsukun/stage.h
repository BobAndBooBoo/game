#pragma once

#include <iostream>
#include <string>

// nimotsukun�̃X�e�[�W���`����N���X
class Stage
{
public:
	void update(); // �X�e�[�W�A�b�v�f�[�g
	void draw();   // �X�e�[�W�`��
	bool isClear(); // �Q�[���N���A����
private:
	std::string m_stage = \
		"########\n\
# .. p #\n\
# oo   #\n\
#      #\n\
########"; // TO DO: m_stage[i][j]�ŕ������擾�ł���悤�ɂ���
};
