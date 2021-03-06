/*
 * Boolean expression evaluator in C++.
 *
 * @author: Dani Huertas
 * @email huertas.dani@gmail.com
 *
 */
#include "Node.hh"

std::string Node::names_[] = {
    "NONE",
    "BOOLEAN",
    "NUMBER",
    "FLOAT",
    "STRING",
    "LIST",
    "RANGE",
    "UNARYOP",
    "BINARYOP"
};

//------------------------------------------------------------------------------
uint32_t Node::getType(void) {

    return NONE;
}

//------------------------------------------------------------------------------
std::string Node::getName(void) {

    return names_[getType()];
}

//------------------------------------------------------------------------------
Token Node::getToken(void) {

    return token_;
}

//------------------------------------------------------------------------------
std::string Node::toString(void) {

    std::stringstream ss;
    ss << "Node(" << this << ")";
    return ss.str();
}
