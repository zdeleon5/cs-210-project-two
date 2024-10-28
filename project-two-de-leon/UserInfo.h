#ifndef USERINFO_H
#define USERINFO_H

class UserInfo {
  // define attributes
private:
  double initialDeposit;
  double monthlyDeposit;
  double annualInterest;
  int years;

  // define constructor, setters, and getters
public:
  UserInfo(double initialDeposit, double monthlyDeposit, double annualInterest,
           int years);
  void setInitialDeposit(double initialDeposit);
  void setMonthlyDeposit(double monthlyDeposit);
  void setAnnualInterest(double annualInterest);
  void setYears(int years);
  double getInitialDeposit() const;
  double getMonthlyDeposit() const;
  double getAnnualInterest() const;
  int getYears() const;
};

#endif