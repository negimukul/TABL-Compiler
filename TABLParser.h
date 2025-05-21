
// Generated from TABL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  TABLParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, TBLNAME = 38, 
    WS = 39, COMMENT = 40, COMMENTLINE = 41, VALUE = 42, STRING = 43, INTEGER = 44, 
    FLOAT = 45, CHAR = 46
  };

  enum {
    RuleProgram = 0, RuleStart = 1, RuleEnd = 2, RuleStExpr = 3, RuleMakeExpr = 4, 
    RuleImportExpr = 5, RuleExpr = 6, RuleInsertExpr = 7, RulePrintExpr = 8, 
    RuleDeleteExpr = 9, RuleSortExpr = 10, RuleFilterExpr = 11, RuleMovementExpr = 12, 
    RuleEditExpr = 13, RuleExportExpr = 14, RuleIncrementHandle = 15, RuleDecrementHandle = 16, 
    RulePlusHandle = 17, RuleMinusHandle = 18, RuleInteger = 19, RuleSemicolon = 20, 
    RuleTblname = 21, RuleValue = 22, RuleDatatype = 23, RuleArray = 24
  };

  explicit TABLParser(antlr4::TokenStream *input);

  TABLParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~TABLParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StartContext;
  class EndContext;
  class StExprContext;
  class MakeExprContext;
  class ImportExprContext;
  class ExprContext;
  class InsertExprContext;
  class PrintExprContext;
  class DeleteExprContext;
  class SortExprContext;
  class FilterExprContext;
  class MovementExprContext;
  class EditExprContext;
  class ExportExprContext;
  class IncrementHandleContext;
  class DecrementHandleContext;
  class PlusHandleContext;
  class MinusHandleContext;
  class IntegerContext;
  class SemicolonContext;
  class TblnameContext;
  class ValueContext;
  class DatatypeContext;
  class ArrayContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartContext *start();
    StExprContext *stExpr();
    EndContext *end();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StartContext* start();

  class  EndContext : public antlr4::ParserRuleContext {
  public:
    EndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndContext* end();

  class  StExprContext : public antlr4::ParserRuleContext {
  public:
    StExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MakeExprContext *makeExpr();
    ImportExprContext *importExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StExprContext* stExpr();

  class  MakeExprContext : public antlr4::ParserRuleContext {
  public:
    MakeExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TblnameContext *tblname();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MakeExprContext* makeExpr();

  class  ImportExprContext : public antlr4::ParserRuleContext {
  public:
    ImportExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TblnameContext *> tblname();
    TblnameContext* tblname(size_t i);
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportExprContext* importExpr();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InsertExprContext *insertExpr();
    PrintExprContext *printExpr();
    DeleteExprContext *deleteExpr();
    SortExprContext *sortExpr();
    FilterExprContext *filterExpr();
    MovementExprContext *movementExpr();
    EditExprContext *editExpr();
    ExportExprContext *exportExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();

  class  InsertExprContext : public antlr4::ParserRuleContext {
  public:
    InsertExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SemicolonContext *semicolon();
    TblnameContext *tblname();
    DatatypeContext *datatype();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InsertExprContext* insertExpr();

  class  PrintExprContext : public antlr4::ParserRuleContext {
  public:
    PrintExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TblnameContext *tblname();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintExprContext* printExpr();

  class  DeleteExprContext : public antlr4::ParserRuleContext {
  public:
    DeleteExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SemicolonContext *semicolon();
    TblnameContext *tblname();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeleteExprContext* deleteExpr();

  class  SortExprContext : public antlr4::ParserRuleContext {
  public:
    SortExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TblnameContext *tblname();
    ValueContext *value();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SortExprContext* sortExpr();

  class  FilterExprContext : public antlr4::ParserRuleContext {
  public:
    FilterExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TblnameContext *tblname();
    SemicolonContext *semicolon();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FilterExprContext* filterExpr();

  class  MovementExprContext : public antlr4::ParserRuleContext {
  public:
    MovementExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TblnameContext *tblname();
    PlusHandleContext *plusHandle();
    MinusHandleContext *minusHandle();
    IncrementHandleContext *incrementHandle();
    DecrementHandleContext *decrementHandle();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MovementExprContext* movementExpr();

  class  EditExprContext : public antlr4::ParserRuleContext {
  public:
    EditExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TblnameContext *tblname();
    SemicolonContext *semicolon();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EditExprContext* editExpr();

  class  ExportExprContext : public antlr4::ParserRuleContext {
  public:
    ExportExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TblnameContext *tblname();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExportExprContext* exportExpr();

  class  IncrementHandleContext : public antlr4::ParserRuleContext {
  public:
    IncrementHandleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementHandleContext* incrementHandle();

  class  DecrementHandleContext : public antlr4::ParserRuleContext {
  public:
    DecrementHandleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementHandleContext* decrementHandle();

  class  PlusHandleContext : public antlr4::ParserRuleContext {
  public:
    PlusHandleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PlusHandleContext* plusHandle();

  class  MinusHandleContext : public antlr4::ParserRuleContext {
  public:
    MinusHandleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MinusHandleContext* minusHandle();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntegerContext* integer();

  class  SemicolonContext : public antlr4::ParserRuleContext {
  public:
    SemicolonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SemicolonContext* semicolon();

  class  TblnameContext : public antlr4::ParserRuleContext {
  public:
    TblnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TBLNAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TblnameContext* tblname();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueContext* value();

  class  DatatypeContext : public antlr4::ParserRuleContext {
  public:
    DatatypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DatatypeContext* datatype();

  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayContext* array();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

