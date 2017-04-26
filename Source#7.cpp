#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;


bool Validate_ID(int ID) {
	int idSize;
	string idstring = to_string(ID);
	idSize = idstring.size();

	if (idSize == 6)
		return true;
	else
		return false;
}

bool Unique_Question(int questionNumber, int inputVal, int savedQ[20]) {


	savedQ[questionNumber];
	for (int i = 0; i < inputVal; i++) {
		if (savedQ[i] == questionNumber) {
			return false;
		}
		else if (savedQ[i] != questionNumber) {
			return true;
		}
	}


}


string getQuestion(int numLine)
{
	string line;
	int lineCount = 0;
	ifstream QFile("TestBank.txt");
	if (QFile.is_open())
	{
		while (getline(QFile, line))
		{
			lineCount++;
			if (lineCount == numLine)
			{
				return line;
			}
		}
	}
}










int main()
{
	string fname = "";
	string lname = "";
	int x = 0;
	int ID;
	string quiz = "s";
	int done = 0;

	bool flag = true;
	int weight = 0;
	int inputVal = 0;
	int questionNumber = 0;

	while (!done) {
		cout << " Enter your first name.\n";
		cin >> fname;
		cout << "Enter your last name.\n";
		cin >> lname;

		cout << "Enter your 6 digit ID\n";
		cin >> ID;
		bool validid = Validate_ID(ID);


		while (validid != true) {
			if (x > 1) {
				cout << "Too many tries.\n";
				break;
			}
			cout << "Enter your 6 digit ID\n";
			cin >> ID;
			validid = Validate_ID(ID);
			x++;
		}
		if (validid == true) {
			flag = false;
			cout << "Hello";
		}

		if (flag == false)
		{
			double weight = 0; //the weight of each problem.
			int inputVal = 5; //For the user to choose either 10 or 20 question.
			while (inputVal != 20 && inputVal != 10) {
				cout << "Enter 10 for 10 questions or 20 for 20 questions.\n";
				cin >> inputVal;
				if (inputVal == 10) {
					weight = 1;
				}
				else if (inputVal == 20) {
					weight = 0.5;
				}
			}

			int questionNumber;
			int m = 0;
			int savedQ[100];
			string savedA[100];
			while (m < inputVal) {
				srand(time(0));
				int random_x = rand() % 101;
				questionNumber = random_x;
				Unique_Question(questionNumber, inputVal, savedQ);

				if (Unique_Question(questionNumber, inputVal, savedQ) == true) {
					string currentQuestion = getQuestion(questionNumber); // had in there as Q[100] still broke
					cout << currentQuestion;						   //savedQ[questionNumber];
					string questionAns;
					questionAns = " ";
					cin >> questionAns;
					while (questionAns != "T" || questionAns != "F") {
						if (questionAns == "TRUE") {
							questionAns = "T";
						}
						else if (questionAns == "FALSE") {
							questionAns = "F";

						}
						else if (questionAns == "true" || questionAns == "false") {
							if (questionAns == "true") {
								questionAns = "T";
							}
							else if (questionAns == "false") {
								questionAns = "F";
							}
						}
						else if (questionAns == "t" || questionAns == "f") {
							if (questionAns == "t") {
								questionAns = "T";
							}
							else if (questionAns == "f") {
								questionAns = "F";
							}
						}
						/*else if (questionAns != "F" || questionAns != "T") {
						cout << "Please re-enter your answer with either true or false.\n";
						cin >> questionAns;
						}*/
					}
					//savedA[questionNumber] = questionAns;
					m++;
				}







			}
			//print out there answers and the correct answer
			//print out the time it took
			//print out their score








			if (flag == true) {
				done = 1;
			}


			if (flag == false) {
				cout << "Enter s to retake the quiz or press q to quit.\n";
				cin >> quiz;


				while (quiz != "s" && quiz != "q") {

					cout << "Enter s to retake the quiz or press q to quit.\n";
					cin >> quiz;
				}

				if (quiz == "q") {
					done = 1;
				}
			}




		}
		cout << "\nProgram Ended\n";
		int z;
		cin >> z;
		return 0;
	}
}
