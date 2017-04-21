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
		 }
		 if (flag == false) {
		 cout << "yes\n";
		 }
		 else if (flag == true) {
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
		 else if (flag == false) {
			 
				 
		 }

	}
	cout << "\nProgram Ended\n";
	system("pause");
	return 0;
}
