
class square_2D
{
protected:
    double L, W;

public:
    // flight_object���O�غc���禡,�]�w���檫�����          
    square_2D();
    // flight_object���O�Ѻc���禡
    ~square_2D();
    // ��ܭ��檫�����
    void pirint_2D();
};

// �j���Ⱦ����O
class rect_3D :public square_2D
{
private:
    double H;

public:
    // airliner���O�غc���禡,�]�w�j���Ⱦ������  
    rect_3D();

    // airliner���O�Ѻc���禡
    ~rect_3D()
    {
        cout << "����l���Orect_3D���Ѻc���禡.\n";
    }

    // ��ܤj���Ⱦ������
    void pirint_3D( );
};