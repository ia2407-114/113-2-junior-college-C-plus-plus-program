#include "airliner.h"
#include "cargo.h"

int main() {
    airliner air1;
    cargo cargo1;

    cout << "\n====== �j���Ⱦ���� ======" << endl;
    air1.display_airliner();

    cout << "\n====== �f����� ======" << endl;
    cargo1.display_cargo();

    return 0;
}
