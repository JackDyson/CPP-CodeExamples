#include "pch.h"

int pch::RandomIntBetween(int lower, int upper)//returns a random integer between 2 given numbers
{
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(lower, upper);
	return dist(mt);
	//got this code from here:
	// https://www.tutorialspoint.com/generate-random-numbers-using-cplusplus11-random-library#:~:text=In%20C%2B%2B11%2C%20we%20can%20get%20the%20random%20library,requests%20for%20random%20data%20to%20the%20operating%20system.
}

void pch::delay(int Seconds)
{
	this_thread::sleep_for(chrono::seconds(Seconds));
}

string pch::inputLoopYN()
{
    string userAnswer = "";
    bool loopBool = true;
    while (loopBool)
    {
        cout << "Type your answer here :";
        cin >> userAnswer;
        if (userAnswer.compare("yes") == 0)
        {
            loopBool = false;
        }
        else if (userAnswer.compare("no") == 0)
        {
            loopBool = false;
        }
        else
        {
            cout << endl << "Your answer must be either 'yes' or 'no'" << endl;
            this->delay(1);
        }

    }
    return userAnswer;
}

string pch::inputLoopLRF()
{
    string userAnswer = "";
    bool loopBool = true;
    while (loopBool)
    {
        cout << "Type your answer here :";
        cin >> userAnswer;
        if (userAnswer.compare("left") == 0)
        {
            loopBool = false;
        }
        else if (userAnswer.compare("right") == 0)
        {
            loopBool = false;
        }
        else if (userAnswer.compare("forward") == 0)
        {
            loopBool = false;
        }
        else
        {
            cout << endl << "Your answer must be either 'left', 'right' or 'forward'" << endl;
            this->delay(1);
        }

    }
    return userAnswer;
}

string pch::inputLoopAD()
{
    string userAnswer = "";
    bool loopBool = true;
    while (loopBool)
    {
        cout << "Type your answer here :";
        cin >> userAnswer;
        if (userAnswer.compare("attack") == 0)
        {
            loopBool = false;
        }
        else if (userAnswer.compare("defend") == 0)
        {
            loopBool = false;
        }
        else
        {
            cout << endl << "Your answer must be either 'attack' or 'defend'" << endl;
            this->delay(1);
        }

    }
    return userAnswer;
}

string pch::inputLoopLR()
{
    string userAnswer = "";
    bool loopBool = true;
    while (loopBool)
    {
        cout << "Type your answer here :";
        cin >> userAnswer;
        if (userAnswer.compare("left") == 0)
        {
            loopBool = false;
        }
        else if (userAnswer.compare("right") == 0)
        {
            loopBool = false;
        }
        else
        {
            cout << endl << "Your answer must be either 'left' or 'right'" << endl;
            this->delay(1);
        }

    }
    return userAnswer;
}

