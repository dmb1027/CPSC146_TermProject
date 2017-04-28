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
	int count2 = 0;
	int count3 = 0;
	double score[100];
	double finScore[100];

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
			string allAns[100];
			double finalScore = 0;
			int m = 0; // m is a random variable that if the question is unique then after answering it will incrament it to the number of questions chosen.
			int savedQ[100]; // savedQ is the random questions chosen and stored for later retreval.
			string savedA[100]; //savedA is the users answers to the questions.
			startTime = time(0);
			count = 0;
			while (m < inputVal && duration < 600) {
				duration = (time(0) - startTime);
				int srand(time(0));
				int random_x = rand() % 101; // random_x is a temporary variable for the random number.
				questionNumber = random_x;
				Unique_Question(questionNumber, inputVal, savedQ);

				if (Unique_Question(questionNumber, inputVal, savedQ) == true) {
					duration = (time(0) - startTime);
					getAnswer(questionNumber);
					cout << endl << getQuestion(questionNumber) << endl;
					allAns[count] = getAnswer(questionNumber);
					savedQ[inputVal] = questionNumber; // This is saving the question number to the saved string to be pulled from later.
					string questionAns;
					questionAns = " "; // This is the user answers and where they'll be stored.
					cin >> questionAns;

					//		for (int c = 0; 0 < count; c++) {
					//	getAnswer(questionNumber) = savedQ[b];
					//}
					//cout << getAnswer(questionNumber) << endl;

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
					//savedQ[count2] = questionNumber;
					//count2++;
					//allAns[count3] = questionNumber;
					//count3++;
					/*for (int b = 0; b < count; b++) {
					savedQ[b];
					getAnswer(questionNumber);// = savedQ[b];
					cout << getAnswer(questionNumber) << endl;
					}*/
				}






			}
			cout << "your answers were\n";
			for (int a = 0; a < count; a++) {
				cout << savedA[a] << endl;
			}
			cout << "The correct answers were\n";
			for (int b = 0;b < count; b++) {
				cout << allAns[b] << endl;
			}
			for (int c = 0; c < count; c++) {
				if (savedA[c] == allAns[c]) {
					score[c] = 1 * weight;
					//cout << score[c] << "    score loaded " << endl;  //Error testing
				}
				else
					score[c] = 0;
				//finScore[c] = score[c];
			}
			//cout << score[c];
			for (int d = 0; d < count; d++) {
				//cout << score[d] << "    score accessing " << endl; //Error testing
				finalScore += score[d];
				
			}
			finalScore = finalScore / inputVal;
			finalScore = finalScore * 100;
			cout << fname << " " << lname << endl << "ID Number: " << ID << endl;
			cout << "Your final score is " << finalScore << "%\n" << endl;
			//cout << savedQ[b] << endl;
			//getAnswer(questionNumber) = allAns[b];
			//cout << getAnswer(questionNumber);// = allAns[b] << endl;
			//getAnswer(questionNumber) = savedQ[b];
			//cout << getAnswer(b) << endl;
			//}
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