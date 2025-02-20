#include <iostream>
#include "../ext/color-console/color-console.h"

int main()
{
	print << "&0Black Color" << std::endl;
	print << "&1Dark Blue" << std::endl;
	print << "&2Dark Green" << std::endl;
	print << "&3Dark Aqua" << std::endl;
	print << "&4Dark Red" << std::endl;
	print << "&5Dark Purple" << std::endl;
	print << "&6Gold" << std::endl;
	print << "&7Gray" << std::endl;
	print << "&8Dark Gray" << std::endl;
	print << "&9Blue" << std::endl;
	print << "&aGreen" << std::endl;
	print << "&bAqua" << std::endl;
	print << "&cRed" << std::endl;
	print << "&dLight Purple" << std::endl;
	print << "&eYellow" << std::endl;
	print << "&fWhite" << std::endl;
	print << "&rReset" << std::endl;
	print << "&lBOLD" << std::endl;
	print << "&mStrikethrough" << std::endl;
	print << "&nUnderline" << std::endl;
	print << "&oItalic" << std::endl;

	while (true)
	{
		std::string input;
		std::getline(std::cin, input);
		print << input << std::endl;
	}

	system("pause");
	return 0;
}