//
// Created by Daniel on 10/31/23.
//

#include "KeywordInteger.h"
#include "Abstract/Observer.h"

Token *KeywordInteger::lex(int *currentWordIndex, std::vector<std::string> text) {
    Token *temp = new Token(Integer, {});

    this->token = temp;
    Observer::getInst()->awaitAttribute(this);
    checkAttribute(currentWordIndex, text);
    return this->token;
}