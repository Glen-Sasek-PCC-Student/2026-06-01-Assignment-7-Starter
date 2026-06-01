#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

const double ASSIGNMENT_WEIGHT = 0.60;
const double EXAM_WEIGHT = 0.20;

const int MIN_ASSIGNMENT_COUNT = 0;
const int MAX_ASSIGNMENT_COUNT = 10;

const double MIN_SCORE = 0.0;
const double MAX_SCORE = 4.0;

const string PROMPT_NUM_ASSIGNMENTS = "Enter the number of assignments (0 to 10): ";

// Function prototypes (if any)
void helloMessage();
void usageMessage();
void goodbyeMessage();

int readInt(string prompt); 
double readDouble(string prompt); 

double assignAverage(int numAssigns); 

// The assignments are weighted at 60%, 
// the midterm and final exams are weighted at 20% each.
double calcDecimalGrade(double assignAvg, double midtermExam, double finalExam);

char calcLetterGrade(double decimalGrade); 

double getScoreInRange(string prompt);

void displayGrade(double decimalGrade, char letterGrade);// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html

int main(int argc, char* argv[]) {
  cout << "Hello, World!" << endl;
  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
