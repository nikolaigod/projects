
#include <iostream>
#include<string>
#include<fstream>
using namespace std;

class Student {
	string name;
	int math, sci, eng, lang2, pe;
	double avr;
	char grade;
public:
	void getdata();
	void showdata();
	void calculateGrade();
};

void Student::calculateGrade() {
	avr = (math + sci + eng + lang2 + pe) / 5;
	if (avr <= 6 && avr >= 5.5) {
		grade = 'A';
	}
	if (avr < 5.5 && avr >= 4.5) {
		grade = 'B';
	}
	if (avr < 4.5 && avr >= 3.5) {
		grade = 'C';
	}
	if (avr < 3.5 && avr >= 3) {
		grade = 'D';
	}
	if (avr < 3) {
		grade = 'F';
	}
	cout << "The student's grade is: " << grade << endl;

}

void Student::getdata() 
{
	cout << "Enter name " << endl;
	cin >> name;
	cout << "Enter math " << endl;
	cin >> math;
	cout << "Enter sci " << endl;
	cin >> sci;
	cout << "Enter eng " << endl;
	cin >> eng;
	cout << "Enter lang 2 " << endl;
	cin >> lang2;
	cout << "Enter pe " << endl;
	cin >> pe;
}

void Student::showdata()
{
	cout << "The student's grades are :" << endl;
	cout << name << endl;
	cout << "Math grade: " << endl;
	cout << math << endl;
	cout << "Science grade: " << endl;
	cout << sci << endl;
	cout << "English grade: " << endl;
	cout << eng << endl;
	cout << "Language 2: " << endl;
	cout << lang2 << endl;
	cout << "PE grade:" << endl;
	cout << pe << endl;


}
int main()
{
	Student students[5];

	for (int i = 0; i < 5; i++)
	{
		students[i].getdata();
		students[i].showdata();
		students[i].calculateGrade();
	}
	return 0;
}
