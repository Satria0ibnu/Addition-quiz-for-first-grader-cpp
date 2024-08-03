#include <iostream>
#include <ctime> //library for the time
#include <cstdlib> //library that helps randomization
#include <cmath>
using namespace std;

int main () 
{
	int counter = 0; // for question counter
	int correctAnswer = 0; //for correct counter
	long startTime = time(0); // for starting the time
	
	cout << "Hi First Grader!" << endl;
	
	while (counter < 10) // the total question
	{
		// Randomized number as number1 and number2
		srand (time(0));
		int number1 = rand () % 10; 
		int number2 = rand () % 10;
	
		// Ensure that number 1 always bigger than number 2 
		// (we expect first grader dont know negative number yet)
		if (number1 < number2)
		{
			int temp = number1;
			number1 = number2;
			number2 = temp;
		}	
	
		// First Grader do the calculation
		cout << "What is " << number1 << " - " << number2 << " ?" << endl;
		int answer;
		cin >> answer;
		
		//Check the answer
		if ((number1 - number2) == answer)
		{
			cout << "correct" << endl << endl;	
			correctAnswer++;
			if (correctAnswer == 7) break;
		}
		else
		{
			cout << "Nice try, its "<< number1-number2 << endl << endl;
		}
		
		counter++;
	}
	
	
	long endTime = time(0);
	long testTime = endTime - startTime;
	cout << "You have answer " << correctAnswer << " correct answer"<< endl;
	cout << "Time Taken "<< testTime << " seconds" << endl;
	
	
	cout << endl << "-----------------------------------------" <<endl;
	cout << "Student Name: Poedding djellj" <<endl;
	cout << "Student ID: 0012022000xx" <<endl;
	time_t currtime = time(0);
	char *mytime = ctime(&currtime);
	cout << "Date and Time " << endl;
	cout << mytime << endl;

	return 0;
}