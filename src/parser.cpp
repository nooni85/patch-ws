//
// Created by nooni on 2024-01-11.
//

#include "parser.h"

#include <iostream>
#include <cstdio>
#include <wchar.h>
#include <string>
#include "cmrc/cmrc.hpp"

CMRC_DECLARE(rc);

using namespace std;

WSPatchParser::WSPatchParser(const char* resourceFile) {
    m_resourceFilePath = resourceFile;
    loadEmbeddedFile();
}

void WSPatchParser::loadEmbeddedFile() {
    auto fs = cmrc::rc::get_filesystem();

    if(!fs.exists(m_resourceFilePath)) {
        cout << "Could not open websocket.patch" << endl;
    } else {
        wcout << L"Loading: " << m_resourceFilePath << endl;
        auto hFile = fs.open(m_resourceFilePath);

        wstring buf(hFile.begin(), hFile.end());
        wcout << buf << endl;
    }

}

void WSPatchParser::apply(const char *patch) {
    cout << "Applying patch: " << patch << endl;

    FILE* file = fopen(patch, "r");
    fclose(file);

    if(file == nullptr) {
        cout << "Could not open patch file" << endl;
        return;
    }

    m_patchFilePath = patch;
}

void WSPatchParser::loadFile(const char* resourceFile) {

}