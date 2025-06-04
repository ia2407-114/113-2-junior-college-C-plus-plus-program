
class square_2D
{
protected:
    double L, W;

public:
    // flight_object類別建構元函式,設定飛行物的資料          
    square_2D();
    // flight_object類別解構元函式
    ~square_2D();
    // 顯示飛行物的資料
    void pirint_2D();
};

// 大型客機類別
class rect_3D :public square_2D
{
private:
    double H;

public:
    // airliner類別建構元函式,設定大型客機的資料  
    rect_3D();

    // airliner類別解構元函式
    ~rect_3D()
    {
        cout << "執行子類別rect_3D的解構元函式.\n";
    }

    // 顯示大型客機的資料
    void pirint_3D( );
};