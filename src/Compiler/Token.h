//
// Created by Daniel on 10/25/23.
//

#ifndef NEKODBMS_TOKEN_H
#define NEKODBMS_TOKEN_H


#include <string>
#include <vector>

enum TokenType {
    CreateDatabase,
    CreateTable,
    CreateFunction,
    SetPrimaryKey,
    SetForeignKey,
    SetNull,
    String,
    Integer,
    Boolean,
    Return,
    Let,
    Assign,
    Select,
    Join,
    End,
};

constexpr std::string TokenTypeString[] = {
                "CreateDatabase",
                "CreateTable",
                "CreateFunction",
                "SetPrimaryKey",
                "SetForeignKey",
                "SetNull",
                "String",
                "Integer",
                "Boolean",
                "Return",
                "Let",
                "Assign",
                "Select",
                "Join",
                "End",
};

class Token {
    TokenType type;
    std::vector<std::string> value;

public:
    Token(TokenType type, std::vector<std::string> value);

    TokenType getType();
    std::vector<std::string> getValue();

    void setValue(std::vector<std::string> value);
    void setType(TokenType type) {this->type = type;}

    std::string toString();

};


#endif //NEKODBMS_TOKEN_H
