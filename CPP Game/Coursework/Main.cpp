
#include "pch.h"
#include "Room.h"
#include "Enemy.h"


int main()
{
    pch rnd;
    cout << "///////////////////////////////////////////////////" << endl;
    cout << "/////////////// TRIAL OF THE MONK /////////////////" << endl;
    cout << "///////////////////////////////////////////////////" << endl << endl << endl << endl;
    rnd.delay(2);
    cout << "STATE YOUR FIRST NAME YOUNG MONK!" << endl;
    rnd.delay(1);
    cout << "Type your answer here :";
    string playerName = "";
    cin >> playerName;
    rnd.delay(2);
    cout << "A HARD TRIAL AWAITS YOU WHO CALLS YOURSELF " << playerName << endl;
    rnd.delay(2);
    cout << "GOOD LUCK!" << endl << endl << endl;
    rnd.delay(2);
    cout << "///////////////////////////////////////////////////" << endl;
    cout << "///////////// WELCOME TO MOUNT DOOM ///////////////" << endl;
    cout << "///////////////////////////////////////////////////" << endl;
    cout << endl << endl << endl;
    rnd.delay(1);
    Monk Player(100);
    cout << "You are a Monk from Dawn Fire Monestary" << endl;
    rnd.delay(2);
    cout << "As a skilled warrior, you have been given a task to enter Mount Doom" << endl;
    cout << "and find a holy artifact important to the Dawnists" << endl << endl;
    rnd.delay(3);
    cout << "Would you like to enter?" << endl;
    rnd.delay(1);
    string decision = rnd.inputLoopYN();//keeps player in a loop until they write yes or no
    if (decision.compare("yes") == 0)
    {
        cout << endl << "You enter the depths of Mount Doom and a strange feeling overcomes you" << endl;
        rnd.delay(1);
        int roomCounter = rnd.RandomIntBetween(10, 15);
        for (int n = 0; n < roomCounter; n++)
        {
            rnd.delay(2);
            int doorNum = rnd.RandomIntBetween(2, 3);
            cout << endl << "You see " << doorNum << " doors" << endl << endl;
            rnd.delay(2);
            if (doorNum == 2)
            {
                cout << "There is one door to the left and another to your right" << endl << endl;
               string userAnswer = rnd.inputLoopLR();
               if (userAnswer.compare("left") == 0)
               {
                   rnd.delay(1);
                   cout << "You slowly open the door to the left and walk through" << endl;
                   rnd.delay(1);
                   cout << "..." << endl;
                   rnd.delay(1);
                   cout << "..." << endl;
                   rnd.delay(1);
                   cout << "..." << endl;
               }
               else
               {
                   rnd.delay(1);
                   cout << "You open the door to the right and walk through" << endl;
                   rnd.delay(1);
                   cout << "..." << endl;
                   rnd.delay(1);
                   cout << "..." << endl;
                   rnd.delay(1);
                   cout << "..." << endl;
               }
            }
            else
            {
                cout << "You can go forward, left or right" << endl << endl;
                string userAnswer = rnd.inputLoopLRF();
                if (userAnswer.compare("left") == 0)
                {
                    rnd.delay(1);
                    cout << "You open the door to the left and walk through" << endl;
                    rnd.delay(1);
                    cout << "..." << endl;
                    rnd.delay(1);
                    cout << "..." << endl;
                    rnd.delay(1);
                    cout << "..." << endl;
                }
                else if (userAnswer.compare("right") == 0)
                {
                    rnd.delay(1);
                    cout << "You slowly open the door to the right and walk through" << endl;
                    rnd.delay(1);
                    cout << "..." << endl;
                    rnd.delay(1);
                    cout << "..." << endl;
                    rnd.delay(1);
                    cout << "..." << endl;
                }
                else
                {
                    rnd.delay(1);
                    cout << "You proceed forward" << endl;
                    rnd.delay(1);
                    cout << "..." << endl;
                    rnd.delay(1);
                    cout << "..." << endl;
                    rnd.delay(1);
                    cout << "..." << endl;
                }
            }
            Room room(&Player);
            room.~Room();
        }
        cout << endl << "You come notice a large pedestal in the center of the room" << endl;
        rnd.delay(1);
        cout << "A small talisman is laid on top of the pedestal" << endl;
        rnd.delay(1);
        cout << "This must be it! The artifact you have been sent to find" << endl;
        rnd.delay(1);
        cout << "Will you pick it up?" << endl;
        if (rnd.inputLoopYN() == "yes")
        {
            cout << "You carefully pick up the talisman and place it into your bag" << endl;
            rnd.delay(1);
            cout << "..." << endl;
            rnd.delay(1);
            cout << "..." << endl;
            rnd.delay(1);
            cout << "..." << endl;
            rnd.delay(1);
            cout << "You hear a forboding noise" << endl;
            cout << "Do you run?" << endl;
            if (rnd.inputLoopYN() == "yes")
            {
                if (rnd.RandomIntBetween(1, 3) == 1)
                {
                    //manage to escape
                }
                else
                {
                    //boss fight
                }
            }
            else
            {
                //boss fight
            }
        }
    }
    else
    {
        cout << endl << "You turn around, afraid to enter Mount Doom" << endl;
        rnd.delay(1);
        cout << "..." << endl;
        rnd.delay(1);
        cout << "..." << endl;
        rnd.delay(1);
        cout << "..." << endl;
        rnd.delay(1);
        cout << "You feel somewhat guilty for acting like a coward" << endl << endl;
        rnd.delay(2);
        cout << "///////////////////////////////////////////////////" << endl;
        cout << "/////////////////// GAME OVER /////////////////////" << endl;
        cout << "///////////////////////////////////////////////////" << endl;
  
    }
}

