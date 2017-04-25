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

bool Unique_Question(int questionNumber) {
	string Q[100] = { "In computing, keyboards are used as input devices.",
		"Operating systems are software systems that help make it more convenient to use computers and to manage the transitions between multiple jobs.",
		"C++ is a superset of C; it \"spruces up\" the C language and provides capabilities for object oriented programming.",
		"A computer is a device capable of performing computations and making logical decisions.",
		"Most programs in C++ input data from stdin and output data from stdout.",
		"The language understood by the microprocessor is called assembly language.",
		"A machine cycle is the time it take the microprocessor to fetch and execute a complete instruction.",
		"C, C++, and java are among the most powerful and most widely used assembly languages",
		"Machine language is the \"natural language\" of a particular computer.",
		"C++ has become widely used for writing software for computer networking and for distribution client/server applications.",
		"Nintendo was founded after the year 1900.",
		"Atomic bombs work by atomic fission.",
		"CPU stands for central processing unit.",
		"GPU stands for game processing unit.",
		"The hubble telescope was named for Edwin Hubble.",
		"Apple released the first iPhone in 2003.",
		"Firefox and Chrome are examples of operating systems.",
		"RAM stands for random-access memory.",
		"Bill Gates was the only founder of microsoft.",
		"Apple was the first company to produce a computer of any capacity.",
		"It takes two memory locations (16 bits each) to store an address in the 8085 system",
		"A compiler is a translation program that converts high-level instructions into a set of binary instructions (machine code) for execution.",
		"The control bus and memories share a bidirectional bus in a typical microprocessor system.",
		"The language understood by the microprocessor is called assembly language.",
		"A machine cycle is the time it takes a microprocessor to fetch and execute a complete instruction.",
		"An address bus is also called a unidirectional bus.",
		"A coprocessor is a microprocessor designed with a limited instruction set optimized to perform arithmetic operations very quickly.",
		"To keep the number of IC pins to a minimum, the 8085 uses a multiplexed bus.",
		"Machine language is independent of the type of microprocessor in a computer system.",
		"A mnemonic is an English-like instruction that is converted by an assembler into a machine code for use by a processor.",
		"Social media actually goes back to some of the earliest Internet technologies and even predates the Internet.",
		"E-mail is still the most popular online communication technology.",
		"Pervasive computing refers to the fact that computer and communication devices allow one to access information anytime, anywhere.",
		"The World Wide Web has been around for more than 30 years.",
		"A client/server network consists of one client and several server computers.",
		"Information is data that has been summarized or otherwise processed for use in decision-making.",
		"Expansion slots provide a computer with additional secondary storage.",
		"The focus of IT is to incorporate new, cutting-edge technologies into existing business processes.",
		"Computers require programs, which are lists of specific instructions, in order to carry out their work.",
		"People are a key ingredient in ensuring the success of information systems in a business environment.",
		"A monitor displays information?",
		"A SD card is an output device?",
		"Microsoft office is a piece of software?",
		"A firewall is a type of hardware?",
		"A terabyte is equal to 1 million gigabytes?",
		"Bluetooth allows your device to connect with another device",
		"A processor accepts your commands for the computer?",
		"Software that is free for trial is called shareware.?",
		"CD stands for collective disk?",
		"A pen drive is a storage device?",
		"a microphone is used as an output device?",
		"the CPU is referred as the stomache of the computer ?",
		"a computer is a piece of hardware?",
		"a processor accepts commands from your computer ?",
		"the DVORAK keyboard is 20 times faster than your average QWERTY keyboard?",
		"E-Mail was around before the world wide web?",
		"8 bits = 1 byte?",
		"HP, Microsoft, and Apple were all started in a garage?",
		"the Firefox logo is actually a red panda?",
		"a macbook battery is bulletproof?",
		"4 bits = 1 nibble?",
		"Microsoft office is a free software that comes pre-installed on every computer?",
		"You can plug a USB 3.0 in both ways",
		"Holding in the power button to turn off your computer corrupts data.",
		"Electrostatic Discharge is when a computer component is electrocuted by static electricity from the handler.",
		"A keyboard is the only input device that a computer can use",
		"The \"home\" key takes you to your desktop",
		"Each computer has a NIC or Network Interface Card",
		"Each computer has a MAC Address that is used to locate it, like an IP Address",
		"You're supposed to safely eject your flash drive before removing it to prevent data corruption",
		"Mac and Windows are two different processing systems",
		"Mac in made by Apple",
		"Windows is made Microsoft",
		"David Filo & Jeffry Yang developed google",
		"Ray Tomlinson sent the first email",
		"Google is the only internet search engine",
		"Compact discs hold 1,000 minutes of music",
		"The average power (in watts) used by a 20 to 25 inch color tv is 70 - 100 watts",
		"the headquarters of intel is located in japan",
		"Spam email is a myth",
		"Hoverboards have been burtsing into flames because of faulty lithium batteries",
		"Stereolithography is a type of 3D printing technoology",
		"There are only 1 million mobile subscribers within the United States",
		"Approximently 350 million snapchats are sent world wide every day",
		"The first mouse was invented by Douglas Engelbart",
		"Approximately 3 million cell phones are sold everyday",
		"150 out of every 1000 computers are infected with spam",
		"since 2008, DVD has out sold video games",
		"HTC's dream was the first Android phone",
		"the first ever cell phone weighed about 2 lbs",
		"The first electronic computer ENIAC weighed more than 27 tons and took up 1800 square feet",
		"90\% of the world�s currency is physical money.  The other 10% is on computers",
		"\"Typewriter\" is the longest word that you can write using the letters only on one row of a keyboard",
		"The first computer mouse was made of wood",
		"There are less than 5000 new computer viruses released every month",
		"50\% of Wikipedia vandalism is caught by a group of computer programs with more than 90% accuracy",
		"If a computer was as powerful as a human brain, it would be able to execute 38,000-trillion operations a second",
		"The password for nuclear missiles of the US was 00000000 for 8 years",
		"70\% of virus writers are said to work under contract for the CIA",
		"ASCII values are a series of 8 numbers between 1-3" };

	int random_x;
	questionNumber = random_x;
	Q[questionNumber];

	if () {
		return true;
	}
	else if() {
		return false;
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
		}
		if (flag == false) {
			double weight = 0; //the weight of each problem.
			int inputVal = 0; //For the user to choose either 10 or 20 question.
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
			string Q[100];
			srand(time(0));
			while (m < inputVal) {
				int random_x = rand() % 101;
				Unique_Question(questionNumber);

				if (bool Unique_Question = true) {
					cout << Q[questionNumber];
					string questionAns = " ";
					cin >> questionAns;
					questionAns = to_upper(questionAns);
					while (questionAns != "TRUE" || questionAns != "FALSE") {
						if (questionAns == "T") {
							"TRUE" = "T";
						}
						else if (questionAns == "F") {
							"FALSE" = "F";
						}
						else if (questionAns != "F" || questionAns != "T") {
							cout << "Please re-enter your answer with either true or false.\n";
							cin >> questionAns;
						}
					}
					int questionS[questionNumber];
					questionS[questionNumber] = questionAns;
					m++;
				}

				//print out there answers and the correct answer
				//print out the time it took
				//print out their score






			}
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
		
	}



		
		cout << "\nProgram Ended\n";
		system("pause");
		return 0;
	}