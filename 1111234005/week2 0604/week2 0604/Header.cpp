#include <iostream>
#include"Header.h"
using namespace std;
    // �غc�l
    square_2D::square_2D() {
        cout << "�إ� square_2D ����:\n";
        cout << "�п�J��: ";
        cin >> length;
        cout << "�п�J�e: ";
        cin >> width;
    }

    // �Ѻc�l
    square_2D::~square_2D() {
        cout << "�P�� square_2D ����\n";
    }

    // ��� 2D ���
    void square_2D::print_2D() {
        cout << "\n[����θ��]\n";
        cout << "��: " << length << endl;
        cout << "�e: " << width << endl;
        cout << "���n: " << length * width << endl;
    }


    // �غc�l
    rect_3D::rect_3D() {
        cout << "\n�إ� rect_3D ����:\n";
        cout << "�п�J��: ";
        cin >> height;
    }

    // �Ѻc�l
    rect_3D::~rect_3D() {
        cout << "�P�� rect_3D ����\n";
    }

    // ��� 3D ���
    void rect_3D::print_3D() {
        cout << "\n[��������]\n";
        cout << "��: " << length << endl;
        cout << "�e: " << width << endl;
        cout << "��: " << height << endl;
        cout << "��n: " << length * width * height << endl;
    }
#pragma once
