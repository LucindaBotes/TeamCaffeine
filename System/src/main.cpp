#include <iostream>
#include "Soldiers.h"
#include "ModeContext.h"
#include "Design.h"
#include "RealTime.h"

// #include <gtest/gtest.h> // ! Google Test Framework which cmake gets... ignore error

static std::string header = R"(
'########::'######::::::::'##:::::'##::::'###::::'########:::::::::'######::'####:'##::::'##:'##::::'##:'##::::::::::'###::::'########::'#######::'########::
... ##..::'##... ##::::::: ##:'##: ##:::'## ##::: ##.... ##:::::::'##... ##:. ##:: ###::'###: ##:::: ##: ##:::::::::'## ##:::... ##..::'##.... ##: ##.... ##:
::: ##:::: ##:::..:::::::: ##: ##: ##::'##:. ##:: ##:::: ##::::::: ##:::..::: ##:: ####'####: ##:::: ##: ##::::::::'##:. ##::::: ##:::: ##:::: ##: ##:::: ##:
::: ##:::: ##::::::::::::: ##: ##: ##:'##:::. ##: ########::::::::. ######::: ##:: ## ### ##: ##:::: ##: ##:::::::'##:::. ##:::: ##:::: ##:::: ##: ########::
::: ##:::: ##::::::::::::: ##: ##: ##: #########: ##.. ##::::::::::..... ##:: ##:: ##. #: ##: ##:::: ##: ##::::::: #########:::: ##:::: ##:::: ##: ##.. ##:::
::: ##:::: ##::: ##::::::: ##: ##: ##: ##.... ##: ##::. ##::::::::'##::: ##:: ##:: ##:.:: ##: ##:::: ##: ##::::::: ##.... ##:::: ##:::: ##:::: ##: ##::. ##::
::: ##::::. ######::::::::. ###. ###:: ##:::: ##: ##:::. ##:::::::. ######::'####: ##:::: ##:. #######:: ########: ##:::: ##:::: ##::::. #######:: ##:::. ##:
:::..::::::......::::::::::...::...:::..:::::..::..:::::..:::::::::......:::....::..:::::..:::.......:::........::..:::::..:::::..::::::.......:::..:::::..::

)";

static bool _runTests = false; // Change this to true to run tests

int runTests()
{
	// testing::InitGoogleTest(&argc, argv);
	// return RUN_ALL_TESTS();
}

int runApplication()
{
	int modeSelection; 

    std::cout << header << std::endl;
	std::cout << "Choose your game mode: " << std::endl;
	std::cout << "1. Real-Time mode" << std::endl;
	std::cout << "2. Design mode" << std::endl;

	std::cin >> modeSelection;
	if(modeSelection == 1)
	{
		ModeContext* mode = new ModeContext(new RealTime());
		mode->start();
	}
	else if(modeSelection == 2)
	{
		ModeContext* mode = new ModeContext(new Design());
		mode->start();
	}
	else
	{
		std::cout << "Invalid mode selection." << std::endl;
	}
	return 0;
}

int main()
{
	if(_runTests) return runTests();
	else return runApplication();
}
