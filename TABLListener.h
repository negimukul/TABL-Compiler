
// Generated from TABL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TABLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TABLParser.
 */
class  TABLListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(TABLParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(TABLParser::ProgramContext *ctx) = 0;

  virtual void enterStart(TABLParser::StartContext *ctx) = 0;
  virtual void exitStart(TABLParser::StartContext *ctx) = 0;

  virtual void enterEnd(TABLParser::EndContext *ctx) = 0;
  virtual void exitEnd(TABLParser::EndContext *ctx) = 0;

  virtual void enterStExpr(TABLParser::StExprContext *ctx) = 0;
  virtual void exitStExpr(TABLParser::StExprContext *ctx) = 0;

  virtual void enterMakeExpr(TABLParser::MakeExprContext *ctx) = 0;
  virtual void exitMakeExpr(TABLParser::MakeExprContext *ctx) = 0;

  virtual void enterImportExpr(TABLParser::ImportExprContext *ctx) = 0;
  virtual void exitImportExpr(TABLParser::ImportExprContext *ctx) = 0;

  virtual void enterExpr(TABLParser::ExprContext *ctx) = 0;
  virtual void exitExpr(TABLParser::ExprContext *ctx) = 0;

  virtual void enterInsertExpr(TABLParser::InsertExprContext *ctx) = 0;
  virtual void exitInsertExpr(TABLParser::InsertExprContext *ctx) = 0;

  virtual void enterPrintExpr(TABLParser::PrintExprContext *ctx) = 0;
  virtual void exitPrintExpr(TABLParser::PrintExprContext *ctx) = 0;

  virtual void enterDeleteExpr(TABLParser::DeleteExprContext *ctx) = 0;
  virtual void exitDeleteExpr(TABLParser::DeleteExprContext *ctx) = 0;

  virtual void enterSortExpr(TABLParser::SortExprContext *ctx) = 0;
  virtual void exitSortExpr(TABLParser::SortExprContext *ctx) = 0;

  virtual void enterFilterExpr(TABLParser::FilterExprContext *ctx) = 0;
  virtual void exitFilterExpr(TABLParser::FilterExprContext *ctx) = 0;

  virtual void enterMovementExpr(TABLParser::MovementExprContext *ctx) = 0;
  virtual void exitMovementExpr(TABLParser::MovementExprContext *ctx) = 0;

  virtual void enterEditExpr(TABLParser::EditExprContext *ctx) = 0;
  virtual void exitEditExpr(TABLParser::EditExprContext *ctx) = 0;

  virtual void enterExportExpr(TABLParser::ExportExprContext *ctx) = 0;
  virtual void exitExportExpr(TABLParser::ExportExprContext *ctx) = 0;

  virtual void enterIncrementHandle(TABLParser::IncrementHandleContext *ctx) = 0;
  virtual void exitIncrementHandle(TABLParser::IncrementHandleContext *ctx) = 0;

  virtual void enterDecrementHandle(TABLParser::DecrementHandleContext *ctx) = 0;
  virtual void exitDecrementHandle(TABLParser::DecrementHandleContext *ctx) = 0;

  virtual void enterPlusHandle(TABLParser::PlusHandleContext *ctx) = 0;
  virtual void exitPlusHandle(TABLParser::PlusHandleContext *ctx) = 0;

  virtual void enterMinusHandle(TABLParser::MinusHandleContext *ctx) = 0;
  virtual void exitMinusHandle(TABLParser::MinusHandleContext *ctx) = 0;

  virtual void enterInteger(TABLParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(TABLParser::IntegerContext *ctx) = 0;

  virtual void enterSemicolon(TABLParser::SemicolonContext *ctx) = 0;
  virtual void exitSemicolon(TABLParser::SemicolonContext *ctx) = 0;

  virtual void enterTblname(TABLParser::TblnameContext *ctx) = 0;
  virtual void exitTblname(TABLParser::TblnameContext *ctx) = 0;

  virtual void enterValue(TABLParser::ValueContext *ctx) = 0;
  virtual void exitValue(TABLParser::ValueContext *ctx) = 0;

  virtual void enterDatatype(TABLParser::DatatypeContext *ctx) = 0;
  virtual void exitDatatype(TABLParser::DatatypeContext *ctx) = 0;

  virtual void enterArray(TABLParser::ArrayContext *ctx) = 0;
  virtual void exitArray(TABLParser::ArrayContext *ctx) = 0;


};

