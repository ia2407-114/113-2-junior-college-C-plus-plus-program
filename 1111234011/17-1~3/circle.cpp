#include"circle.h"

circ_1d::circ_1d() {
	cout << "��J�b�|: ";
	cin >> r;
}
void circ_1d::compute_circ() {
	cout << "\n\n" << r * r * pi << "\n\n";
}

pie_2d::pie_2d() {}
void pie_2d::compute_area() {
	cout << "\n\n��歱�n: " << r * r * pi << "\n\n";
}

cron_3d::cron_3d() {
	cout << "��J��: ";
	cin >> h;
}
void cron_3d::compute_v() {
	v = 1.00 / 3.00 * (r * r * pi) * h;

	cout << "\n\n���@����n: " << v << "\n\n";
}

cylinder_3d::cylinder_3d() {
	cout << "��J��: ";
	cin >> h;
}
void cylinder_3d::compute_v() {
	v = r * r * pi * h;

	cout << "\n\n��W����n: " << v << "\n\n";

}
void cylinder_3d::compute_s() {

	s = (2 * r * r * pi) + (2 * r * pi * h);

	cout << "\n\n��W����n: " << s << "\n\n";
}


castle::castle() {

}
void castle::compute_v() {
	v = cron_3d::v + cylinder_3d::v;
	cout << "\n\n�����`��n: " << v << "\n\n";
}
void castle::compute_h() {
	h = cron_3d::h + cylinder_3d::h;
	cout << "\n\n�����`��: " << h << "\n\n";
}