
// Generated from TABL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TABLListener.h"


/**
 * This class provides an empty implementation of TABLListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TABLBaseListener : public TABLListener {
public:

  virtual void enterProgram(TABLParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(TABLParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStart(TABLParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(TABLParser::StartContext * /*ctx*/) override { }

  virtual void enterEnd(TABLParser::EndContext * /*ctx*/) override { }
  virtual void exitEnd(TABLParser::EndContext * /*ctx*/) override { }

  virtual void enterStExpr(TABLParser::StExprContext * /*ctx*/) override { }
  virtual void exitStExpr(TABLParser::StExprContext * /*ctx*/) override { }

  virtual void enterMakeExpr(TABLParser::MakeExprContext * /*ctx*/) override { }
  virtual void exitMakeExpr(TABLParser::MakeExprContext * /*ctx*/) override { }

  virtual void enterImportExpr(TABLParser::ImportExprContext * /*ctx*/) override { }
  virtual void exitImportExpr(TABLParser::ImportExprContext * /*ctx*/) override { }

  virtual void enterExpr(TABLParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(TABLParser::ExprContext * /*ctx*/) override { }

  virtual void enterInsertExpr(TABLParser::InsertExprContext * /*ctx*/) override { }
  virtual void exitInsertExpr(TABLParser::InsertExprContext * /*ctx*/) override { }

  virtual void enterPrintExpr(TABLParser::PrintExprContext * /*ctx*/) override { }
  virtual void exitPrintExpr(TABLParser::PrintExprContext * /*ctx*/) override { }

  virtual void enterDeleteExpr(TABLParser::DeleteExprContext * /*ctx*/) override { }
  virtual void exitDeleteExpr(TABLParser::DeleteExprContext * /*ctx*/) override { }

  virtual void enterSortExpr(TABLParser::SortExprContext * /*ctx*/) override { }
  virtual void exitSortExpr(TABLParser::SortExprContext * /*ctx*/) override { }

  virtual void enterFilterExpr(TABLParser::FilterExprContext * /*ctx*/) override { }
  virtual void exitFilterExpr(TABLParser::FilterExprContext * /*ctx*/) override { }

  virtual void enterMovementExpr(TABLParser::MovementExprContext * /*ctx*/) override { }
  virtual void exitMovementExpr(TABLParser::MovementExprContext * /*ctx*/) override { }

  virtual void enterEditExpr(TABLParser::EditExprContext * /*ctx*/) override { }
  virtual void exitEditExpr(TABLParser::EditExprContext * /*ctx*/) override { }

  virtual void enterExportExpr(TABLParser::ExportExprContext * /*ctx*/) override { }
  virtual void exitExportExpr(TABLParser::ExportExprContext * /*ctx*/) override { }

  virtual void enterIncrementHandle(TABLParser::IncrementHandleContext * /*ctx*/) override { }
  virtual void exitIncrementHandle(TABLParser::IncrementHandleContext * /*ctx*/) override { }

  virtual void enterDecrementHandle(TABLParser::DecrementHandleContext * /*ctx*/) override { }
  virtual void exitDecrementHandle(TABLParser::DecrementHandleContext * /*ctx*/) override { }

  virtual void enterPlusHandle(TABLParser::PlusHandleContext * /*ctx*/) override { }
  virtual void exitPlusHandle(TABLParser::PlusHandleContext * /*ctx*/) override { }

  virtual void enterMinusHandle(TABLParser::MinusHandleContext * /*ctx*/) override { }
  virtual void exitMinusHandle(TABLParser::MinusHandleContext * /*ctx*/) override { }

  virtual void enterInteger(TABLParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(TABLParser::IntegerContext * /*ctx*/) override { }

  virtual void enterSemicolon(TABLParser::SemicolonContext * /*ctx*/) override { }
  virtual void exitSemicolon(TABLParser::SemicolonContext * /*ctx*/) override { }

  virtual void enterTblname(TABLParser::TblnameContext * /*ctx*/) override { }
  virtual void exitTblname(TABLParser::TblnameContext * /*ctx*/) override { }

  virtual void enterValue(TABLParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(TABLParser::ValueContext * /*ctx*/) override { }

  virtual void enterDatatype(TABLParser::DatatypeContext * /*ctx*/) override { }
  virtual void exitDatatype(TABLParser::DatatypeContext * /*ctx*/) override { }

  virtual void enterArray(TABLParser::ArrayContext * /*ctx*/) override { }
  virtual void exitArray(TABLParser::ArrayContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

