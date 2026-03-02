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

int findFlowest() should find and return the lowest of the fiver scores passed
into it.  It should be called by calcAverage, which used the function to determine which of
the five scores to drop
*/
