#include"c.h"

int main()
{
	cout << "���:\n";
	pie_2d pie;
	pie.compute_area();

	cout << "���@��:\n";
	cron_3d cron;
	cron.compute_v();

	cout << "��W��:\n";
	cylinder_3d cc;
	cc.compute_s();
	cc.compute_v();

	cout << "����:\n";
	castle c1;
	c1.cron_3d::compute_v();
	c1.cylinder_3d::compute_v();

	c1.compute_h();
	c1.compute_v();
}