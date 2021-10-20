#include <iostream>

using namespace std;

void moveDisks (int num, int fromPeg, int toPeg, int tempPeg)
{
	if (num == 1) 
	{
		cout<< "Move a disk from peg "<<fromPeg<<" to peg "<<toPeg<<endl;
		return;
	}
	
		moveDisks(num -1, fromPeg, tempPeg, toPeg);
		cout<< "Move a disk from peg "<<num<<" from peg "<<fromPeg<<" to peg "<<toPeg<<endl;
		moveDisks(num-1, tempPeg, toPeg, fromPeg);
}

int main()
{
	const int numDisks = 4;
	const int fromPeg = 1;
	const int toPeg = 3;
	const int tempPeg = 2;
	moveDisks(numDisks, fromPeg, toPeg, tempPeg);
	cout<<"All the pegs are moved"<<endl;
}