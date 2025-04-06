/*0319_002題目2. 請根據上面兩個程式碼，再結合第一題的功能，修改成印出初始年齡、修改年齡(但是需要判斷成績必須介於0~99)、
列印出新的年齡。再建立另外兩個成員函數，分別負責取得資料性別與修改性別，
進而能夠印出初始性別、修改性別(需要利用第一個副程式的內容判斷是否為大寫英文字母'M'or'F')、列印出新的性別。*/

#include <iostream>
#include <cctype> // 用於字元判斷的標頭檔
using namespace std;

// GradeBook 類別定義
class GradeBook
{
private:
    int age = 17;      // 學生的年齡，初始值為 17
    char gender = 'M'; // 學生的性別，初始值為 'M' (男)

public:
    // 設定年齡的函數，只有當年齡在 0 到 99 之間才有效
    void setAge(int a) {
        if (a >= 0 && a <= 99) { // 檢查年齡是否有效
            age = a; // 設定新的年齡
        }
        else {
            cout << "年齡輸入錯誤，請輸入 0 到 99 之間的數字。" << endl; 
            //如果 a 超出範圍（小於 0 或大於 99），則執行 else 內的程式碼。
        }
    }

    // 取得年齡的函數
    int getAge() const {
        return age; // 回傳當前的年齡
    }

    // 設定性別的函數，只有 'M' 或 'F' 兩種有效選項
    void setGender(char g) {
        if (g == 'M' || g == 'F') { // 檢查性別是否為有效字元
            gender = g; // 設定新的性別
        }
        else {
            cout << "性別輸入錯誤，只接受 'M' 或 'F'。" << endl; // 顯示錯誤訊息
        }
    }

    // 取得性別的函數
    char getGender() const {
        return gender; // 回傳當前的性別
    }
};

int main() {
    GradeBook myGradeBook; // 創建 GradeBook 物件

    // 顯示初始年齡
    cout << "初始年齡: " << myGradeBook.getAge() << endl;

    // 輸入新的年齡並進行更新
    int newAge;
    cout << "\n請輸入新的年齡 (0-99): ";
    cin >> newAge; // 將使用者輸入的數值存入 newAge 變數
    myGradeBook.setAge(newAge); // 更新年齡
    cout << "更新後的年齡: " << myGradeBook.getAge() << endl; // 顯示更新後的年齡

    // 顯示初始性別
    cout << "\n初始性別: " << myGradeBook.getGender() << endl;

    // 輸入新的性別並進行更新
    char newGender;
    cout << "\n請輸入新的性別 ('M' 或 'F'): ";
    cin >> newGender; // 讀取使用者輸入的性別
    myGradeBook.setGender(newGender); // 更新性別
    cout << "更新後的性別: " << myGradeBook.getGender() << endl; // 顯示更新後的性別

    return 0; // 程式結束
}
