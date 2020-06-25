#include <stdio.h>

union DemoUnion {
    char a;
    int b;
};

struct DemoStruct {
    DemoUnion union_a;
    char c;
};

int main(void) {
    DemoUnion a = {};
    DemoUnion b = { 3 };
    DemoStruct c = { {} };
    return 0;
}
