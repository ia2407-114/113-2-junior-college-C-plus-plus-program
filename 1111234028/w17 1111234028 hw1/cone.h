class Circ_1D
{
public:
    double radius, pi = 3.14;

    Circ_1D();
    void compute_circ();
};

class Cron_3D :public Circ_1D
{
public:
    double height_Cr, volume_Cr;

    Cron_3D();
    void compute_volume();
};

class Pie_2D :public Circ_1D
{
public:
    double area;

    void compute_area();

};

class Cylinder_3D :public Pie_2D
{
public:
    double height_Cy, volume_Cy,surface;

    Cylinder_3D();
    void compute_volume();
    void compute_surface();

};

class Castle :public Cron_3D, Cylinder_3D
{
public:

    void compute_volume();
    void compute_height();
};