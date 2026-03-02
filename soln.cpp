/* Chapter 6 Programming Challenge #11

Write a program that calculates the average of a group of test scores, where the 
lowest score in the group is dropped.  it should have the following functions:

void getScore()  should ask the user for a test score, store it ina reference
parameter variable, and vlidate it. This function should be called by main
once for each of the five scores to be entered. (Input validation should not
accept test scores lower than 0 or higher than 100)

void calcAverage() should calculate and display the average of the four
highest scores.  This function should be called just onece by main
and should be passed the five scores

int findLowest() should find and return the lowest of the fiver scores passed
into it.  It should be called by calcAverage, which used the function to determine which of
the five scores to drop
*/

#include <iostream>
using namespace std;

/* finish prototypes */
void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
        /* call getScore 5 times to get five values */
        int score1, score2, score3, score4, score5;
        getScore(score1);
        getScore(score2);
        getScore(score3);
        getScore(score4);
        getScore(score5);

        cout << score1 << " "; 
        cout << score2 << " "; 
        cout << score3 << " "; 
        cout << score4 << " "; 
        cout << score5 << " "; 
        cout << endl; 
        /* call calculate average */ 
        calcAverage(score1, score2, score3, score4, score5);

}

/* code for all the functions */
void getScore(int& score)
{
        do
        {
                cout << "Enter a score: ";
                cin >> score;
        } while (score < 0 || score > 100); 
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
        int lowest = findLowest(score1, score2, score3, score4, score5);
        cout << "Dropping the lowest score: " << lowest << endl;
        double total = score1 + score2 + score3 + score4 + score5;
        double ave = (total - lowest) / 4.0;
        cout << "The average is: " << ave << endl; 

}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
        if (score1 <= score2 && score1 <= score3 && score1 <= score4 && score1 <= score5) 
        {
                 return score1;
        }
        else if (score2 <= score1 && score2 <= score3 && score2 <= score4 && score2 <= score5) 
        {
                return score2; 
        }
        else if (score3 <= score1 && score3 <= score2 && score3 <= score4 && score3 <= score5) 
        {
                return score3;
        }
        else if (score4 <= score1 && score4 <= score2 && score4 <= score3 && score4 <= score5) 
        {
                return score4;
        }
        else if (score5 <= score1 && score5 <= score2 && score5 <= score3 && score5 <= score4) 
        {
                return score5;
        }
        else
        {
                cout << "Unexpected problem in findLowest with values: " << endl;
                cout << score1 << " " << score2 << " " << score3 << " " << score4 << " " << score5 << endl;
                cout << "Returning 0";
                return 0;
        }
}
