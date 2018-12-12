#ifndef LR_ANALYSIS_H
#define LR_ANALYSIS_H

#include <list>
#include <vector>
#include <set>
#include <map>

namespace LR_ANALYSIS
{
    typedef int Token;
    typedef std::vector<Token> Rule;
    typedef std::vector<Rule> Rules;
    typedef std::set<Token> FirSet;
    typedef std::set<Token> FolSet;

    typedef std::map<Token, bool> Nullable;
    typedef std::map<Token, FirSet> First;
    typedef std::map<Token, FolSet> Follow;

    struct Item
    {
        const Rule* getRule() const;

        bool operator<(const Item& r) const;
        bool operator==(const Item& r) const;

        int rule_idx;
        int dot;
        Token x;
    };

    typedef std::set<Item> LRState;
    bool IsTerminal(Token t);
    void scan_input();
    std::string token_to_string(Token t);
    void first(const std::vector<Token>& tks, FirSet& result);
    bool nullable(const std::vector<Token>& tks);
    void proc();
    void Closure(LRState& state);
    void Goto(const LRState& I, Token X, LRState& J);
    void procLR();
    void print_item(const Item& item);
    void print_rule(const Rule& rul);
    void print_all_rules();
    void print_predict_table();
}

#endif