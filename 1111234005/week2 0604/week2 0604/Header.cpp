#include <iostream>
#include"Header.h"
using namespace std;
    // 建構子
    square_2D::square_2D() {
        cout << "建立 square_2D 物件:\n";
        cout << "請輸入長: ";
        cin >> length;
        cout << "請輸入寬: ";
        cin >> width;
    }

    // 解構子
    square_2D::~square_2D() {
        cout << "銷毀 square_2D 物件\n";
    }

    // 顯示 2D 資料
    void square_2D::print_2D() {
        cout << "\n[長方形資料]\n";
        cout << "長: " << length << endl;
        cout << "寬: " << width << endl;
        cout << "面積: " << length * width << endl;
    }


    // 建構子
    rect_3D::rect_3D() {
        cout << "\n建立 rect_3D 物件:\n";
        cout << "請輸入高: ";
        cin >> height;
    }

    // 解構子
    rect_3D::~rect_3D() {
        cout << "銷毀 rect_3D 物件\n";
    }

    // 顯示 3D 資料
    void rect_3D::print_3D() {
        cout << "\n[長方體資料]\n";
        cout << "長: " << length << endl;
        cout << "寬: " << width << endl;
        cout << "高: " << height << endl;
        cout << "體積: " << length * width * height << endl;
    }
#pragma once
