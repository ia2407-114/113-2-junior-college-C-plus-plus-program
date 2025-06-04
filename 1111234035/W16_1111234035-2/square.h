using namespace std;

class square_2D
{
private:
	double length;
	double width;

public:
	square_2D();
	~square_2D();
	double compute_area();
	void print_2D();
};

class rect_3D :public square_2D
{
private:
	double height;

public:
	rect_3D();
	~rect_3D();
	double compute_volume();
	double compute_surface();
	void print_3D();
};