#include "stage.h"

#include <iostream>
#include <string>


int main()
{
	Stage cStage;
	while (true) {
		cStage.update();
		cStage.draw();
		cStage.isClear();
	}
	return 0;
}