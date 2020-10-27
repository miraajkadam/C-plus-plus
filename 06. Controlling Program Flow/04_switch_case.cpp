/*

switch (control_expression) {
	case expression_1: statement_1; break;
	case expression_2: statement_2; break;
	case expression_3: statement_3; break;
	.
	.
	.
	case expression_n: statement_n; break;
	default: statement_default; // executes if non of the cases executed
}

fall though - executing everycase if no break is used.

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	// char grade {};

	// cout << "Enter the letter grade you expect on the exam: ";
	// cin >> grade;

	// switch (grade) {
	// 	case 'a' :		
	// 	case 'A' : cout << "You need a 90 or above" << endl;
	// 		break;
	// 	case 'b':
	// 	case 'B': cout << "You need a 80 - 89" << endl;
	// 		break;
	// 	case 'c':
	// 	case 'C': cout << "You need 70 - 79" << endl;
	// 		break;
	// 	case 'd':
	// 	case 'D': cout << "You need 60 - 69" << endl;
	// 		break;
	// 	case 'e':
	// 	case 'E': cout << "You need 50 - 59" << endl;
	// 		break;
	// 	case 'f':
	// 	case 'F': {
	// 		char conf {};
	// 		cout << "Are you sure you want this grade? (Y / N)";
	// 		cin >> conf;

	// 		if (conf == 'Y' || conf == 'y') {
	// 			cout << "Ok I guess you didn't study";
	// 		}
	// 		else if (conf == 'n' || conf == 'N') {
	// 			cout << "Good Study...!";
	// 		}
	// 		else 
	// 			cout << "Illegal chocie";

	// 		break;
	// 	}
	// 	default: cout << "Not a valid grade...!";
	// }

	enum Direction {
		left, right, up, down
	};

	Direction heading {left};
	switch (heading) {
		case left: cout << "Going Left" << endl;
			break;
		case right: cout << "Going right" << endl;
			break;

		default: cout << "Going above???";
	}

	return 0;	
}