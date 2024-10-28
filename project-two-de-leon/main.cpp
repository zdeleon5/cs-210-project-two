#include "UserInfo.h"
#include <iomanip>
#include <iostream>

using namespace std;

// print menu header
void printHeader() {
  cout << "Month\tInitial\tMonthly\tTotal\tInterest\tClosing "
          "Balance"
       << endl;
}

// print monthly growth
void printInterestCalculations(UserInfo &userInfoRef) {
  double interestInDollars;
  // calc total months
  int month = userInfoRef.getYears() * 12;

  // limit to 2 decimal places
  cout << fixed << setprecision(2);

  for (int i = 1; i <= month; i++) {
    // calc total for start of month
    double total =
        userInfoRef.getInitialDeposit() + userInfoRef.getMonthlyDeposit();
    // calc interest for current month
    interestInDollars =
        (total) * ((userInfoRef.getAnnualInterest() / 100) / 12);

    // set final balance
    double closingBalance = total + interestInDollars;

    cout << i << "\t\t" << userInfoRef.getInitialDeposit() << "\t"
         << userInfoRef.getMonthlyDeposit() << "\t" << total << "\t "
         << interestInDollars << "\t\t" << closingBalance << endl;

    // rest initial deposit
    userInfoRef.setInitialDeposit(closingBalance);
  }
}

int main() {
  double initialDeposit, monthlyDeposit, annualInterest;
  int years;

  cout << "Enter initial deposit: ";
  cin >> initialDeposit;
  cout << "Enter monthly deposit: ";
  cin >> monthlyDeposit;
  cout << "Enter annual interest: ";
  cin >> annualInterest;
  cout << "Enter years: ";
  cin >> years;

  UserInfo userInfo(initialDeposit, monthlyDeposit, annualInterest, years);

  printHeader();

  printInterestCalculations(userInfo);

  return 0;
}