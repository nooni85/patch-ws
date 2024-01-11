//
// Created by nooni on 2024-01-11.
//

#ifndef WSPATCH_PARSER_H
#define WSPATCH_PARSER_H

class WSPatchParser {
public:
    explicit WSPatchParser(const char* resourceFile);

private:
    const char* m_resourceFilePath;
    const char* m_patchFilePath;

private:
    void loadEmbeddedFile();
    void loadFile(const char* resourceFile);

public:
    void apply(const char* patch);
};

#endif //WSPATCH_PARSER_H
