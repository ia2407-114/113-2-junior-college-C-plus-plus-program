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

void bmicompute(struct employee[], int);

int main()
{
    
    string c;
    int a, b;
    cout << "姓名" << "身高" << "體重";
    cin >> c >> a >> b;
    employee member[1] = { c,a,b };


    bmicompute(member, 1);

    return 0;
}

void bmicompute(struct employee data[], int size)
{
    int h ;
    float bmi;
    enum bmii
    {
        slim,
        normal,
        heavy,
        fat,
        toofat,
        fuckingfat,
    };
    int i;
    for (i = 0; i < size; i++)
    {

        //BMI：身體質量指數
        bmi = data[i].weight / pow(data[i].height / 100.0, 2);
        cout << data[i].name << "的體重=" << data[i].weight
            << "\tBMI=" << bmi << '\t';


    }
    bmi = data[1].weight / pow(data[1].height / 100.0, 2);

    for (i = 0; i < size; i++)
    {
        float bmi; //BMI：身體質量指數
        bmi = data[i].weight / pow(data[i].height / 100.0, 2);
        

        if (bmi < 18.5)
            h = 0;
        else if (bmi < 24)
            h = 1;
        else if (bmi < 27)
            h = 2;
        else if (bmi < 30)
            h = 3;
        else if (bmi < 35)
            h = 4;
        else
            h = 5;
            switch (h)
        {
    case slim:
        cout << "體重過輕\n";
        break;
    case normal:
        cout << "體重在正常範圍\n";
        break;
    case heavy:
        cout << "體重過重\n";
        break;
    case fat:
        cout << "體重中度肥胖\n";
        break;
    case toofat:
        cout << "體重重度肥胖\n";
        break;
    case fuckingfat:
        cout << "肥豬";
        break;
    default:
        cout << "noob";

        }
    }

}