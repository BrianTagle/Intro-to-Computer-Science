#include <iostream>
using namespace std;   // pp. 38-39 in Savitch 6/e explains this line

int main()
{
	int numSurveyed;
	int numApprove;
	int numDisapprove;

	cout << "How many people were surveyed? ";
	cin >> numSurveyed;
	cout << "How many of them approve of the way the president is handling his job? ";
	cin >> numApprove;
	cout << "How many of them disapprove of the way the president is handling his job? ";
	cin >> numDisapprove;

	double pctApprove = 100.0 * numApprove / numSurveyed;
	double pctDisapprove = 100.0 * numDisapprove / numSurveyed;

	cout.setf(ios::fixed);       // see pp. 32-33 in Savitch 6/e
	cout.precision(1);

	cout << endl;
	cout << pctApprove << "% say they disapprove." << endl;
	cout << pctDisapprove << "% say they approve." << endl;

	if (numApprove > numDisapprove)
		cout << "More people approve than disapprove." << endl;
	else
		cout << "More people disapprove than approve." << endl;
}