#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Pushing 5 and 17 to the stack" << std::endl;

	mstack.push(5);
	mstack.push(17);

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Printing the top of the stack: " << mstack.top() << std::endl; // Should print 17

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Poping one element from the stack" << std::endl;
	mstack.pop();

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "\nPrinting the size of the stack: " << mstack.size() << "\n" << std::endl; // Should print 1

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Pushing 3, 5, 737, 0, in that order respectively: " << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout <<*it << std::endl;
	++it;
	}

	return 0;
}
