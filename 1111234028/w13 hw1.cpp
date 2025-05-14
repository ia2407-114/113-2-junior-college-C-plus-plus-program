#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct employee
{
	string name;
	int  height;
	int  weight;
};

int bmicompute(struct employee[], int);

enum {
	slim,
	normal,
	heavy,
	fat,
	toofat,
};

int main()
{
	employee member[3];

	int i;
	for (i = 0; i < 3; i++)
	{
		cout << "姓名	身高	體重\n";
		cin >> member[i].name >> member[i].height >> member[i].weight;
	}


	for (i = 0; i < 3; i++)
	{

		switch (bmicompute(member, i))
		{
		case slim:
			cout << "體重過輕\n";
			break;
		case normal:
			cout << "體重正常\n";
			break;
		case  heavy:
			cout << "體重過重\n";
			break;
		case fat:
			cout << "胖子\n";
			break;
		case toofat:
			cout << "M1艾布蘭主力戰車";
			break;
		}
	}
}

int bmicompute(struct employee data[], int i)
{

	int H;

	float bmi; //BMI：身體質量指數
	bmi = data[i].weight / pow(data[i].height / 100.0, 2);
	cout << data[i].name << "的體重=" << data[i].weight
		<< "\tBMI=" << bmi << '\t';

	if (bmi < 18.5)
		return 0;
	else if (bmi < 24)
		return 1;
	else if (bmi < 27)
		return 2;
	else if (bmi < 30)
		return 3;
	else if (bmi < 35)
		return 4;

}
