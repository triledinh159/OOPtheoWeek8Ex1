#include "People.cpp"
int main() {
	int n,x=0,max=0,min,y=0;
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	SALARY* list = new SALARY[n];
	for (int i = 0; i < n; i++) {
		while (true) {
			list[i].inputDetail();
			while (list[i].jobRole != 1 && list[i].jobRole != 2) {
				cout << "Khong hop le. Vui long nhap lai \n";
				list[i].nSalary--;
				list[i].inputDetail();
			}
			break;
		}
		if (list[i].jobRole == 1) {
			list[i].insertDay();
			list[i].ocalcSalary();
		}
		if (list[i].jobRole == 2) {
			list[i].insertDetail();
			list[i].pcalcSalary();
		}
	}
	cout << "Danh sach nhan vien: \n";
	for (int i = 0; i < n; i++) list[i].Output();
	cout << "\n\n";
	for (int i= 0;i<n;i++)
		list[0].theHighestSalary(list[i], max, x,i);
	cout << "\nNhan vien co luong cao nhat: "; list[x].Output();
	min = max;
	for (int i = 0; i < n ; i++)
		list[0].theLowestSalary(list[i], min, y,i);
	cout << "\nNhan vien co luong thap nhat: "; list[y].Output();
}