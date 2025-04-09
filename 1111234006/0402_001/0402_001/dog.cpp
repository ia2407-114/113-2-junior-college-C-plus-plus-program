/*dog.cpp 0402題目1. */
#include <iostream>   
#include <string>   
#include "Dog.h"      
using namespace std;  

// Dog 類別的建構子：初始化狗的名稱與年齡
Dog::Dog(string Name, int Age)
{
	name = Name;   // 將傳進來的名稱設定給物件的成員變數 name
	age = Age;     // 將傳進來的年齡設定給成員變數 age
}

// setInfo：設定狗的名稱與年齡
void Dog::setInfo(string Name, int Age)
{
	// 如果年齡在 0 到 20 歲之間才設定，否則顯示錯誤訊息
	if (Age > 0 && Age < 20) {
		name = Name;
		age = Age;
	}
	else {
		cout << "請輸入20歲以內" << endl;  // 年齡不合法，提示錯誤
	}

	// 如果名稱長度不超過 10，就設定名字
	if (Name.size() <= 10)
	{
		name = Name;
	}
	// 如果名稱長度是 0，顯示「無效」
	else if (Name.size() == 0)
	{
		cout << "無效" << endl;
	}
	// 如果名稱太長，截取前 10 個字元
	else
		name = Name.substr(0, 10);  // substr(0, 10)：(從哪開始，取幾個字)
}

// getName：取得狗的名稱（回傳 name）
string Dog::getName() const
{
	return name;
}

// getAge：取得狗的年齡（回傳 age）
int Dog::getAge() const
{
	return age;
}

// displayMessage：顯示狗狗的名稱與年齡
void Dog::displayMessage() const
{
	cout << "狗名稱:" << getName() << endl   // 呼叫 getName 顯示名稱
		 << "狗年齡:" << getAge() << endl;   // 呼叫 getAge 顯示年齡
}
