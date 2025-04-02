#include "MutantStack.hpp"
#include <iostream>

#include <iostream>
#include "MutantStack.hpp"

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
	std::cout << "Popping one element from the stack" << std::endl;
	mstack.pop();

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Printing the size of the stack: " << mstack.size() << std::endl; // Should print 1

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Pushing 3, 5, 737, 0, in that order respectively: " << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Iterating through stack using iterator:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Testing Reverse Iteration:" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Testing Copy Constructor:" << std::endl;
	MutantStack<int> copiedStack(mstack);
	std::cout << "Copied stack size: " << copiedStack.size() << std::endl;

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Testing Assignment Operator:" << std::endl;
	MutantStack<int> assignedStack;
	assignedStack = mstack;
	std::cout << "Assigned stack size: " << assignedStack.size() << std::endl;

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Testing with different data types:" << std::endl;

	MutantStack<double> doubleStack;
	doubleStack.push(3.14);
	doubleStack.push(2.71);
	std::cout << "Double Stack top: " << doubleStack.top() << std::endl;

	MutantStack<char> charStack;
	charStack.push('A');
	charStack.push('B');
	std::cout << "Char Stack top: " << charStack.top() << std::endl;

	MutantStack<std::string> stringStack;
	stringStack.push("Hello");
	stringStack.push("World");
	std::cout << "String Stack top: " << stringStack.top() << std::endl;

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "Testing Empty Stack Behavior:" << std::endl;
	MutantStack<int> emptyStack;
	std::cout << "Is stack empty? " << (emptyStack.empty() ? "Yes" : "No") << std::endl;

	if (!emptyStack.empty())
	{
		std::cout << "Trying to access top of an empty stack... which shouldn't happen" << std::endl;
		std::cout << emptyStack.top() << std::endl;
	}
	else
	{
	std::cout << "Cannot access top of an empty stack!" << std::endl;
	}

	return 0;
}


/* int main()
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
} */
