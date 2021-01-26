#include <iostream>
#include <string>
using namespace std;
class student
{
private:
	int rollnumber;
	string studentname;
	int marks;
	int markoop;
	int markpm;
	int markis;
	char grade_number;
public:
	student()
	{
		int rollnumber = 0;
		string studentname = "sandy";
		int marks = 20;
		int markoop = 30;
		int markpm = 40;
		int markis = 50;
		char grade = 'A';
	}
	void setmarkis(int c)
	{
		markis = c;
	}
	int getmarkis()
	{
		return markis;
	}
	void setmarkpm(int a)
	{
		markpm = a;
	}
	int getmarkpm()
	{
		return markpm;
	}
	void setmarkoop(int b)
	{
		markoop = b;
	}
	int getmarkoop()
	{
		return markoop;
	}
	void setroll(int x)
	{
		rollnumber = x;
	}
	int getroll()
	{
		return rollnumber;
	}
	void setname(string n)
	{
		studentname = n;
	}
	string getname()
	{
		return studentname;
	}
	void setmarks(int m)
	{
		marks = m;
	}
	int getmarks()
	{
		return marks;
	}
	void setgrade(char y)
	{
		grade_number = y;
	}
	char getgrade()
	{
		return grade_number;
	}
};
student p[10];

void mainmenu()
{
	cout << "1- result menu " << endl;
	cout << "2-entry/edit menu " << endl;
	cout << "3- exit " << endl;
	cout << "please select your option (1-3) " << endl;
}
void resultmenu()
{
	cout << "1- class result " << endl;
	cout << "2- studentt report card " << endl;
	cout << "3- back to main menu " << endl;
	cout << " enter a choice (1/2/3) " << endl;
	cout << endl;
	cout << endl;
}
bool find(student a[10], string name)
{
	for (int i = 0; i<10; i++){
		if (a[i].getname() == name){
			return true;
		}
	}
	return false;
}

void create()
{
	student student_new = student();
	cout << "enter the student roll number:";
	int x;
	cin >> x;
	student_new.setroll(x);
	student_new.getroll();
	cout << "enter the student name:";
	string n;
	cin >> n;
	student_new.setname(n);
	student_new.getname();
	cout << "enter your mark in MATH:";
	int m;
	cin >> m;
	student_new.setmarks(m);
	student_new.getmarks();
	cout << "enter your mark in OOP:";
	int b;
	cin >> b;
	student_new.setmarkoop(b);
	student_new.getmarkoop();
	cout << "enter your mark in PROJECT MANAGEMENT:";
	int a;
	cin >> a;
	student_new.setmarkpm(a);
	student_new.getmarkpm();
	cout << "enter your grade in INFORMATION SYSTEM:";
	int r;
	cin >> r;
	student_new.setmarkis(r);
	student_new.getmarkis();
	cout << "enter grade number :";
	char y;
	cin >> y;
	student_new.setgrade(y);
	student_new.getgrade();
	for (int i = 0; i < 10; i++)
	{
		if (p[i].getroll() == 0)
		{
			p[i] = student_new;
			break;
		}
	}
	cout << "     __created Successfully__" << endl;
	cout << endl;
	cout << endl;
}
void display()
{
	cout << "   (DISPLAY ALL RECORD)   " << endl;
	for (int i = 0; i < 10; i++) {
		if (p[i].getroll() > 0)
		{
			cout << "The roll number of student  :" << p[i].getroll() << endl;
			cout << "Name of student             :" << p[i].getname() << endl;
			cout << "Marks of MATH               :" << p[i].getmarks() << endl;
			cout << "Marks of OOP                :" << p[i].getmarkoop() << endl;
			cout << "Marks of PROJECT MANAGEMENT :" << p[i].getmarkpm() << endl;
			cout << "Marks of INFORMATION SYSTEM :" << p[i].getmarkis() << endl;
			cout << "The grade number            :" << p[i].getgrade() << endl;
			cout << " ----------------------------------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
	}
}
void delete_roll(int roll) {
	cout << " ((ENTER ROLL NUMBER TO BE DELETE))" << endl;
	cin >> roll;
	for (int i = 0; i<10; i++)
	{
		if (p[i].getroll() == roll) {
			p[i].setroll(0);
			p[i].getroll();
			p[i].setname(" ");
			p[i].setmarkis(0);
			p[i].setmarkoop(0);
			p[i].setmarks(0);
			p[i].setmarkpm(0);
			p[i].setgrade(' ');
			cout << endl;
			cout << "_    delete success   __" << endl;
			cout << endl;

		}
	}
}
void modify_students()
{
	int u;
	cout << "   PLEASE ENTER THE ROLL NUMBER " << endl;
	cin >> u;
	for (int i = 0; i < 10; i++)
	{
		if (p[i].getroll() == u)
		{
			cout << "If you need to change the roll number press 1" << endl << "If you need to change the name press 2" << endl << "If you need to change the mark press 3" << endl << "If you need to change the grade press 4" << endl;
			int b;
			cin >> b;
			if (b == 1)
			{
				cout << "the new roll:" << endl;
				int x;
				cin >> x;
				p[i].setroll(x);
				p[i].getroll();
				cout << "            DONE" << endl;
			}
			else if (b == 2)
			{
				cout << "the new name :" << endl;
				string m;
				cin >> m;
				p[i].setname(m);
				p[i].getname();
				cout << "           DONE" << endl;
			}
			else if (b == 3)
			{
				cout << "if you need to change the mark of math press 1" << endl << "if you need to change the mark of OOP press 2" << endl << "if you need to change the mark of PROJECT MANAGEMENT press 3" << endl << "if you need to change the mark of INFORMATION SYSTEM press 4" << endl;
				int z;
				cin >> z;
				if (z == 1)
				{
					cout << "the new mark of MATH:" << endl;
					int a;
					cin >> b;
					p[i].setmarks(b);
					p[i].getmarks();
					cout << "          DONE" << endl;
				}
				else if (z == 2)
				{
					cout << "the new mark of OOP:" << endl;
					int s;
					cin >> s;
					p[i].setmarkoop(s);
					p[i].getmarkoop();
					cout << "           DONE" << endl;
				}
				else if (z == 3)
				{
					cout << "the new mark of PROJECT MANAGEMENT:" << endl;
					int y;
					cin >> y;
					p[i].setmarkpm(y);
					p[i].getmarkpm();
					cout << "           DONE" << endl;
				}
				else if (z == 4)
				{
					cout << "the new mark of INFORMATION SYSTEM:" << endl;
					int d;
					cin >> d;
					p[i].setmarkis(d);
					p[i].getmarkis();
					cout << "           DONE" << endl;
				}
				else
				{
					cout << "TRY AGAIN" << endl;
				}
			}
			else if (b == 4)
			{
				cout << "the new grade:" << endl;
				char n;
				cin >> n;
				p[i].setgrade(n);
				p[i].getgrade();
				cout << "          DONE" << endl;
			}
			else
			{
				cout << "SORRY CAN'T FIND WHAT YOU NEED TRY AGAIN" << endl;
			}
		}
	}
}
void search(student a[10], string name) {
	for (int i = 0; i < 10; i++)
	{
		if (a[i].getname() == name) {
			{ cout << "the roll number of student  :" << a[i].getroll() << endl;
			cout << "Name of student               :" << a[i].getname() << endl;
			cout << "Mark of MATH                  :" << a[i].getmarks() << endl;
			cout << "Mark of OOP                   :" << a[i].getmarkoop() << endl;
			cout << "Mark of PROJECT MANAGEMENT    :" << a[i].getmarkpm() << endl;
			cout << "Mark of INFORMATION SYSTEM    :" << a[i].getmarkis() << endl;
			cout << "the grade number              :" << a[i].getgrade() << endl;
			cout << " ----------------------------------------------------------------" << endl;
			cout << endl;
			cout << endl; }
		}
	}
	if (find(a, name) == false){
		cout << endl;
		cout << "__Can't find what you search for ____" << endl;
		cout << endl;
	}


}
void class_result()
{
	cout << "   (ALL STUDENT RESULT)   " << endl;
	for (int i = 0; i < 10; i++) {
		if (p[i].getroll() > 0)
		{
			cout << "ROLL number               :" << p[i].getroll() << endl;
			cout << "__" << endl;
			cout << "NAME of student            :" << p[i].getname() << endl;;
			cout << "__" << endl;
			cout << "MARK OF MATH               :" << p[i].getmarks() << endl;;
			cout << "__" << endl;
			cout << "MARK OF OOP                :" << p[i].getmarkoop() << endl;;
			cout << "__" << endl;
			cout << "MARK OF PROJECT MANAGEMENT :" << p[i].getmarkpm() << endl;;
			cout << "__" << endl;
			cout << "MARK OF INFORMATION SYSTEM :" << p[i].getmarkis() << endl;;
			cout << "__" << endl;
			cout << "the grade number           :" << p[i].getgrade() << endl;
			cout << "   " << endl;
			cout << "==============================================================================" << endl;
			cout << endl;
		}
	}
}
void  report(student a[10], int roll)
{
	for (int i = 0; i < 10; i++)
	{
		if (a[i].getroll() == roll)
		{
			cout << "ROLL number of the student :" << p[i].getroll() << endl;
			cout << "__" << endl;
			cout << "NAME of student            :" << p[i].getname() << endl;;
			cout << "__" << endl;
			cout << "MARK OF MATH               :" << p[i].getmarks() << endl;;
			cout << "__" << endl;
			cout << "MARK OF OOP                :" << p[i].getmarkoop() << endl;;
			cout << "__" << endl;
			cout << "MARK OF PROJECT MANAGEMENT :" << p[i].getmarkpm() << endl;;
			cout << "__" << endl;
			cout << "MARK OF INFORMATON SYSTEM  :" << p[i].getmarkis() << endl;;
			cout << "__" << endl;
			cout << "the grade number           :" << p[i].getgrade() << endl;
			cout << "   " << endl;
			cout << "==============================================================================" << endl;
			cout << endl;
			cout << endl;
		}
	}
}
void entrymenu()
{
	cout << "1- creat student record " << endl;
	cout << "2- display all students records " << endl;
	cout << "3- search student record " << endl;
	cout << "4- modify student record " << endl;
	cout << "5- delete student record " << endl;
	cout << "6- back to main menu " << endl;
	cout << "please enter your option (1-6) " << endl;
	cout << endl;
	cout << endl;
}
int main() {
	for (int i = 0; i < 10; i++) {
		p[i].setroll(0);
	}
	int x, y, z;
	string m;
	cout << "            STUDENT   " << endl;
	cout << " " << endl;
	cout << "          REPORT CARD " << endl;
	cout << " " << endl;
	cout << "             PROJECT     " << endl;
	cout << " " << endl;
	cout << "      made by : CON QUERS " << endl;
	cout << " " << endl;
	getline(cin, m);
	mainmenu();
	do {
		system("cls");
		mainmenu();
		cin >> x;
		cout << "you choose option " << x << endl;
		switch (x)
		{
		case 1:
			do {
				resultmenu();
				cin >> y;
				switch (y)
				{
				case 1:
					class_result();
					break;
				case 2:
					int b;
					cout << "enter the student roll" << endl;
					cin >> b;
					report(p, b);
					break;
				}
			} while (y != 3);
			break;
		case 2:do {
				   entrymenu();
				   cin >> z;
				   switch (z)
				   {
				   case 1:
					   create();
					   break;
				   case 2:
					   display();
					   break;
				   case 4:
					   modify_students();
					   break;
				   case 5:
					   delete_roll(x);
					   break;
				   case 3:
					   string g;
					   cout << " enter the student name" << endl;
					   cin >> g;
					   search(p, g);
					   break;
				   }
		} while (z != 6);
			break;
		}
	} while (x != 3);
	system("pause");
}