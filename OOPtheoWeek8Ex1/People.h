#pragma once
#include <iostream>
#include <string>
using namespace std;

class officeStaff  {
protected:
	int workDay;
public:
	void insertDay();
	
};
class productionWorker  {
protected:
	int basicSalary;
	int product;
public:
	void insertDetail();
};
class SALARY: public officeStaff, public productionWorker{
protected:
	string namePer;
	int Day;
	int Month;
	int Year;
	int eachSalary;
public:
	static int nSalary;
	static int getNumber() {
		return nSalary;
	}
	void inputDetail();
	int jobRole;
	void pcalcSalary();
	void ocalcSalary();
	void Output();
	int Swap(SALARY& a, SALARY& b);
	void theHighestSalary(SALARY a,int& max, int &x,int i);
	void theLowestSalary(SALARY a, int& min, int& y,int i);
};
int SALARY::nSalary = 1;