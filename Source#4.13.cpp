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
	bool flag1 = true;

	savedQ[questionNumber];
	for (int i = 0; i < inputVal; i++) {
		if (savedQ[i] == questionNumber) {
			flag1 = false;
		}
	}
	return flag1;

}

string getQuestion(int numLine) {
	string line;
	int lineCount = 0;
	ifstream myfile("TestBank.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			lineCount++;
			if (lineCount == numLine)
			{
				return line;
			}
		}
	}

	else if (lineCount != numLine) {
		return "Unable to open file";
	}
}


string getAnswer(int numLine) {
	string line;
	int lineCount = 0;
	ifstream myfile("TestBankAnswers.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			lineCount++;
			if (lineCount == numLine)
			{
				return line;
			}
		}
	}

	else if (lineCount != numLine) {
		return "Unable to open file";
	}
}








int main()
{







	string fname = "";
	string lname = "";
	int x = 0;
	int duration = 0;
	double startTime;
	int ID;
	string quiz = "s";
	int done = 0;

	bool flag = true;
	int weight = 0;
	int inputVal = 0;
	int questionNumber = 0;
	int count = 0;

	while (done != 1) {
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
		}
		if (flag == false) {
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
			int m = 0; // m is a random variable that if the question is unique then after answering it will incrament it to the number of questions chosen.
			int savedQ[100]; // savedQ is the random questions chosen and stored for later retreval.
			string savedA[100]; //savedA is the users answers to the questions.
			startTime = time(0);
			while (m < inputVal && duration < 600) {
				duration = (time(0) - startTime);
				int srand(time(0));
				int random_x = rand() % 101; // random_x is a temporary variable for the random number.
				questionNumber = random_x;
				Unique_Question(questionNumber, inputVal, savedQ);
				getAnswer(questionNumber);
				if (Unique_Question(questionNumber, inputVal, savedQ) == true) {
					duration = (time(0) - startTime);
						cout << endl << getQuestion(questionNumber) << endl;
						savedQ[inputVal] = questionNumber; // This is saving the question number to the saved sting to be ppukked from later.
						string questionAns;
						questionAns = " "; // This is the user answers and where they'll be stored.
						cin >> questionAns;


						while (questionAns != "T" && questionAns != "F") {
							if (questionAns == "TRUE") {
								questionAns = "T";
							}
							else if (questionAns == "FALSE") {
								questionAns = "F";

							}
							else if (questionAns == "true") {
								questionAns = "T";
							}
							else if (questionAns == "false") {
								questionAns = "F";
							}
							else if (questionAns == "t") {
								questionAns = "T";
							}
							else if (questionAns == "f") {
								questionAns = "F";
							}
							if (questionAns != "F" && questionAns != "T") {
								cout << "Please re-enter your answer with either true or false.\n";
								cin >> questionAns;
							}
						}
						savedA[count] = questionAns;

						m++;
						count++;
					}

				




			}
			for (int a = 0; a < count; a++) {
				cout << savedA[a] << endl;
			}
			for (int b = 0; b < count; b++) {
				cout << getAnswer(b) << endl;
			}
			// Stop time here.//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
			int minutes;
			int seconds;
			duration = (time(0) - startTime);
			minutes = duration / 60;
			seconds = duration % 60;
			cout << "Your time was " << minutes << " minutes and " << seconds << " seconds." << endl;




			//print out there answers and the correct answer
			//print out the time it took
			//print out their score





		}


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
	system("pause");
	return 0;
}