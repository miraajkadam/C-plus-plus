/*

if (expr)
	if (expr)
		statement1;
	else <-- Dangling else
		statement2;

dangling else belongs to nearest 'if'

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	// int score {};
	// cout << "Enter your score on the exam (0 - 100): ";
	// cin >> score;
	// char grade {};
	// if (score >= 0 && score <= 100) {
	// 	if (score > 90)
	// 		grade = 'A';
	// 	else if (score > 80)
	// 		grade = 'B';
	// 	else if (score > 70)
	// 		grade = 'C';
	// 	else if (score > 60)
	// 		grade = 'D';
	// 	else  if (score > 50)
	// 		grade = 'E';
	// 	else 
	// 		grade = 'F';

	// 	cout << "Your grade is " << grade << endl;
	// 	if (grade == 'F') 
	// 		cout << "Sorry... You have Failed...!";
	// 	else 
	// 		cout << "You passed! Congrats...!";
	// }	
	// else  {
	// 	cout << "Sorry, " << score << " is not in range";
	// }

	int length, width, height;
	cout << "Enter the dimensions of the package: ";
	cin >> length >> width >> height;

	if (length > 10 || width > 10 || height > 10) 
		cout << "Sorry, We cannot ship the package";
	else {
		const double  base_cost = 2.50;
		double cost = base_cost;

		if (length * width * height > 500)
			cost += 0.25 * base_cost;

		else if (length * width * height > 100) 
			cost += 0.1 * base_cost;
		

		cout << fixed << setprecision(2) << "Cost of shipping will be:: " << cost << endl;
	} 

	return 0;	
}