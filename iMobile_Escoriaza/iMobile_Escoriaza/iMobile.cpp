#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double dataUsed, totalAmountDue;

	const double planA = 39.99;
	const double planB = 59.99;
	const double planC = 69.99;
	const double extradataA = 10.0;
	const double extradataB = 5.0;

	char planChoice;

	cout << "iMobile Bill Calculator..." << endl;
	cout << endl;

	cout << "Select a Subscription Package: " << endl;

	// Menu Starts Here
	cout << "1. Package A" << endl;
	cout << "2. Package B" << endl;
	cout << "3. Package C" << endl;
	cout << endl;

	// Choose Package
	cout << "Package: ";
	cin >> planChoice;

	switch (planChoice) {
	case '1':
			cout << "How many gigabytes were used: " << endl;
			cin >> dataUsed;

			if (dataUsed < 0) {
				cout << "Error ... invalid gigabytes entered. Try again.";
					return 1; // Exit Program
			}

			totalAmountDue = planA;
			if (dataUsed > 4.0) {
				totalAmountDue += (dataUsed - 4.0) * extradataA;
			}
			break;

		case '2':
			cout << "How many gigabytes were used: " << endl;
			cin >> dataUsed;

			if (dataUsed < 0) {
				cout << "Error ... invalid gigabytes entered. Try again.";
					return 1; // Exit Program
			}

			totalAmountDue = planB;
			if (dataUsed > 8.0) {
				totalAmountDue += (dataUsed - 8.0) * extradataB;
			}
			break;

		case '3':

			totalAmountDue = planC;
			break;

		// Error code incase wrong package is added
		default:
			cout << "Invalid plan choice. Please select 1.,2., 3." << endl;
			return 1;  // Exit program with an error code
	}

	// Sets the total amount to a dollar amount
	cout << fixed << setprecision(2);

	// Shows total amount due
	cout << "Total amount due: $" << totalAmountDue << endl;


	return 0;
}