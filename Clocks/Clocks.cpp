/* Nicholas Boodoo
 * Project One
 * CS 210
 * 11/14/2021
*/

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

//function that adds hour to clocks
void AddHour(int& standardClockHour1, int& standardClockHour2, int& militaryClockHour1, int&
militaryClockHour2, string& ampm) {

	if (standardClockHour2 < 10) {
		standardClockHour2 = standardClockHour2 + 1;
	}
	if (standardClockHour2 == 10) {
		standardClockHour1 = 1;
		standardClockHour2 = 0;
	}
	if (standardClockHour1 == 1 && standardClockHour2 == 3) {
		standardClockHour1 = 0;
		standardClockHour2 = 1;
	}
	if (militaryClockHour2 < 10) {
		militaryClockHour2 = militaryClockHour2 + 1;

	}
	if (militaryClockHour1 == 1 && militaryClockHour2 == 10) {
		militaryClockHour1 = 2;
		militaryClockHour2 = 0;
	}
	if (militaryClockHour2 == 10) {
		militaryClockHour2 = 0;
		militaryClockHour1 = 1;
	}
	if (militaryClockHour1 == 2 && militaryClockHour2 == 4) {
		militaryClockHour1 = 0;
		militaryClockHour2 = 0;
	}
}
//function to adds minute to clocks
void AddMinute(int& min1, int& min2, int& standardClockHour1, int&
standardClockHour2, int& militaryClockHour1, int& militaryClockHour2, string& ampm) {

	if (min2 < 10) {
		min2 = min2 + 1;
	}
	if (min1 == 5 && min2 == 10) {
		min1 = 0;
		min2 = 0;
		if (standardClockHour2 < 10) {
			standardClockHour2 = standardClockHour2 + 1;
		}
		if (standardClockHour2 == 10) {
			standardClockHour1 = 1;
			standardClockHour2 = 0;
		}
		if (standardClockHour1 == 1 && standardClockHour2 == 3) {
			standardClockHour1 = 0;
			standardClockHour2 = 1;
		}
		if (militaryClockHour2 < 10) {
			militaryClockHour2 = militaryClockHour2 + 1;
		}
		if (militaryClockHour1 == 1 && militaryClockHour2 == 10) {
			militaryClockHour1 = 2;
			militaryClockHour2 = 0;
		}
		if (militaryClockHour2 == 10) {
			militaryClockHour2 = 0;
			militaryClockHour1 = 1;
		}
		if (militaryClockHour1 == 2 && militaryClockHour2 == 4) {
			militaryClockHour1 = 0;
			militaryClockHour2 = 0;
		}
	}
	if (min1 == 4 && min2 == 10) {
		min1 = 5;
		min2 = 0;
	}
	if (min1 == 3 && min2 == 10) {
		min1 = 4;
		min2 = 0;
	}
	if (min1 == 2 && min2 == 10) {
		min1 = 3;
		min2 = 0;
	}
	if (min1 == 1 && min2 == 10) {
		min1 = 2;
		min2 = 0;
	}
	if (min2 == 10) {
		min1 = 1;
		min2 = 0;
	}
}
//function to add a second
void AddSecond(int& sec1, int& sec2, int& min1, int& min2, int&
	standardClockHour1, int& standardClockHour2, int& militaryClockHour1, int& militaryClockHour2, string& ampm) {
	if (sec2 < 10) {
		sec2 = sec2 + 1;
	}
	if (sec1 == 5 && sec2 == 10) {
		sec1 = 0;
		sec2 = 0;
		if (min2 < 10) {
			min2 = min2 + 1;
		}
		if (min1 == 5 && min2 == 10) {
			min1 = 0;
			min2 = 0;
			if (standardClockHour2 < 10) {
				standardClockHour2 = standardClockHour2 + 1;
			}
			if (standardClockHour2 == 10) {
				standardClockHour1 = 1;
				standardClockHour2 = 0;
			}
			if (standardClockHour1 == 1 && standardClockHour2 == 3) {
				standardClockHour1 = 0;
				standardClockHour2 = 1;
			}
			if (militaryClockHour2 < 10) {
				militaryClockHour2 = militaryClockHour2 + 1;
			}
			if (militaryClockHour1 == 1 && militaryClockHour2 == 10) {
				militaryClockHour1 = 2;
				militaryClockHour2 = 0;
			}
			if (militaryClockHour2 == 10) {
				militaryClockHour2 = 0;
				militaryClockHour1 = 1;
			}
			if (militaryClockHour1 == 2 && militaryClockHour2 == 4) {
				militaryClockHour1 = 0;
				militaryClockHour2 = 0;
			}
		}
		if (min1 == 4 && min2 == 10) {
			min1 = 5;
			min2 = 0;
		}
		if (min1 == 3 && min2 == 10) {
			min1 = 4;
			min2 = 0;
		}
		if (min1 == 2 && min2 == 10) {
			min1 = 3;
			min2 = 0;
		}
		if (min1 == 1 && min2 == 10) {
			min1 = 2;
			min2 = 0;
		}
		if (min2 == 10) {
			min1 = 1;
			min2 = 0;
		}
	}
	if (sec1 == 4 && sec2 == 10) {
		sec1 = 5;
		sec2 = 0;
	}
	if (sec1 == 3 && sec2 == 10) {
		sec1 = 4;
		sec2 = 0;
	}
	if (sec1 == 2 && sec2 == 10) {
		sec1 = 3;
		sec2 = 0;
	}
	if (sec1 == 1 && sec2 == 10) {
		sec1 = 2;
		sec2 = 0;
	}
	if (sec2 == 10) {
		sec1 = 1;
		sec2 = 0;
	}
}
int main() {
	//declare clock variables
	int userInput;
	string options;
	int standardClockHour1 = 1;
	int standardClockHour2 = 2;
	int militaryClockHour1 = 0;
	int militaryClockHour2 = 0;
	int min1 = 5;
	int min2 = 9;
	int sec1 = 5;
	int sec2 = 9;
	char clockColon1 = ':';
	char clockColon2 = ':';
	string timeOfDay = "AM ";
	system("CLS");

	//output clocks to screen
	cout << "Standard Clock\t" << "Military Clock" << endl;
	cout << standardClockHour1 << standardClockHour2 << clockColon1 << min1 << min2 << clockColon2 << sec1 << sec2 << " " << timeOfDay << "    " <<
		militaryClockHour1 << militaryClockHour2 << clockColon1 << min1 << min2 << clockColon2 << sec1 << sec2 << endl;

	//guide user to access the menu
	cout << "O = Options" << endl;
	cout << endl;

	do {
		cin >> options;
		if (options == "O" || "o") {
			//options menu
			cout << "\t\t1-Add One Hour" << endl;
			cout << "\t\t2-Add One Minute" << endl;
			cout << "\t\t3-Add One Second" << endl;
			cout << "\t\t4-Exit Program" << endl;
			
			//switch statement to allow user to execute menu options
			cin >> userInput;
			switch (userInput) {
			case 1:
				//call function to add hour to clocks
				AddHour(standardClockHour1, standardClockHour2, militaryClockHour1,
					militaryClockHour2, timeOfDay);
				
				cout << "Standard Clock\t" << "Military Clock" << endl;
					cout << standardClockHour1 << standardClockHour2 << clockColon1 << min1 << min2 << clockColon2 << sec1 << sec2 << " "
					<< timeOfDay << militaryClockHour1 << militaryClockHour2
					<< clockColon1 << min1 << min2 << clockColon2 << sec1 << sec2 << endl;
				
				cout << endl;
				break;
			case 2:
				//call function to add minute to clocks
				AddMinute(min1, min2, standardClockHour1,
					standardClockHour2, militaryClockHour1, militaryClockHour2, timeOfDay);
				
				cout << "Standard Clock\t" << "Military Clock" << endl;
					cout << standardClockHour1 << standardClockHour2 << clockColon1 << min1 << min2 << clockColon2 << sec1 << sec2 << " " << timeOfDay << " \t"
					<< militaryClockHour1 << militaryClockHour2
					<< clockColon1 << min1 << min2 << clockColon2 << sec1 << sec2 << endl;
				
				cout << endl;
				break;
			case 3:
				//call function to add second to clocks
				AddSecond(sec1, sec2, min1, min2,
					standardClockHour1, standardClockHour2, militaryClockHour1, militaryClockHour2, timeOfDay);
				
				cout << "Standard Clock\t" << "Military Clock" << endl;
					cout << standardClockHour1 << standardClockHour2 << clockColon1 << min1 << min2 << clockColon2 << sec1 << sec2 << " "
					<< timeOfDay << militaryClockHour1 << militaryClockHour2 << clockColon1 << min1 << min2 << clockColon2 << sec1 << sec2 << endl;
				
				cout << endl;
				break;
			case 4:
				//exits the clock program
				return EXIT_SUCCESS;
				break;
			default:
				break;
			}
		}
		else {
			return EXIT_SUCCESS;
		}
	} while (options != "q");
	return 0;
}
