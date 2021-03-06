//@author A0114148M
#include "stdafx.h"
#include "CppUnitTest.h"
#include "CommandMark.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ConstanTest
{
	TEST_CLASS(CommandMarkTest)
	{
	public:
		
		TEST_METHOD(InverseCommandMark)
		{
			vector<Task>* _currentDisplay = new vector<Task>;
			string _currentDisplayIndicator;
			Command* cmd = new CommandMark (1, _currentDisplay, _currentDisplayIndicator);
			Command* invCommand = cmd->getInverseCommand();
			CommandUnmark* inv2 = dynamic_cast<CommandUnmark*>(invCommand);
			Assert::IsNotNull(inv2);// assert that invCommand is of type CommandUnmark
		}

	};
}