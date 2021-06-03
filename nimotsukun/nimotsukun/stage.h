#pragma once

#include <iostream>
#include <string>

// nimotsukunのステージを定義するクラス
class Stage
{
public:
	void update(); // ステージアップデート
	void draw();   // ステージ描画
	bool isClear(); // ゲームクリア判定
private:
	std::string m_stage = \
		"########\n\
# .. p #\n\
# oo   #\n\
#      #\n\
########"; // TO DO: m_stage[i][j]で文字を取得できるようにする
};
