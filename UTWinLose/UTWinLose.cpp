
#include <iostream>

int main()
{

	int texaswin;
	int ouwin;
	std::cout << "Did Texas win? If yes, type 1; if no, write 0 :\n";
	std::cin >> texaswin;
	std::cout << "Did OU win? If yes, type 1; if no, write 0 :\n";
	std::cin >> ouwin;

	if (texaswin == 1 or ouwin == 0) {
		std::cout << "Texas wins!\n";
	}
	else {
		std::cout << "Texas loses :(\n";
	}
	std::cin.get();
	std::cin.get();
	}

