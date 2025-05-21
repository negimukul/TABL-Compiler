
// Generated from TABL.g4 by ANTLR 4.13.2

#include "TABLListener.h"
#include "TABLParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct TABLParserStaticData final {
  TABLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TABLParserStaticData(const TABLParserStaticData&) = delete;
  TABLParserStaticData(TABLParserStaticData&&) = delete;
  TABLParserStaticData& operator=(const TABLParserStaticData&) = delete;
  TABLParserStaticData& operator=(TABLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag tablParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<TABLParserStaticData> tablParserStaticData = nullptr;

void tablParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (tablParserStaticData != nullptr) {
    return;
  }
#else
  assert(tablParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<TABLParserStaticData>(
    std::vector<std::string>{
      "program", "start", "end", "stExpr", "makeExpr", "importExpr", "expr", 
      "insertExpr", "printExpr", "deleteExpr", "sortExpr", "filterExpr", 
      "movementExpr", "editExpr", "exportExpr", "incrementHandle", "decrementHandle", 
      "plusHandle", "minusHandle", "integer", "semicolon", "tblname", "value", 
      "datatype", "array"
    },
    std::vector<std::string>{
      "", "'TABL.start'", "'TABL.end'", "'make'", "'import'", "'.tbl'", 
      "'as'", "'insert'", "'column'", "'for'", "'type'", "'name'", "'default'", 
      "'auto'", "'row'", "'print'", "'delete'", "'sort'", "'by'", "'filter'", 
      "'data'", "'to'", "'.'", "'edit'", "'export'", "'table'", "'++'", 
      "'--'", "'+'", "'-'", "';'", "'INT'", "'STRING'", "'CHAR'", "'FLOAT'", 
      "'['", "','", "']'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "TBLNAME", "WS", "COMMENT", "COMMENTLINE", "VALUE", 
      "STRING", "INTEGER", "FLOAT", "CHAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,46,211,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,0,5,0,54,8,0,10,0,12,0,57,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,3,3,69,8,3,1,4,1,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,90,
  	8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,103,8,7,1,7,1,7,1,
  	7,3,7,108,8,7,1,7,1,7,1,8,1,8,1,8,3,8,115,8,8,1,8,1,8,1,8,1,9,1,9,1,9,
  	1,9,1,9,3,9,125,8,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,
  	11,1,11,1,11,1,11,3,11,141,8,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,3,12,155,8,12,1,13,1,13,1,13,1,13,1,13,1,13,1,
  	13,4,13,164,8,13,11,13,12,13,165,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,
  	14,1,15,1,15,1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,
  	18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,24,1,
  	24,5,24,204,8,24,10,24,12,24,207,9,24,1,24,1,24,1,24,0,0,25,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,0,2,2,0,8,
  	8,14,14,1,0,31,34,204,0,50,1,0,0,0,2,60,1,0,0,0,4,63,1,0,0,0,6,68,1,0,
  	0,0,8,70,1,0,0,0,10,74,1,0,0,0,12,89,1,0,0,0,14,91,1,0,0,0,16,111,1,0,
  	0,0,18,119,1,0,0,0,20,128,1,0,0,0,22,134,1,0,0,0,24,147,1,0,0,0,26,156,
  	1,0,0,0,28,169,1,0,0,0,30,175,1,0,0,0,32,178,1,0,0,0,34,181,1,0,0,0,36,
  	185,1,0,0,0,38,189,1,0,0,0,40,191,1,0,0,0,42,193,1,0,0,0,44,195,1,0,0,
  	0,46,197,1,0,0,0,48,199,1,0,0,0,50,51,3,2,1,0,51,55,3,6,3,0,52,54,3,12,
  	6,0,53,52,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,58,1,0,
  	0,0,57,55,1,0,0,0,58,59,3,4,2,0,59,1,1,0,0,0,60,61,5,1,0,0,61,62,3,40,
  	20,0,62,3,1,0,0,0,63,64,5,2,0,0,64,65,3,40,20,0,65,5,1,0,0,0,66,69,3,
  	8,4,0,67,69,3,10,5,0,68,66,1,0,0,0,68,67,1,0,0,0,69,7,1,0,0,0,70,71,5,
  	3,0,0,71,72,3,42,21,0,72,73,3,40,20,0,73,9,1,0,0,0,74,75,5,4,0,0,75,76,
  	3,42,21,0,76,77,5,5,0,0,77,78,5,6,0,0,78,79,3,42,21,0,79,80,3,40,20,0,
  	80,11,1,0,0,0,81,90,3,14,7,0,82,90,3,16,8,0,83,90,3,18,9,0,84,90,3,20,
  	10,0,85,90,3,22,11,0,86,90,3,24,12,0,87,90,3,26,13,0,88,90,3,28,14,0,
  	89,81,1,0,0,0,89,82,1,0,0,0,89,83,1,0,0,0,89,84,1,0,0,0,89,85,1,0,0,0,
  	89,86,1,0,0,0,89,87,1,0,0,0,89,88,1,0,0,0,90,13,1,0,0,0,91,107,5,7,0,
  	0,92,93,5,8,0,0,93,94,5,9,0,0,94,95,3,42,21,0,95,96,5,10,0,0,96,97,3,
  	46,23,0,97,98,5,11,0,0,98,102,3,44,22,0,99,100,5,12,0,0,100,103,3,44,
  	22,0,101,103,5,13,0,0,102,99,1,0,0,0,102,101,1,0,0,0,103,108,1,0,0,0,
  	104,105,5,14,0,0,105,106,5,9,0,0,106,108,3,42,21,0,107,92,1,0,0,0,107,
  	104,1,0,0,0,108,109,1,0,0,0,109,110,3,40,20,0,110,15,1,0,0,0,111,114,
  	5,15,0,0,112,113,7,0,0,0,113,115,5,9,0,0,114,112,1,0,0,0,114,115,1,0,
  	0,0,115,116,1,0,0,0,116,117,3,42,21,0,117,118,3,40,20,0,118,17,1,0,0,
  	0,119,124,5,16,0,0,120,121,7,0,0,0,121,122,5,9,0,0,122,125,3,42,21,0,
  	123,125,3,42,21,0,124,120,1,0,0,0,124,123,1,0,0,0,125,126,1,0,0,0,126,
  	127,3,40,20,0,127,19,1,0,0,0,128,129,5,17,0,0,129,130,3,42,21,0,130,131,
  	5,18,0,0,131,132,3,44,22,0,132,133,3,40,20,0,133,21,1,0,0,0,134,135,5,
  	19,0,0,135,136,5,20,0,0,136,140,5,9,0,0,137,141,5,14,0,0,138,139,5,8,
  	0,0,139,141,3,44,22,0,140,137,1,0,0,0,140,138,1,0,0,0,141,142,1,0,0,0,
  	142,143,5,21,0,0,143,144,3,42,21,0,144,145,5,5,0,0,145,146,3,40,20,0,
  	146,23,1,0,0,0,147,148,3,42,21,0,148,149,5,22,0,0,149,154,7,0,0,0,150,
  	155,3,34,17,0,151,155,3,36,18,0,152,155,3,30,15,0,153,155,3,32,16,0,154,
  	150,1,0,0,0,154,151,1,0,0,0,154,152,1,0,0,0,154,153,1,0,0,0,155,25,1,
  	0,0,0,156,157,5,23,0,0,157,158,5,14,0,0,158,159,5,9,0,0,159,163,3,42,
  	21,0,160,161,3,44,22,0,161,162,3,44,22,0,162,164,1,0,0,0,163,160,1,0,
  	0,0,164,165,1,0,0,0,165,163,1,0,0,0,165,166,1,0,0,0,166,167,1,0,0,0,167,
  	168,3,40,20,0,168,27,1,0,0,0,169,170,5,24,0,0,170,171,5,25,0,0,171,172,
  	5,6,0,0,172,173,3,42,21,0,173,174,3,40,20,0,174,29,1,0,0,0,175,176,5,
  	26,0,0,176,177,3,40,20,0,177,31,1,0,0,0,178,179,5,27,0,0,179,180,3,40,
  	20,0,180,33,1,0,0,0,181,182,5,28,0,0,182,183,3,38,19,0,183,184,3,40,20,
  	0,184,35,1,0,0,0,185,186,5,29,0,0,186,187,3,38,19,0,187,188,3,40,20,0,
  	188,37,1,0,0,0,189,190,5,44,0,0,190,39,1,0,0,0,191,192,5,30,0,0,192,41,
  	1,0,0,0,193,194,5,38,0,0,194,43,1,0,0,0,195,196,5,42,0,0,196,45,1,0,0,
  	0,197,198,7,1,0,0,198,47,1,0,0,0,199,200,5,35,0,0,200,205,3,44,22,0,201,
  	202,5,36,0,0,202,204,3,44,22,0,203,201,1,0,0,0,204,207,1,0,0,0,205,203,
  	1,0,0,0,205,206,1,0,0,0,206,208,1,0,0,0,207,205,1,0,0,0,208,209,5,37,
  	0,0,209,49,1,0,0,0,11,55,68,89,102,107,114,124,140,154,165,205
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  tablParserStaticData = std::move(staticData);
}

}

TABLParser::TABLParser(TokenStream *input) : TABLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

TABLParser::TABLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  TABLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *tablParserStaticData->atn, tablParserStaticData->decisionToDFA, tablParserStaticData->sharedContextCache, options);
}

TABLParser::~TABLParser() {
  delete _interpreter;
}

const atn::ATN& TABLParser::getATN() const {
  return *tablParserStaticData->atn;
}

std::string TABLParser::getGrammarFileName() const {
  return "TABL.g4";
}

const std::vector<std::string>& TABLParser::getRuleNames() const {
  return tablParserStaticData->ruleNames;
}

const dfa::Vocabulary& TABLParser::getVocabulary() const {
  return tablParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TABLParser::getSerializedATN() const {
  return tablParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

TABLParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::StartContext* TABLParser::ProgramContext::start() {
  return getRuleContext<TABLParser::StartContext>(0);
}

TABLParser::StExprContext* TABLParser::ProgramContext::stExpr() {
  return getRuleContext<TABLParser::StExprContext>(0);
}

TABLParser::EndContext* TABLParser::ProgramContext::end() {
  return getRuleContext<TABLParser::EndContext>(0);
}

std::vector<TABLParser::ExprContext *> TABLParser::ProgramContext::expr() {
  return getRuleContexts<TABLParser::ExprContext>();
}

TABLParser::ExprContext* TABLParser::ProgramContext::expr(size_t i) {
  return getRuleContext<TABLParser::ExprContext>(i);
}


size_t TABLParser::ProgramContext::getRuleIndex() const {
  return TABLParser::RuleProgram;
}

void TABLParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void TABLParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

TABLParser::ProgramContext* TABLParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, TABLParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    start();
    setState(51);
    stExpr();
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 274903826560) != 0)) {
      setState(52);
      expr();
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
    end();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartContext ------------------------------------------------------------------

TABLParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::SemicolonContext* TABLParser::StartContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::StartContext::getRuleIndex() const {
  return TABLParser::RuleStart;
}

void TABLParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void TABLParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}

TABLParser::StartContext* TABLParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 2, TABLParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(TABLParser::T__0);
    setState(61);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndContext ------------------------------------------------------------------

TABLParser::EndContext::EndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::SemicolonContext* TABLParser::EndContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::EndContext::getRuleIndex() const {
  return TABLParser::RuleEnd;
}

void TABLParser::EndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnd(this);
}

void TABLParser::EndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnd(this);
}

TABLParser::EndContext* TABLParser::end() {
  EndContext *_localctx = _tracker.createInstance<EndContext>(_ctx, getState());
  enterRule(_localctx, 4, TABLParser::RuleEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(TABLParser::T__1);
    setState(64);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StExprContext ------------------------------------------------------------------

TABLParser::StExprContext::StExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::MakeExprContext* TABLParser::StExprContext::makeExpr() {
  return getRuleContext<TABLParser::MakeExprContext>(0);
}

TABLParser::ImportExprContext* TABLParser::StExprContext::importExpr() {
  return getRuleContext<TABLParser::ImportExprContext>(0);
}


size_t TABLParser::StExprContext::getRuleIndex() const {
  return TABLParser::RuleStExpr;
}

void TABLParser::StExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStExpr(this);
}

void TABLParser::StExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStExpr(this);
}

TABLParser::StExprContext* TABLParser::stExpr() {
  StExprContext *_localctx = _tracker.createInstance<StExprContext>(_ctx, getState());
  enterRule(_localctx, 6, TABLParser::RuleStExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TABLParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(66);
        makeExpr();
        break;
      }

      case TABLParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(67);
        importExpr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MakeExprContext ------------------------------------------------------------------

TABLParser::MakeExprContext::MakeExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::TblnameContext* TABLParser::MakeExprContext::tblname() {
  return getRuleContext<TABLParser::TblnameContext>(0);
}

TABLParser::SemicolonContext* TABLParser::MakeExprContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::MakeExprContext::getRuleIndex() const {
  return TABLParser::RuleMakeExpr;
}

void TABLParser::MakeExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMakeExpr(this);
}

void TABLParser::MakeExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMakeExpr(this);
}

TABLParser::MakeExprContext* TABLParser::makeExpr() {
  MakeExprContext *_localctx = _tracker.createInstance<MakeExprContext>(_ctx, getState());
  enterRule(_localctx, 8, TABLParser::RuleMakeExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(TABLParser::T__2);
    setState(71);
    tblname();
    setState(72);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportExprContext ------------------------------------------------------------------

TABLParser::ImportExprContext::ImportExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TABLParser::TblnameContext *> TABLParser::ImportExprContext::tblname() {
  return getRuleContexts<TABLParser::TblnameContext>();
}

TABLParser::TblnameContext* TABLParser::ImportExprContext::tblname(size_t i) {
  return getRuleContext<TABLParser::TblnameContext>(i);
}

TABLParser::SemicolonContext* TABLParser::ImportExprContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::ImportExprContext::getRuleIndex() const {
  return TABLParser::RuleImportExpr;
}

void TABLParser::ImportExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportExpr(this);
}

void TABLParser::ImportExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportExpr(this);
}

TABLParser::ImportExprContext* TABLParser::importExpr() {
  ImportExprContext *_localctx = _tracker.createInstance<ImportExprContext>(_ctx, getState());
  enterRule(_localctx, 10, TABLParser::RuleImportExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(TABLParser::T__3);
    setState(75);
    tblname();
    setState(76);
    match(TABLParser::T__4);
    setState(77);
    match(TABLParser::T__5);
    setState(78);
    tblname();
    setState(79);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

TABLParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::InsertExprContext* TABLParser::ExprContext::insertExpr() {
  return getRuleContext<TABLParser::InsertExprContext>(0);
}

TABLParser::PrintExprContext* TABLParser::ExprContext::printExpr() {
  return getRuleContext<TABLParser::PrintExprContext>(0);
}

TABLParser::DeleteExprContext* TABLParser::ExprContext::deleteExpr() {
  return getRuleContext<TABLParser::DeleteExprContext>(0);
}

TABLParser::SortExprContext* TABLParser::ExprContext::sortExpr() {
  return getRuleContext<TABLParser::SortExprContext>(0);
}

TABLParser::FilterExprContext* TABLParser::ExprContext::filterExpr() {
  return getRuleContext<TABLParser::FilterExprContext>(0);
}

TABLParser::MovementExprContext* TABLParser::ExprContext::movementExpr() {
  return getRuleContext<TABLParser::MovementExprContext>(0);
}

TABLParser::EditExprContext* TABLParser::ExprContext::editExpr() {
  return getRuleContext<TABLParser::EditExprContext>(0);
}

TABLParser::ExportExprContext* TABLParser::ExprContext::exportExpr() {
  return getRuleContext<TABLParser::ExportExprContext>(0);
}


size_t TABLParser::ExprContext::getRuleIndex() const {
  return TABLParser::RuleExpr;
}

void TABLParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void TABLParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

TABLParser::ExprContext* TABLParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 12, TABLParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(89);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TABLParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(81);
        insertExpr();
        break;
      }

      case TABLParser::T__14: {
        enterOuterAlt(_localctx, 2);
        setState(82);
        printExpr();
        break;
      }

      case TABLParser::T__15: {
        enterOuterAlt(_localctx, 3);
        setState(83);
        deleteExpr();
        break;
      }

      case TABLParser::T__16: {
        enterOuterAlt(_localctx, 4);
        setState(84);
        sortExpr();
        break;
      }

      case TABLParser::T__18: {
        enterOuterAlt(_localctx, 5);
        setState(85);
        filterExpr();
        break;
      }

      case TABLParser::TBLNAME: {
        enterOuterAlt(_localctx, 6);
        setState(86);
        movementExpr();
        break;
      }

      case TABLParser::T__22: {
        enterOuterAlt(_localctx, 7);
        setState(87);
        editExpr();
        break;
      }

      case TABLParser::T__23: {
        enterOuterAlt(_localctx, 8);
        setState(88);
        exportExpr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InsertExprContext ------------------------------------------------------------------

TABLParser::InsertExprContext::InsertExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::SemicolonContext* TABLParser::InsertExprContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}

TABLParser::TblnameContext* TABLParser::InsertExprContext::tblname() {
  return getRuleContext<TABLParser::TblnameContext>(0);
}

TABLParser::DatatypeContext* TABLParser::InsertExprContext::datatype() {
  return getRuleContext<TABLParser::DatatypeContext>(0);
}

std::vector<TABLParser::ValueContext *> TABLParser::InsertExprContext::value() {
  return getRuleContexts<TABLParser::ValueContext>();
}

TABLParser::ValueContext* TABLParser::InsertExprContext::value(size_t i) {
  return getRuleContext<TABLParser::ValueContext>(i);
}


size_t TABLParser::InsertExprContext::getRuleIndex() const {
  return TABLParser::RuleInsertExpr;
}

void TABLParser::InsertExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsertExpr(this);
}

void TABLParser::InsertExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsertExpr(this);
}

TABLParser::InsertExprContext* TABLParser::insertExpr() {
  InsertExprContext *_localctx = _tracker.createInstance<InsertExprContext>(_ctx, getState());
  enterRule(_localctx, 14, TABLParser::RuleInsertExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(TABLParser::T__6);
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TABLParser::T__7: {
        setState(92);
        match(TABLParser::T__7);
        setState(93);
        match(TABLParser::T__8);
        setState(94);
        tblname();
        setState(95);
        match(TABLParser::T__9);
        setState(96);
        datatype();
        setState(97);
        match(TABLParser::T__10);
        setState(98);
        value();
        setState(102);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case TABLParser::T__11: {
            setState(99);
            match(TABLParser::T__11);
            setState(100);
            value();
            break;
          }

          case TABLParser::T__12: {
            setState(101);
            match(TABLParser::T__12);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case TABLParser::T__13: {
        setState(104);
        match(TABLParser::T__13);
        setState(105);
        match(TABLParser::T__8);
        setState(106);
        tblname();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(109);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintExprContext ------------------------------------------------------------------

TABLParser::PrintExprContext::PrintExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::TblnameContext* TABLParser::PrintExprContext::tblname() {
  return getRuleContext<TABLParser::TblnameContext>(0);
}

TABLParser::SemicolonContext* TABLParser::PrintExprContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::PrintExprContext::getRuleIndex() const {
  return TABLParser::RulePrintExpr;
}

void TABLParser::PrintExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintExpr(this);
}

void TABLParser::PrintExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintExpr(this);
}

TABLParser::PrintExprContext* TABLParser::printExpr() {
  PrintExprContext *_localctx = _tracker.createInstance<PrintExprContext>(_ctx, getState());
  enterRule(_localctx, 16, TABLParser::RulePrintExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(TABLParser::T__14);
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TABLParser::T__7

    || _la == TABLParser::T__13) {
      setState(112);
      _la = _input->LA(1);
      if (!(_la == TABLParser::T__7

      || _la == TABLParser::T__13)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(113);
      match(TABLParser::T__8);
    }
    setState(116);
    tblname();
    setState(117);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteExprContext ------------------------------------------------------------------

TABLParser::DeleteExprContext::DeleteExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::SemicolonContext* TABLParser::DeleteExprContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}

TABLParser::TblnameContext* TABLParser::DeleteExprContext::tblname() {
  return getRuleContext<TABLParser::TblnameContext>(0);
}


size_t TABLParser::DeleteExprContext::getRuleIndex() const {
  return TABLParser::RuleDeleteExpr;
}

void TABLParser::DeleteExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteExpr(this);
}

void TABLParser::DeleteExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteExpr(this);
}

TABLParser::DeleteExprContext* TABLParser::deleteExpr() {
  DeleteExprContext *_localctx = _tracker.createInstance<DeleteExprContext>(_ctx, getState());
  enterRule(_localctx, 18, TABLParser::RuleDeleteExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(TABLParser::T__15);
    setState(124);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TABLParser::T__7:
      case TABLParser::T__13: {
        setState(120);
        _la = _input->LA(1);
        if (!(_la == TABLParser::T__7

        || _la == TABLParser::T__13)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(121);
        match(TABLParser::T__8);
        setState(122);
        tblname();
        break;
      }

      case TABLParser::TBLNAME: {
        setState(123);
        tblname();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(126);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SortExprContext ------------------------------------------------------------------

TABLParser::SortExprContext::SortExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::TblnameContext* TABLParser::SortExprContext::tblname() {
  return getRuleContext<TABLParser::TblnameContext>(0);
}

TABLParser::ValueContext* TABLParser::SortExprContext::value() {
  return getRuleContext<TABLParser::ValueContext>(0);
}

TABLParser::SemicolonContext* TABLParser::SortExprContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::SortExprContext::getRuleIndex() const {
  return TABLParser::RuleSortExpr;
}

void TABLParser::SortExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSortExpr(this);
}

void TABLParser::SortExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSortExpr(this);
}

TABLParser::SortExprContext* TABLParser::sortExpr() {
  SortExprContext *_localctx = _tracker.createInstance<SortExprContext>(_ctx, getState());
  enterRule(_localctx, 20, TABLParser::RuleSortExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(TABLParser::T__16);
    setState(129);
    tblname();
    setState(130);
    match(TABLParser::T__17);
    setState(131);
    value();
    setState(132);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilterExprContext ------------------------------------------------------------------

TABLParser::FilterExprContext::FilterExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::TblnameContext* TABLParser::FilterExprContext::tblname() {
  return getRuleContext<TABLParser::TblnameContext>(0);
}

TABLParser::SemicolonContext* TABLParser::FilterExprContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}

TABLParser::ValueContext* TABLParser::FilterExprContext::value() {
  return getRuleContext<TABLParser::ValueContext>(0);
}


size_t TABLParser::FilterExprContext::getRuleIndex() const {
  return TABLParser::RuleFilterExpr;
}

void TABLParser::FilterExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilterExpr(this);
}

void TABLParser::FilterExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilterExpr(this);
}

TABLParser::FilterExprContext* TABLParser::filterExpr() {
  FilterExprContext *_localctx = _tracker.createInstance<FilterExprContext>(_ctx, getState());
  enterRule(_localctx, 22, TABLParser::RuleFilterExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(TABLParser::T__18);
    setState(135);
    match(TABLParser::T__19);
    setState(136);
    match(TABLParser::T__8);
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TABLParser::T__13: {
        setState(137);
        match(TABLParser::T__13);
        break;
      }

      case TABLParser::T__7: {
        setState(138);
        match(TABLParser::T__7);
        setState(139);
        value();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(142);
    match(TABLParser::T__20);
    setState(143);
    tblname();
    setState(144);
    match(TABLParser::T__4);
    setState(145);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MovementExprContext ------------------------------------------------------------------

TABLParser::MovementExprContext::MovementExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::TblnameContext* TABLParser::MovementExprContext::tblname() {
  return getRuleContext<TABLParser::TblnameContext>(0);
}

TABLParser::PlusHandleContext* TABLParser::MovementExprContext::plusHandle() {
  return getRuleContext<TABLParser::PlusHandleContext>(0);
}

TABLParser::MinusHandleContext* TABLParser::MovementExprContext::minusHandle() {
  return getRuleContext<TABLParser::MinusHandleContext>(0);
}

TABLParser::IncrementHandleContext* TABLParser::MovementExprContext::incrementHandle() {
  return getRuleContext<TABLParser::IncrementHandleContext>(0);
}

TABLParser::DecrementHandleContext* TABLParser::MovementExprContext::decrementHandle() {
  return getRuleContext<TABLParser::DecrementHandleContext>(0);
}


size_t TABLParser::MovementExprContext::getRuleIndex() const {
  return TABLParser::RuleMovementExpr;
}

void TABLParser::MovementExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMovementExpr(this);
}

void TABLParser::MovementExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMovementExpr(this);
}

TABLParser::MovementExprContext* TABLParser::movementExpr() {
  MovementExprContext *_localctx = _tracker.createInstance<MovementExprContext>(_ctx, getState());
  enterRule(_localctx, 24, TABLParser::RuleMovementExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    tblname();
    setState(148);
    match(TABLParser::T__21);
    setState(149);
    _la = _input->LA(1);
    if (!(_la == TABLParser::T__7

    || _la == TABLParser::T__13)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(154);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TABLParser::T__27: {
        setState(150);
        plusHandle();
        break;
      }

      case TABLParser::T__28: {
        setState(151);
        minusHandle();
        break;
      }

      case TABLParser::T__25: {
        setState(152);
        incrementHandle();
        break;
      }

      case TABLParser::T__26: {
        setState(153);
        decrementHandle();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EditExprContext ------------------------------------------------------------------

TABLParser::EditExprContext::EditExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::TblnameContext* TABLParser::EditExprContext::tblname() {
  return getRuleContext<TABLParser::TblnameContext>(0);
}

TABLParser::SemicolonContext* TABLParser::EditExprContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}

std::vector<TABLParser::ValueContext *> TABLParser::EditExprContext::value() {
  return getRuleContexts<TABLParser::ValueContext>();
}

TABLParser::ValueContext* TABLParser::EditExprContext::value(size_t i) {
  return getRuleContext<TABLParser::ValueContext>(i);
}


size_t TABLParser::EditExprContext::getRuleIndex() const {
  return TABLParser::RuleEditExpr;
}

void TABLParser::EditExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEditExpr(this);
}

void TABLParser::EditExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEditExpr(this);
}

TABLParser::EditExprContext* TABLParser::editExpr() {
  EditExprContext *_localctx = _tracker.createInstance<EditExprContext>(_ctx, getState());
  enterRule(_localctx, 26, TABLParser::RuleEditExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(TABLParser::T__22);
    setState(157);
    match(TABLParser::T__13);
    setState(158);
    match(TABLParser::T__8);
    setState(159);
    tblname();
    setState(163); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(160);
      value();
      setState(161);
      value();
      setState(165); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TABLParser::VALUE);
    setState(167);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExportExprContext ------------------------------------------------------------------

TABLParser::ExportExprContext::ExportExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::TblnameContext* TABLParser::ExportExprContext::tblname() {
  return getRuleContext<TABLParser::TblnameContext>(0);
}

TABLParser::SemicolonContext* TABLParser::ExportExprContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::ExportExprContext::getRuleIndex() const {
  return TABLParser::RuleExportExpr;
}

void TABLParser::ExportExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExportExpr(this);
}

void TABLParser::ExportExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExportExpr(this);
}

TABLParser::ExportExprContext* TABLParser::exportExpr() {
  ExportExprContext *_localctx = _tracker.createInstance<ExportExprContext>(_ctx, getState());
  enterRule(_localctx, 28, TABLParser::RuleExportExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(TABLParser::T__23);
    setState(170);
    match(TABLParser::T__24);
    setState(171);
    match(TABLParser::T__5);
    setState(172);
    tblname();
    setState(173);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementHandleContext ------------------------------------------------------------------

TABLParser::IncrementHandleContext::IncrementHandleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::SemicolonContext* TABLParser::IncrementHandleContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::IncrementHandleContext::getRuleIndex() const {
  return TABLParser::RuleIncrementHandle;
}

void TABLParser::IncrementHandleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementHandle(this);
}

void TABLParser::IncrementHandleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementHandle(this);
}

TABLParser::IncrementHandleContext* TABLParser::incrementHandle() {
  IncrementHandleContext *_localctx = _tracker.createInstance<IncrementHandleContext>(_ctx, getState());
  enterRule(_localctx, 30, TABLParser::RuleIncrementHandle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(TABLParser::T__25);
    setState(176);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementHandleContext ------------------------------------------------------------------

TABLParser::DecrementHandleContext::DecrementHandleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::SemicolonContext* TABLParser::DecrementHandleContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::DecrementHandleContext::getRuleIndex() const {
  return TABLParser::RuleDecrementHandle;
}

void TABLParser::DecrementHandleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementHandle(this);
}

void TABLParser::DecrementHandleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementHandle(this);
}

TABLParser::DecrementHandleContext* TABLParser::decrementHandle() {
  DecrementHandleContext *_localctx = _tracker.createInstance<DecrementHandleContext>(_ctx, getState());
  enterRule(_localctx, 32, TABLParser::RuleDecrementHandle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(TABLParser::T__26);
    setState(179);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlusHandleContext ------------------------------------------------------------------

TABLParser::PlusHandleContext::PlusHandleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::IntegerContext* TABLParser::PlusHandleContext::integer() {
  return getRuleContext<TABLParser::IntegerContext>(0);
}

TABLParser::SemicolonContext* TABLParser::PlusHandleContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::PlusHandleContext::getRuleIndex() const {
  return TABLParser::RulePlusHandle;
}

void TABLParser::PlusHandleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusHandle(this);
}

void TABLParser::PlusHandleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusHandle(this);
}

TABLParser::PlusHandleContext* TABLParser::plusHandle() {
  PlusHandleContext *_localctx = _tracker.createInstance<PlusHandleContext>(_ctx, getState());
  enterRule(_localctx, 34, TABLParser::RulePlusHandle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(TABLParser::T__27);
    setState(182);
    integer();
    setState(183);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MinusHandleContext ------------------------------------------------------------------

TABLParser::MinusHandleContext::MinusHandleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TABLParser::IntegerContext* TABLParser::MinusHandleContext::integer() {
  return getRuleContext<TABLParser::IntegerContext>(0);
}

TABLParser::SemicolonContext* TABLParser::MinusHandleContext::semicolon() {
  return getRuleContext<TABLParser::SemicolonContext>(0);
}


size_t TABLParser::MinusHandleContext::getRuleIndex() const {
  return TABLParser::RuleMinusHandle;
}

void TABLParser::MinusHandleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinusHandle(this);
}

void TABLParser::MinusHandleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinusHandle(this);
}

TABLParser::MinusHandleContext* TABLParser::minusHandle() {
  MinusHandleContext *_localctx = _tracker.createInstance<MinusHandleContext>(_ctx, getState());
  enterRule(_localctx, 36, TABLParser::RuleMinusHandle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(TABLParser::T__28);
    setState(186);
    integer();
    setState(187);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerContext ------------------------------------------------------------------

TABLParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TABLParser::IntegerContext::INTEGER() {
  return getToken(TABLParser::INTEGER, 0);
}


size_t TABLParser::IntegerContext::getRuleIndex() const {
  return TABLParser::RuleInteger;
}

void TABLParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}

void TABLParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}

TABLParser::IntegerContext* TABLParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 38, TABLParser::RuleInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(TABLParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SemicolonContext ------------------------------------------------------------------

TABLParser::SemicolonContext::SemicolonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TABLParser::SemicolonContext::getRuleIndex() const {
  return TABLParser::RuleSemicolon;
}

void TABLParser::SemicolonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSemicolon(this);
}

void TABLParser::SemicolonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSemicolon(this);
}

TABLParser::SemicolonContext* TABLParser::semicolon() {
  SemicolonContext *_localctx = _tracker.createInstance<SemicolonContext>(_ctx, getState());
  enterRule(_localctx, 40, TABLParser::RuleSemicolon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(TABLParser::T__29);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TblnameContext ------------------------------------------------------------------

TABLParser::TblnameContext::TblnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TABLParser::TblnameContext::TBLNAME() {
  return getToken(TABLParser::TBLNAME, 0);
}


size_t TABLParser::TblnameContext::getRuleIndex() const {
  return TABLParser::RuleTblname;
}

void TABLParser::TblnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTblname(this);
}

void TABLParser::TblnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTblname(this);
}

TABLParser::TblnameContext* TABLParser::tblname() {
  TblnameContext *_localctx = _tracker.createInstance<TblnameContext>(_ctx, getState());
  enterRule(_localctx, 42, TABLParser::RuleTblname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(TABLParser::TBLNAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

TABLParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TABLParser::ValueContext::VALUE() {
  return getToken(TABLParser::VALUE, 0);
}


size_t TABLParser::ValueContext::getRuleIndex() const {
  return TABLParser::RuleValue;
}

void TABLParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void TABLParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

TABLParser::ValueContext* TABLParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 44, TABLParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(TABLParser::VALUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DatatypeContext ------------------------------------------------------------------

TABLParser::DatatypeContext::DatatypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TABLParser::DatatypeContext::getRuleIndex() const {
  return TABLParser::RuleDatatype;
}

void TABLParser::DatatypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDatatype(this);
}

void TABLParser::DatatypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDatatype(this);
}

TABLParser::DatatypeContext* TABLParser::datatype() {
  DatatypeContext *_localctx = _tracker.createInstance<DatatypeContext>(_ctx, getState());
  enterRule(_localctx, 46, TABLParser::RuleDatatype);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32212254720) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

TABLParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TABLParser::ValueContext *> TABLParser::ArrayContext::value() {
  return getRuleContexts<TABLParser::ValueContext>();
}

TABLParser::ValueContext* TABLParser::ArrayContext::value(size_t i) {
  return getRuleContext<TABLParser::ValueContext>(i);
}


size_t TABLParser::ArrayContext::getRuleIndex() const {
  return TABLParser::RuleArray;
}

void TABLParser::ArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray(this);
}

void TABLParser::ArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TABLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray(this);
}

TABLParser::ArrayContext* TABLParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 48, TABLParser::RuleArray);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(TABLParser::T__34);
    setState(200);
    value();
    setState(205);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TABLParser::T__35) {
      setState(201);
      match(TABLParser::T__35);
      setState(202);
      value();
      setState(207);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(208);
    match(TABLParser::T__36);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void TABLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  tablParserInitialize();
#else
  ::antlr4::internal::call_once(tablParserOnceFlag, tablParserInitialize);
#endif
}
