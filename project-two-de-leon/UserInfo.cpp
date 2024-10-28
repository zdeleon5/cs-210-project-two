#include "UserInfo.h"

// all-args constructor
UserInfo::UserInfo(double initialDeposit, double monthlyDeposit,
                   double annualInterest, int years) {
  this->initialDeposit = initialDeposit;
  this->monthlyDeposit = monthlyDeposit;
  this->annualInterest = annualInterest;
  this->years = years;
}

// define getter
double UserInfo::getInitialDeposit() const { return initialDeposit; }

double UserInfo::getMonthlyDeposit() const { return monthlyDeposit; }

double UserInfo::getAnnualInterest() const { return annualInterest; }

int UserInfo::getYears() const { return years; }

// define setters
void UserInfo::setInitialDeposit(double initialDeposit) {
  this->initialDeposit = initialDeposit;
}

void UserInfo::setMonthlyDeposit(double monthlyDeposit) {
  this->monthlyDeposit = monthlyDeposit;
}

void UserInfo::setAnnualInterest(double annualInterest) {
  this->annualInterest = annualInterest;
}

void UserInfo::setYears(int years) { 
    this->years = years; 
}