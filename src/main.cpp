#include "parser.h"
#include <iostream>
#include <conio.h>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[]) {
    WSPatchParser parser("res/websocket.patch");

    if (argc > 1) {
        parser.apply(argv[1]);
    } else {
        cout << "Usage: " << argv[0] << " <file>" << endl;
    }

    // printf("Press Any Key To Exit...\r\n");
    // getch();

    return 0;
}
