// Generated from TABL.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class TABLParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, TBLNAME=30, VALUE=31, 
		INTEGER=32, FLOAT=33, DATATYPE=34, SEMICOLON=35, WS=36, COMMENT=37, LINE_COMMENT=38;
	public static final int
		RULE_program = 0, RULE_start = 1, RULE_end = 2, RULE_stExpr = 3, RULE_makeExpr = 4, 
		RULE_importExpr = 5, RULE_expr = 6, RULE_insertExpr = 7, RULE_printExpr = 8, 
		RULE_deleteExpr = 9, RULE_sortExpr = 10, RULE_filterExpr = 11, RULE_movementExpr = 12, 
		RULE_editExpr = 13, RULE_exportExpr = 14, RULE_incrementHandle = 15, RULE_decrementHandle = 16, 
		RULE_plusHandle = 17, RULE_minusHandle = 18;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "start", "end", "stExpr", "makeExpr", "importExpr", "expr", 
			"insertExpr", "printExpr", "deleteExpr", "sortExpr", "filterExpr", "movementExpr", 
			"editExpr", "exportExpr", "incrementHandle", "decrementHandle", "plusHandle", 
			"minusHandle"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'TABL.start'", "'TABL.end'", "'make'", "'import'", "'.tbl'", "'as'", 
			"'insert'", "'column'", "'for'", "'type'", "'name'", "'default'", "'auto'", 
			"'row'", "'print'", "'delete'", "'sort'", "'by'", "'filter'", "'data'", 
			"'to'", "'.'", "'edit'", "'export'", "'table'", "'++'", "'--'", "'+'", 
			"'-'", null, null, null, null, null, "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, "TBLNAME", "VALUE", "INTEGER", "FLOAT", 
			"DATATYPE", "SEMICOLON", "WS", "COMMENT", "LINE_COMMENT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "TABL.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public TABLParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public StartContext start() {
			return getRuleContext(StartContext.class,0);
		}
		public StExprContext stExpr() {
			return getRuleContext(StExprContext.class,0);
		}
		public EndContext end() {
			return getRuleContext(EndContext.class,0);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterProgram(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitProgram(this);
		}
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(38);
			start();
			setState(39);
			stExpr();
			setState(43);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1099661440L) != 0)) {
				{
				{
				setState(40);
				expr();
				}
				}
				setState(45);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(46);
			end();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StartContext extends ParserRuleContext {
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public StartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_start; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterStart(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitStart(this);
		}
	}

	public final StartContext start() throws RecognitionException {
		StartContext _localctx = new StartContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_start);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(48);
			match(T__0);
			setState(49);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EndContext extends ParserRuleContext {
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public EndContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_end; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterEnd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitEnd(this);
		}
	}

	public final EndContext end() throws RecognitionException {
		EndContext _localctx = new EndContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_end);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(51);
			match(T__1);
			setState(52);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StExprContext extends ParserRuleContext {
		public MakeExprContext makeExpr() {
			return getRuleContext(MakeExprContext.class,0);
		}
		public ImportExprContext importExpr() {
			return getRuleContext(ImportExprContext.class,0);
		}
		public StExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterStExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitStExpr(this);
		}
	}

	public final StExprContext stExpr() throws RecognitionException {
		StExprContext _localctx = new StExprContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_stExpr);
		try {
			setState(56);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__2:
				enterOuterAlt(_localctx, 1);
				{
				setState(54);
				makeExpr();
				}
				break;
			case T__3:
				enterOuterAlt(_localctx, 2);
				{
				setState(55);
				importExpr();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MakeExprContext extends ParserRuleContext {
		public TerminalNode TBLNAME() { return getToken(TABLParser.TBLNAME, 0); }
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public MakeExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_makeExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterMakeExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitMakeExpr(this);
		}
	}

	public final MakeExprContext makeExpr() throws RecognitionException {
		MakeExprContext _localctx = new MakeExprContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_makeExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(58);
			match(T__2);
			setState(59);
			match(TBLNAME);
			setState(60);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ImportExprContext extends ParserRuleContext {
		public List<TerminalNode> TBLNAME() { return getTokens(TABLParser.TBLNAME); }
		public TerminalNode TBLNAME(int i) {
			return getToken(TABLParser.TBLNAME, i);
		}
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public ImportExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_importExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterImportExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitImportExpr(this);
		}
	}

	public final ImportExprContext importExpr() throws RecognitionException {
		ImportExprContext _localctx = new ImportExprContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_importExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(62);
			match(T__3);
			setState(63);
			match(TBLNAME);
			setState(64);
			match(T__4);
			setState(65);
			match(T__5);
			setState(66);
			match(TBLNAME);
			setState(67);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExprContext extends ParserRuleContext {
		public InsertExprContext insertExpr() {
			return getRuleContext(InsertExprContext.class,0);
		}
		public PrintExprContext printExpr() {
			return getRuleContext(PrintExprContext.class,0);
		}
		public DeleteExprContext deleteExpr() {
			return getRuleContext(DeleteExprContext.class,0);
		}
		public SortExprContext sortExpr() {
			return getRuleContext(SortExprContext.class,0);
		}
		public FilterExprContext filterExpr() {
			return getRuleContext(FilterExprContext.class,0);
		}
		public MovementExprContext movementExpr() {
			return getRuleContext(MovementExprContext.class,0);
		}
		public EditExprContext editExpr() {
			return getRuleContext(EditExprContext.class,0);
		}
		public ExportExprContext exportExpr() {
			return getRuleContext(ExportExprContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitExpr(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_expr);
		try {
			setState(77);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__6:
				enterOuterAlt(_localctx, 1);
				{
				setState(69);
				insertExpr();
				}
				break;
			case T__14:
				enterOuterAlt(_localctx, 2);
				{
				setState(70);
				printExpr();
				}
				break;
			case T__15:
				enterOuterAlt(_localctx, 3);
				{
				setState(71);
				deleteExpr();
				}
				break;
			case T__16:
				enterOuterAlt(_localctx, 4);
				{
				setState(72);
				sortExpr();
				}
				break;
			case T__18:
				enterOuterAlt(_localctx, 5);
				{
				setState(73);
				filterExpr();
				}
				break;
			case TBLNAME:
				enterOuterAlt(_localctx, 6);
				{
				setState(74);
				movementExpr();
				}
				break;
			case T__22:
				enterOuterAlt(_localctx, 7);
				{
				setState(75);
				editExpr();
				}
				break;
			case T__23:
				enterOuterAlt(_localctx, 8);
				{
				setState(76);
				exportExpr();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class InsertExprContext extends ParserRuleContext {
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public TerminalNode TBLNAME() { return getToken(TABLParser.TBLNAME, 0); }
		public TerminalNode DATATYPE() { return getToken(TABLParser.DATATYPE, 0); }
		public List<TerminalNode> VALUE() { return getTokens(TABLParser.VALUE); }
		public TerminalNode VALUE(int i) {
			return getToken(TABLParser.VALUE, i);
		}
		public InsertExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_insertExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterInsertExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitInsertExpr(this);
		}
	}

	public final InsertExprContext insertExpr() throws RecognitionException {
		InsertExprContext _localctx = new InsertExprContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_insertExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			match(T__6);
			setState(95);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				{
				setState(80);
				match(T__7);
				setState(81);
				match(T__8);
				setState(82);
				match(TBLNAME);
				setState(83);
				match(T__9);
				setState(84);
				match(DATATYPE);
				setState(85);
				match(T__10);
				setState(86);
				match(VALUE);
				setState(90);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__11:
					{
					{
					setState(87);
					match(T__11);
					setState(88);
					match(VALUE);
					}
					}
					break;
				case T__12:
					{
					setState(89);
					match(T__12);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case T__13:
				{
				setState(92);
				match(T__13);
				setState(93);
				match(T__8);
				setState(94);
				match(TBLNAME);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(97);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PrintExprContext extends ParserRuleContext {
		public TerminalNode TBLNAME() { return getToken(TABLParser.TBLNAME, 0); }
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public PrintExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterPrintExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitPrintExpr(this);
		}
	}

	public final PrintExprContext printExpr() throws RecognitionException {
		PrintExprContext _localctx = new PrintExprContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_printExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(99);
			match(T__14);
			setState(102);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__7 || _la==T__13) {
				{
				setState(100);
				_la = _input.LA(1);
				if ( !(_la==T__7 || _la==T__13) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(101);
				match(T__8);
				}
			}

			setState(104);
			match(TBLNAME);
			setState(105);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeleteExprContext extends ParserRuleContext {
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public TerminalNode TBLNAME() { return getToken(TABLParser.TBLNAME, 0); }
		public DeleteExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_deleteExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterDeleteExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitDeleteExpr(this);
		}
	}

	public final DeleteExprContext deleteExpr() throws RecognitionException {
		DeleteExprContext _localctx = new DeleteExprContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_deleteExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(107);
			match(T__15);
			setState(112);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
			case T__13:
				{
				setState(108);
				_la = _input.LA(1);
				if ( !(_la==T__7 || _la==T__13) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(109);
				match(T__8);
				setState(110);
				match(TBLNAME);
				}
				break;
			case TBLNAME:
				{
				setState(111);
				match(TBLNAME);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(114);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SortExprContext extends ParserRuleContext {
		public TerminalNode TBLNAME() { return getToken(TABLParser.TBLNAME, 0); }
		public TerminalNode VALUE() { return getToken(TABLParser.VALUE, 0); }
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public SortExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sortExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterSortExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitSortExpr(this);
		}
	}

	public final SortExprContext sortExpr() throws RecognitionException {
		SortExprContext _localctx = new SortExprContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_sortExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(116);
			match(T__16);
			setState(117);
			match(TBLNAME);
			setState(118);
			match(T__17);
			setState(119);
			match(VALUE);
			setState(120);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FilterExprContext extends ParserRuleContext {
		public TerminalNode TBLNAME() { return getToken(TABLParser.TBLNAME, 0); }
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public TerminalNode VALUE() { return getToken(TABLParser.VALUE, 0); }
		public FilterExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filterExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterFilterExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitFilterExpr(this);
		}
	}

	public final FilterExprContext filterExpr() throws RecognitionException {
		FilterExprContext _localctx = new FilterExprContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_filterExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(122);
			match(T__18);
			setState(123);
			match(T__19);
			setState(124);
			match(T__8);
			setState(128);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__13:
				{
				setState(125);
				match(T__13);
				}
				break;
			case T__7:
				{
				setState(126);
				match(T__7);
				setState(127);
				match(VALUE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(130);
			match(T__20);
			setState(131);
			match(TBLNAME);
			setState(132);
			match(T__4);
			setState(133);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MovementExprContext extends ParserRuleContext {
		public TerminalNode TBLNAME() { return getToken(TABLParser.TBLNAME, 0); }
		public PlusHandleContext plusHandle() {
			return getRuleContext(PlusHandleContext.class,0);
		}
		public MinusHandleContext minusHandle() {
			return getRuleContext(MinusHandleContext.class,0);
		}
		public IncrementHandleContext incrementHandle() {
			return getRuleContext(IncrementHandleContext.class,0);
		}
		public DecrementHandleContext decrementHandle() {
			return getRuleContext(DecrementHandleContext.class,0);
		}
		public MovementExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_movementExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterMovementExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitMovementExpr(this);
		}
	}

	public final MovementExprContext movementExpr() throws RecognitionException {
		MovementExprContext _localctx = new MovementExprContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_movementExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(135);
			match(TBLNAME);
			setState(136);
			match(T__21);
			setState(137);
			_la = _input.LA(1);
			if ( !(_la==T__7 || _la==T__13) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(142);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__27:
				{
				setState(138);
				plusHandle();
				}
				break;
			case T__28:
				{
				setState(139);
				minusHandle();
				}
				break;
			case T__25:
				{
				setState(140);
				incrementHandle();
				}
				break;
			case T__26:
				{
				setState(141);
				decrementHandle();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EditExprContext extends ParserRuleContext {
		public TerminalNode TBLNAME() { return getToken(TABLParser.TBLNAME, 0); }
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public List<TerminalNode> VALUE() { return getTokens(TABLParser.VALUE); }
		public TerminalNode VALUE(int i) {
			return getToken(TABLParser.VALUE, i);
		}
		public EditExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_editExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterEditExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitEditExpr(this);
		}
	}

	public final EditExprContext editExpr() throws RecognitionException {
		EditExprContext _localctx = new EditExprContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_editExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			match(T__22);
			setState(145);
			match(T__13);
			setState(146);
			match(T__8);
			setState(147);
			match(TBLNAME);
			setState(150); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(148);
				match(VALUE);
				setState(149);
				match(VALUE);
				}
				}
				setState(152); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==VALUE );
			setState(154);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExportExprContext extends ParserRuleContext {
		public TerminalNode TBLNAME() { return getToken(TABLParser.TBLNAME, 0); }
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public ExportExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exportExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterExportExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitExportExpr(this);
		}
	}

	public final ExportExprContext exportExpr() throws RecognitionException {
		ExportExprContext _localctx = new ExportExprContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_exportExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(156);
			match(T__23);
			setState(157);
			match(T__24);
			setState(158);
			match(T__5);
			setState(159);
			match(TBLNAME);
			setState(160);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IncrementHandleContext extends ParserRuleContext {
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public IncrementHandleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_incrementHandle; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterIncrementHandle(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitIncrementHandle(this);
		}
	}

	public final IncrementHandleContext incrementHandle() throws RecognitionException {
		IncrementHandleContext _localctx = new IncrementHandleContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_incrementHandle);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			match(T__25);
			setState(163);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DecrementHandleContext extends ParserRuleContext {
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public DecrementHandleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decrementHandle; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterDecrementHandle(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitDecrementHandle(this);
		}
	}

	public final DecrementHandleContext decrementHandle() throws RecognitionException {
		DecrementHandleContext _localctx = new DecrementHandleContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_decrementHandle);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(165);
			match(T__26);
			setState(166);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PlusHandleContext extends ParserRuleContext {
		public TerminalNode INTEGER() { return getToken(TABLParser.INTEGER, 0); }
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public PlusHandleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_plusHandle; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterPlusHandle(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitPlusHandle(this);
		}
	}

	public final PlusHandleContext plusHandle() throws RecognitionException {
		PlusHandleContext _localctx = new PlusHandleContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_plusHandle);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(168);
			match(T__27);
			setState(169);
			match(INTEGER);
			setState(170);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MinusHandleContext extends ParserRuleContext {
		public TerminalNode INTEGER() { return getToken(TABLParser.INTEGER, 0); }
		public TerminalNode SEMICOLON() { return getToken(TABLParser.SEMICOLON, 0); }
		public MinusHandleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_minusHandle; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).enterMinusHandle(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TABLListener ) ((TABLListener)listener).exitMinusHandle(this);
		}
	}

	public final MinusHandleContext minusHandle() throws RecognitionException {
		MinusHandleContext _localctx = new MinusHandleContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_minusHandle);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(172);
			match(T__28);
			setState(173);
			match(INTEGER);
			setState(174);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001&\u00b1\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0005\u0000*\b\u0000\n\u0000\f\u0000"+
		"-\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0003\u0003"+
		"9\b\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0003\u0006N\b\u0006\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007[\b\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0003\u0007`\b\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\b\u0001\b\u0001\b\u0003\bg\b\b\u0001\b\u0001\b\u0001\b\u0001\t"+
		"\u0001\t\u0001\t\u0001\t\u0001\t\u0003\tq\b\t\u0001\t\u0001\t\u0001\n"+
		"\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u0081\b\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001\f"+
		"\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003\f\u008f\b\f\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0004\r\u0097\b\r\u000b\r\f\r\u0098"+
		"\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001"+
		"\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0000\u0000\u0013"+
		"\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a"+
		"\u001c\u001e \"$\u0000\u0001\u0002\u0000\b\b\u000e\u000e\u00af\u0000&"+
		"\u0001\u0000\u0000\u0000\u00020\u0001\u0000\u0000\u0000\u00043\u0001\u0000"+
		"\u0000\u0000\u00068\u0001\u0000\u0000\u0000\b:\u0001\u0000\u0000\u0000"+
		"\n>\u0001\u0000\u0000\u0000\fM\u0001\u0000\u0000\u0000\u000eO\u0001\u0000"+
		"\u0000\u0000\u0010c\u0001\u0000\u0000\u0000\u0012k\u0001\u0000\u0000\u0000"+
		"\u0014t\u0001\u0000\u0000\u0000\u0016z\u0001\u0000\u0000\u0000\u0018\u0087"+
		"\u0001\u0000\u0000\u0000\u001a\u0090\u0001\u0000\u0000\u0000\u001c\u009c"+
		"\u0001\u0000\u0000\u0000\u001e\u00a2\u0001\u0000\u0000\u0000 \u00a5\u0001"+
		"\u0000\u0000\u0000\"\u00a8\u0001\u0000\u0000\u0000$\u00ac\u0001\u0000"+
		"\u0000\u0000&\'\u0003\u0002\u0001\u0000\'+\u0003\u0006\u0003\u0000(*\u0003"+
		"\f\u0006\u0000)(\u0001\u0000\u0000\u0000*-\u0001\u0000\u0000\u0000+)\u0001"+
		"\u0000\u0000\u0000+,\u0001\u0000\u0000\u0000,.\u0001\u0000\u0000\u0000"+
		"-+\u0001\u0000\u0000\u0000./\u0003\u0004\u0002\u0000/\u0001\u0001\u0000"+
		"\u0000\u000001\u0005\u0001\u0000\u000012\u0005#\u0000\u00002\u0003\u0001"+
		"\u0000\u0000\u000034\u0005\u0002\u0000\u000045\u0005#\u0000\u00005\u0005"+
		"\u0001\u0000\u0000\u000069\u0003\b\u0004\u000079\u0003\n\u0005\u00008"+
		"6\u0001\u0000\u0000\u000087\u0001\u0000\u0000\u00009\u0007\u0001\u0000"+
		"\u0000\u0000:;\u0005\u0003\u0000\u0000;<\u0005\u001e\u0000\u0000<=\u0005"+
		"#\u0000\u0000=\t\u0001\u0000\u0000\u0000>?\u0005\u0004\u0000\u0000?@\u0005"+
		"\u001e\u0000\u0000@A\u0005\u0005\u0000\u0000AB\u0005\u0006\u0000\u0000"+
		"BC\u0005\u001e\u0000\u0000CD\u0005#\u0000\u0000D\u000b\u0001\u0000\u0000"+
		"\u0000EN\u0003\u000e\u0007\u0000FN\u0003\u0010\b\u0000GN\u0003\u0012\t"+
		"\u0000HN\u0003\u0014\n\u0000IN\u0003\u0016\u000b\u0000JN\u0003\u0018\f"+
		"\u0000KN\u0003\u001a\r\u0000LN\u0003\u001c\u000e\u0000ME\u0001\u0000\u0000"+
		"\u0000MF\u0001\u0000\u0000\u0000MG\u0001\u0000\u0000\u0000MH\u0001\u0000"+
		"\u0000\u0000MI\u0001\u0000\u0000\u0000MJ\u0001\u0000\u0000\u0000MK\u0001"+
		"\u0000\u0000\u0000ML\u0001\u0000\u0000\u0000N\r\u0001\u0000\u0000\u0000"+
		"O_\u0005\u0007\u0000\u0000PQ\u0005\b\u0000\u0000QR\u0005\t\u0000\u0000"+
		"RS\u0005\u001e\u0000\u0000ST\u0005\n\u0000\u0000TU\u0005\"\u0000\u0000"+
		"UV\u0005\u000b\u0000\u0000VZ\u0005\u001f\u0000\u0000WX\u0005\f\u0000\u0000"+
		"X[\u0005\u001f\u0000\u0000Y[\u0005\r\u0000\u0000ZW\u0001\u0000\u0000\u0000"+
		"ZY\u0001\u0000\u0000\u0000[`\u0001\u0000\u0000\u0000\\]\u0005\u000e\u0000"+
		"\u0000]^\u0005\t\u0000\u0000^`\u0005\u001e\u0000\u0000_P\u0001\u0000\u0000"+
		"\u0000_\\\u0001\u0000\u0000\u0000`a\u0001\u0000\u0000\u0000ab\u0005#\u0000"+
		"\u0000b\u000f\u0001\u0000\u0000\u0000cf\u0005\u000f\u0000\u0000de\u0007"+
		"\u0000\u0000\u0000eg\u0005\t\u0000\u0000fd\u0001\u0000\u0000\u0000fg\u0001"+
		"\u0000\u0000\u0000gh\u0001\u0000\u0000\u0000hi\u0005\u001e\u0000\u0000"+
		"ij\u0005#\u0000\u0000j\u0011\u0001\u0000\u0000\u0000kp\u0005\u0010\u0000"+
		"\u0000lm\u0007\u0000\u0000\u0000mn\u0005\t\u0000\u0000nq\u0005\u001e\u0000"+
		"\u0000oq\u0005\u001e\u0000\u0000pl\u0001\u0000\u0000\u0000po\u0001\u0000"+
		"\u0000\u0000qr\u0001\u0000\u0000\u0000rs\u0005#\u0000\u0000s\u0013\u0001"+
		"\u0000\u0000\u0000tu\u0005\u0011\u0000\u0000uv\u0005\u001e\u0000\u0000"+
		"vw\u0005\u0012\u0000\u0000wx\u0005\u001f\u0000\u0000xy\u0005#\u0000\u0000"+
		"y\u0015\u0001\u0000\u0000\u0000z{\u0005\u0013\u0000\u0000{|\u0005\u0014"+
		"\u0000\u0000|\u0080\u0005\t\u0000\u0000}\u0081\u0005\u000e\u0000\u0000"+
		"~\u007f\u0005\b\u0000\u0000\u007f\u0081\u0005\u001f\u0000\u0000\u0080"+
		"}\u0001\u0000\u0000\u0000\u0080~\u0001\u0000\u0000\u0000\u0081\u0082\u0001"+
		"\u0000\u0000\u0000\u0082\u0083\u0005\u0015\u0000\u0000\u0083\u0084\u0005"+
		"\u001e\u0000\u0000\u0084\u0085\u0005\u0005\u0000\u0000\u0085\u0086\u0005"+
		"#\u0000\u0000\u0086\u0017\u0001\u0000\u0000\u0000\u0087\u0088\u0005\u001e"+
		"\u0000\u0000\u0088\u0089\u0005\u0016\u0000\u0000\u0089\u008e\u0007\u0000"+
		"\u0000\u0000\u008a\u008f\u0003\"\u0011\u0000\u008b\u008f\u0003$\u0012"+
		"\u0000\u008c\u008f\u0003\u001e\u000f\u0000\u008d\u008f\u0003 \u0010\u0000"+
		"\u008e\u008a\u0001\u0000\u0000\u0000\u008e\u008b\u0001\u0000\u0000\u0000"+
		"\u008e\u008c\u0001\u0000\u0000\u0000\u008e\u008d\u0001\u0000\u0000\u0000"+
		"\u008f\u0019\u0001\u0000\u0000\u0000\u0090\u0091\u0005\u0017\u0000\u0000"+
		"\u0091\u0092\u0005\u000e\u0000\u0000\u0092\u0093\u0005\t\u0000\u0000\u0093"+
		"\u0096\u0005\u001e\u0000\u0000\u0094\u0095\u0005\u001f\u0000\u0000\u0095"+
		"\u0097\u0005\u001f\u0000\u0000\u0096\u0094\u0001\u0000\u0000\u0000\u0097"+
		"\u0098\u0001\u0000\u0000\u0000\u0098\u0096\u0001\u0000\u0000\u0000\u0098"+
		"\u0099\u0001\u0000\u0000\u0000\u0099\u009a\u0001\u0000\u0000\u0000\u009a"+
		"\u009b\u0005#\u0000\u0000\u009b\u001b\u0001\u0000\u0000\u0000\u009c\u009d"+
		"\u0005\u0018\u0000\u0000\u009d\u009e\u0005\u0019\u0000\u0000\u009e\u009f"+
		"\u0005\u0006\u0000\u0000\u009f\u00a0\u0005\u001e\u0000\u0000\u00a0\u00a1"+
		"\u0005#\u0000\u0000\u00a1\u001d\u0001\u0000\u0000\u0000\u00a2\u00a3\u0005"+
		"\u001a\u0000\u0000\u00a3\u00a4\u0005#\u0000\u0000\u00a4\u001f\u0001\u0000"+
		"\u0000\u0000\u00a5\u00a6\u0005\u001b\u0000\u0000\u00a6\u00a7\u0005#\u0000"+
		"\u0000\u00a7!\u0001\u0000\u0000\u0000\u00a8\u00a9\u0005\u001c\u0000\u0000"+
		"\u00a9\u00aa\u0005 \u0000\u0000\u00aa\u00ab\u0005#\u0000\u0000\u00ab#"+
		"\u0001\u0000\u0000\u0000\u00ac\u00ad\u0005\u001d\u0000\u0000\u00ad\u00ae"+
		"\u0005 \u0000\u0000\u00ae\u00af\u0005#\u0000\u0000\u00af%\u0001\u0000"+
		"\u0000\u0000\n+8MZ_fp\u0080\u008e\u0098";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}