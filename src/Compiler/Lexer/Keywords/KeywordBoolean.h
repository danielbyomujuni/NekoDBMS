//
// Created by Daniel on 10/31/23.
//

#ifndef NEKODBMS_KEYWORDBOOLEAN_H
#define NEKODBMS_KEYWORDBOOLEAN_H


#include "../../Token.h"
#include "Abstract/ObserverKeyword.h"

class KeywordBoolean : public ObserverKeyword {
private:
    Token *token;
public:
    Token *lex(int *currentWordIndex, std::vector<std::string> text);
    void updateAttribute(std::vector<std::string> att) override {this->token->setValue(att);}
    Token *getTokens() override {return this->token;};
};


#endif //NEKODBMS_KEYWORDBOOLEAN_H