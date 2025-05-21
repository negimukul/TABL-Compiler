// Generated from TABL.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link TABLParser}.
 */
public interface TABLListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link TABLParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(TABLParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(TABLParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#start}.
	 * @param ctx the parse tree
	 */
	void enterStart(TABLParser.StartContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#start}.
	 * @param ctx the parse tree
	 */
	void exitStart(TABLParser.StartContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#end}.
	 * @param ctx the parse tree
	 */
	void enterEnd(TABLParser.EndContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#end}.
	 * @param ctx the parse tree
	 */
	void exitEnd(TABLParser.EndContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#stExpr}.
	 * @param ctx the parse tree
	 */
	void enterStExpr(TABLParser.StExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#stExpr}.
	 * @param ctx the parse tree
	 */
	void exitStExpr(TABLParser.StExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#makeExpr}.
	 * @param ctx the parse tree
	 */
	void enterMakeExpr(TABLParser.MakeExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#makeExpr}.
	 * @param ctx the parse tree
	 */
	void exitMakeExpr(TABLParser.MakeExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#importExpr}.
	 * @param ctx the parse tree
	 */
	void enterImportExpr(TABLParser.ImportExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#importExpr}.
	 * @param ctx the parse tree
	 */
	void exitImportExpr(TABLParser.ImportExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(TABLParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(TABLParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#insertExpr}.
	 * @param ctx the parse tree
	 */
	void enterInsertExpr(TABLParser.InsertExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#insertExpr}.
	 * @param ctx the parse tree
	 */
	void exitInsertExpr(TABLParser.InsertExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#printExpr}.
	 * @param ctx the parse tree
	 */
	void enterPrintExpr(TABLParser.PrintExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#printExpr}.
	 * @param ctx the parse tree
	 */
	void exitPrintExpr(TABLParser.PrintExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#deleteExpr}.
	 * @param ctx the parse tree
	 */
	void enterDeleteExpr(TABLParser.DeleteExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#deleteExpr}.
	 * @param ctx the parse tree
	 */
	void exitDeleteExpr(TABLParser.DeleteExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#sortExpr}.
	 * @param ctx the parse tree
	 */
	void enterSortExpr(TABLParser.SortExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#sortExpr}.
	 * @param ctx the parse tree
	 */
	void exitSortExpr(TABLParser.SortExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#filterExpr}.
	 * @param ctx the parse tree
	 */
	void enterFilterExpr(TABLParser.FilterExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#filterExpr}.
	 * @param ctx the parse tree
	 */
	void exitFilterExpr(TABLParser.FilterExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#movementExpr}.
	 * @param ctx the parse tree
	 */
	void enterMovementExpr(TABLParser.MovementExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#movementExpr}.
	 * @param ctx the parse tree
	 */
	void exitMovementExpr(TABLParser.MovementExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#editExpr}.
	 * @param ctx the parse tree
	 */
	void enterEditExpr(TABLParser.EditExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#editExpr}.
	 * @param ctx the parse tree
	 */
	void exitEditExpr(TABLParser.EditExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#exportExpr}.
	 * @param ctx the parse tree
	 */
	void enterExportExpr(TABLParser.ExportExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#exportExpr}.
	 * @param ctx the parse tree
	 */
	void exitExportExpr(TABLParser.ExportExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#incrementHandle}.
	 * @param ctx the parse tree
	 */
	void enterIncrementHandle(TABLParser.IncrementHandleContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#incrementHandle}.
	 * @param ctx the parse tree
	 */
	void exitIncrementHandle(TABLParser.IncrementHandleContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#decrementHandle}.
	 * @param ctx the parse tree
	 */
	void enterDecrementHandle(TABLParser.DecrementHandleContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#decrementHandle}.
	 * @param ctx the parse tree
	 */
	void exitDecrementHandle(TABLParser.DecrementHandleContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#plusHandle}.
	 * @param ctx the parse tree
	 */
	void enterPlusHandle(TABLParser.PlusHandleContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#plusHandle}.
	 * @param ctx the parse tree
	 */
	void exitPlusHandle(TABLParser.PlusHandleContext ctx);
	/**
	 * Enter a parse tree produced by {@link TABLParser#minusHandle}.
	 * @param ctx the parse tree
	 */
	void enterMinusHandle(TABLParser.MinusHandleContext ctx);
	/**
	 * Exit a parse tree produced by {@link TABLParser#minusHandle}.
	 * @param ctx the parse tree
	 */
	void exitMinusHandle(TABLParser.MinusHandleContext ctx);
}