//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//int main()
//{
//	float loan, YearlyRate, MonthlyRate, TotalAmount, Interest, Payments, MonthlyPayments, x;
//	cout << "Input Loan Amount: ";
//	cin >> loan;
//	cout << "Enter Yearly Rate of Interest: ";
//	cin >> YearlyRate;
//	cout << "Enter Number of Payments: ";
//	cin >> Payments;
//	MonthlyRate = YearlyRate / 12;
//	x = 1 + (MonthlyRate / 100);
//	x = pow(x, Payments);
//	MonthlyPayments = (((MonthlyRate/100) * x) / (x - 1));
//	MonthlyPayments = MonthlyPayments * loan;
//	TotalAmount = MonthlyPayments * Payments;
//	Interest = TotalAmount - loan;
//	cout << "Loan Amount: \$ " << loan << "\nMonthly Rate Interest: " << MonthlyRate << "% \nNumber of Payments: " << Payments << "\nMonthly Payments: \$ " << MonthlyPayments << "\nAmount Paid Back: \$ " << TotalAmount << "\nInterest Paid: \$ " << Interest;
//	return 0;
//}