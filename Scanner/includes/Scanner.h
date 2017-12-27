/*
 * Scanner.h
 *
 *  Created on: Mar 22, 2017
 *      Author: kaok1012
 */

#ifndef SCANNER_H_
#define SCANNER_H_

#include "../../Buffer/includes/Buffer.h"
#include "../../Automat/includes/Automat.h"
#include "../../Symboltabelle/includes/Symboltabelle.h"
#include "Token.h"
#include "../../Buffer/includes/Ausgabe.h"

class Scanner {
private:

	Ausgabe* ausgabe;
    //Automat *automat;
    Buffer *buffer;
    Symboltabelle *symboltabelle;
    Token *token;

    Start* start;
    State* currentState;

    int i = 0;
    int begin = 1;
    bool setBegin;
    bool rowCount;
    int row = 1;
    int arrayCounter;
    char c;
    char error = '.';

public:
    Scanner();
    Scanner(char* readFile, Symboltabelle* symtab);
    Token* nextToken();
private:
    void undo(char* array);
	void addToArray(char* array);
	void createToken(char* array);
	void checkRowEnd();
	void checkComment();
};

#endif /* SCANNER_H_ */

