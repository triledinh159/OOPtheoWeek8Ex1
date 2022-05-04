#include "People.h"
void SALARY::inputDetail() {
	cout << nSalary++ << ".\n" << "Nhap ten: ";
	cin.ignore();
	getline(cin,namePer);
	cout << "\nNhap ngay thang nam sinh: ";
	cin >> Day >> Month >> Year;
	cout << "\nChon nghe nghiep: " << "\n1. Nhan vien van phong." << "\n2. Nhan vien san xuat." << "\nChon 1 so: ";
	cin >> jobRole;
}
void officeStaff::insertDay() {
	cout << "\nNhap so ngay lam viec: ";
	cin >> workDay;
}
void SALARY::ocalcSalary() {
	SALARY::eachSalary = workDay * 100000;
}
void productionWorker::insertDetail() {
	cout << "\nNhap luong co ban: ";
	cin >> basicSalary;
	cout << "Nhap san pham da lam ra: ";
	cin >> product;
}
void SALARY::pcalcSalary() {
	eachSalary = basicSalary + product * 5000;
}
void SALARY::Output() {
	if (jobRole == 1) {
		cout << "\nTen: " << namePer << "  Nghe nghiep: Nhan vien van phong \tNgay thang nam sinh: " <<
			Day << "/" << Month << "/" << Year << " Luong: " << eachSalary;
	}
	if (jobRole == 2) {
		cout << "\nTen: " << namePer << "  Nghe nghiep: Nhan vien san xuat \tNgay thang nam sinh: " <<
			Day << "/" << Month << "/" << Year << " Luong: " << eachSalary;
	}
}

void SALARY::theHighestSalary(SALARY a, int& max, int& x,int i) {
	if (a.eachSalary > max) {
		max = a.eachSalary;
		x = i;
	}
	
}
void SALARY::theLowestSalary(SALARY a, int& min, int& y,int i) {
	if (a.eachSalary < min) {
		min = a.eachSalary;
		y=i;
	}
}
	