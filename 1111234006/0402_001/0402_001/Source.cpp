/*Source 0402題目1.
利用上一次的題目2，將寵物類別與主程式分離，
並且將類別的介面與實作在分離成兩個檔案，
並且加以修改，當寵物名字長度超過10字元時，
則擷取前10個字元當作他的姓名，最後將寵物的姓名印出。*/
#include <iostream>   // 引入輸入輸出功能（cout、cin）
#include <string>     // 引入字串功能（string）
#include "Dog.h"      // 引入自訂的 Dog 類別標頭檔
using namespace std;  // 使用標準命名空間，讓我們可以直接寫 cout 而不用 std::cout

int main()
{
    string dogName;   // 宣告狗的名稱
    int age;          // 宣告狗的年齡

    // 建立一個 Dog 類別的物件 myDog，初始名稱為 "Eva"，年齡為 17
    Dog myDog("Eva", 17);

    // 顯示預設狗狗的資料
    cout << "預設" << endl;
    myDog.displayMessage();  // 呼叫 displayMessage 函式，顯示目前的狗名和年齡

    // 提示使用者輸入新的狗的名稱
    cout << "\n請輸入狗的名稱:";
    getline(cin, dogName);   // 使用 getline 讀取一整行字串（包含空白）

    // 提示使用者輸入狗的年齡
    cout << "\n請輸入狗的年齡:";
    cin >> age;  // 從鍵盤讀取一個整數，並儲存到 age 變數中

    // 使用 setInfo 函式將使用者輸入的新資料更新到 myDog 物件中
    myDog.setInfo(dogName, age);

    cout << endl; // 換一行

    // 再次呼叫 displayMessage，顯示更新後的狗狗資料
    myDog.displayMessage();
}
