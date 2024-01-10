#include <iostream>
#include <cstdio>

int main() {
    std::cout << "Hello, World!" << std::endl;

    FILE* fWebsocket = fopen("res/websocket.patch", "r");

    if(fWebsocket == nullptr) {
        std::cout << "Could not open websocket.patch" << std::endl;
        return -1;
    }

    return 0;
}
