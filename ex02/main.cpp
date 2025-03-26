#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Printing the top of the stack: " << mstack.top() << std::endl; // Should print 17

	mstack.pop();

	std::cout << "\nPrinting the size of the stack: " << mstack.size() << "\n" << std::endl; // Should print 1

	std::cout << "Pushing 3, 5, 737, 0, in that order respectively: " << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

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
