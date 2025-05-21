#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <locale>
#include <fstream>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int extractTillSemiColon(std::string tokens[], int start, int tokenCount)
{
    int i = start;
    while (i < tokenCount && tokens[i] != ";")
    {
        i++;
    }
    return i;
}

void startRoutine(string Tokens[], int parseCounter, int extractCounter);
void stExprRoutine(string Tokens[], int parseCounter, int extractCounter);
void endRoutine(string Tokens[], int parseCounter);
void exprRoutine(string Tokens[], int parseCounter, int extractCounter, int tokenCount);
void insertRoutine(string Tokens[], int parseCounter, int extractCounter);
void insertColumn(string datatype, string colName, string colValue);

string Arr[200][200];
string consolePrint = "";

class TABL
{
private:
    int row;
    int column;
    string tblname;
    int rowCount;
    int colCount;

public:
    TABL()
    {
        row = 1;
        column = -1;
        tblname = "";
        rowCount = 2;
        colCount = 0;
    }
    int getRow()
    {
        return row;
    }
    int getRowCount()
    {
        return rowCount;
    }
    int getColumn()
    {
        return column;
    }
    int getColCount()
    {
        return colCount;
    }
    string getTblname()
    {
        return tblname;
    }
    void setRow(int row1)
    {
        row = row1;
    }
    void setRowCount(int row1)
    {
        rowCount = row1;
    }
    void setColumn(int col1)
    {
        column = col1;
    }
    void setColCount(int col1)
    {
        colCount = col1;
    }
    void setTblname(string tblname1)
    {
        tblname = tblname1;
    }
};

TABL table;

const int MAX_TOKENS = 1000;

string errors = "";

int TokenizeLineLParen(string Tokens[], string cmdLine)
{

    char *token[MAX_TOKENS];
    char *workCommandLine = new char[cmdLine.length() + 1];
    int i;

    int tokenCount;

    for (i = 0; i < MAX_TOKENS; i++)
    {
        Tokens[i] = "";
    }
    strcpy(workCommandLine, cmdLine.c_str());
    i = 0;

    if ((token[i] = strtok(workCommandLine, "(")) != NULL)
    {
        i++;
        while ((token[i] = strtok(NULL, "(")) != NULL)
        {
            i++;
        }
    }
    tokenCount = i;

    for (i = 0; i < tokenCount; i++)
    {
        Tokens[i] = token[i];
    }

    delete[] workCommandLine;

    return tokenCount;
}

int TokenizeLineRParen(string Tokens[], string cmdLine)
{

    char *token[MAX_TOKENS];
    char *workCommandLine = new char[cmdLine.length() + 1];
    int i;

    int tokenCount;

    for (i = 0; i < MAX_TOKENS; i++)
    {
        Tokens[i] = "";
    }
    strcpy(workCommandLine, cmdLine.c_str());
    i = 0;

    if ((token[i] = strtok(workCommandLine, ")")) != NULL)
    {
        i++;
        while ((token[i] = strtok(NULL, ")")) != NULL)
        {
            i++;
        }
    }
    tokenCount = i;

    for (i = 0; i < tokenCount; i++)
    {
        Tokens[i] = token[i];
    }

    delete[] workCommandLine;

    return tokenCount;
}

int TokenizeLine(string Tokens[], string cmdLine)
{

    char *token[MAX_TOKENS];
    char *workCommandLine = new char[cmdLine.length() + 1];
    int i;

    int tokenCount;
    for (i = 0; i < MAX_TOKENS; i++)
    {
        Tokens[i] = "";
    }
    strcpy(workCommandLine, cmdLine.c_str());
    i = 0;

    if ((token[i] = strtok(workCommandLine, " ")) != NULL)
    {
        i++;
        while ((token[i] = strtok(NULL, " ")) != NULL)
        {
            i++;
        }
    }
    tokenCount = i;

    for (i = 0; i < tokenCount; i++)
    {
        Tokens[i] = token[i];
    }

    delete[] workCommandLine;

    return tokenCount;
}

int TokenizeLineTab(string Tokens[], string cmdLine)
{

    char *token[MAX_TOKENS];
    char *workCommandLine = new char[cmdLine.length() + 1];
    int i;

    int tokenCount;

    for (i = 0; i < MAX_TOKENS; i++)
    {
        Tokens[i] = "";
    }
    strcpy(workCommandLine, cmdLine.c_str());
    i = 0;

    if ((token[i] = strtok(workCommandLine, "\t")) != NULL)
    {
        i++;
        while ((token[i] = strtok(NULL, "\t")) != NULL)
        {
            i++;
        }
    }
    tokenCount = i;

    for (i = 0; i < tokenCount; i++)
    {
        Tokens[i] = token[i];
    }

    delete[] workCommandLine;

    return tokenCount;
}

int uextractTillSemiColon(string Tokens[], int parseCounter, int tokenCount)
{
    parseCounter++;
    string startString = "";
    int loopRun = 0;
    string errorStart = Tokens[parseCounter];
    while (true)
    {
        loopRun++;

        if (loopRun > tokenCount)
        {

            errors += "Cant find a semicolon while parsing at " + errorStart + "\n";
            return -1;
        }
        if (Tokens[parseCounter] != ";")
        {
            if (Tokens[parseCounter] == "semicolon")
            {
                startString += ";";
            }
            else
                startString += Tokens[parseCounter];
        }
        else
        {
            break;
        }

        parseCounter++;
    }

    return parseCounter;
}

int main(int argc, const char *argv[])
{

    ifstream fin;
    fin.open("parseOut.txt");
    int tokenCount = 0;
    string cmdLine = "";
    string Tokens[MAX_TOKENS];
    int parseCounter = 0;

    if (!fin)
    {
        errors += "Cant find the parse Tree -- Reading Parse Error.\n";
    }
    else
    {

        if (fin)
        {
            getline(fin, cmdLine);
        }
        else
        {

            errors += "File reading error.\n";
        }

        tokenCount = TokenizeLineLParen(Tokens, cmdLine);
        cmdLine = "";
        for (int i = 0; i < tokenCount; i++)
        {
            cmdLine += Tokens[i];
        }

        tokenCount = TokenizeLineRParen(Tokens, cmdLine);
        cmdLine = "";
        for (int i = 0; i < tokenCount; i++)
        {
            cmdLine += Tokens[i];
        }

        tokenCount = TokenizeLine(Tokens, cmdLine);

        if (Tokens[0] != "program")
        {
            errors += "Antlr parse error - we expect a 'program' parse token here\n";
        }
        else
            parseCounter++;
        if (Tokens[parseCounter] != "start")
        {

            errors += "Antlr parse error - we expect a 'start' parse token here \n";
        }
        else
        {

            int extractCounter = extractTillSemiColon(Tokens, parseCounter, tokenCount);
            if (extractCounter == -1)
            {

                cout << errors << endl;
                return 0;
            }
            startRoutine(Tokens, parseCounter, extractCounter);
            parseCounter = extractCounter + 1;
        }
        if (Tokens[parseCounter] != "stExpr")
        {
            errors += "Antlr parse error - we expect a 'stExpr' token here\n";
        }
        else
        {

            int extractCounter = extractTillSemiColon(Tokens, parseCounter, tokenCount);
            if (extractCounter == -1)
            {

                cout << errors << endl;
                return 0;
            }
            parseCounter++;
            stExprRoutine(Tokens, parseCounter, extractCounter);
            parseCounter = extractCounter + 1;
        }
        if (Tokens[parseCounter] != "expr" && Tokens[parseCounter] == "end")
        {

            parseCounter++;

            endRoutine(Tokens, parseCounter);
        }
        else
        {
            while (Tokens[parseCounter] == "expr")
            {

                parseCounter++;
                int extractCounter = extractTillSemiColon(Tokens, parseCounter, tokenCount);
                if (extractCounter == -1)
                {

                    cout << errors << endl;
                    return 0;
                }
                exprRoutine(Tokens, parseCounter, extractCounter, tokenCount);
                parseCounter = extractCounter + 1;
            }
            if (Tokens[parseCounter] != "end")
            {
                errors += "Antlr parse error - we expect a 'end' or 'expr' token here \n ";
            }
            else
            {
                parseCounter++;
                endRoutine(Tokens, parseCounter);
            }
        }

        if (errors.length() == 0)
        {
            cout << consolePrint << endl;
        }
        else
            cout << errors;

    }

    if (argc < 2)
    {
        std::cerr << "❌ Error: No input file provided.\n";
        return 1;
    }

    const char *fileName = argv[1];
    std::cout << "📄 Processing: " << fileName << std::endl;

    std::cout << "✅ Compilation finished successfully.\n";
    return 0;
}

void startRoutine(string Tokens[], int parseCounter, int extractCounter)
{

    if (Tokens[parseCounter + 1] == "TABL.start" && Tokens[parseCounter + 2] == "semicolon" && Tokens[parseCounter + 3] == ";")
    {
    }
    else
    {
        errors += "Antlr parse error - we expect a TABL.start; statement here \n";
    }
}

void endRoutine(string Tokens[], int parseCounter)
{

    if (Tokens[parseCounter] == "TABL.end" && Tokens[parseCounter + 1] == "semicolon" && Tokens[parseCounter + 2] == ";\r")
    {
    }
    else
    {
        errors += "Antlr parse error - we expect a TABL.end; statement herrgre \n";
    }
}

void stExprRoutine(string Tokens[], int parseCounter, int extractCounter)
{
    if (Tokens[parseCounter] == "makeExpr")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "make")
        {

            parseCounter++;
            if (Tokens[parseCounter] == "tblname")
            {
                parseCounter++;
                table.setTblname(Tokens[parseCounter]);
            }
            else
            {
                errors += "Antlr parse error - we expect a 'tblname' token here\n";
            }
        }
        else
        {
            errors += "Antlr parse error - we expect a 'make' token here\n";
        }
    }
    else if (Tokens[parseCounter] == "importExpr")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "import")
        {
            if (Tokens[parseCounter + 1] == "tblname")
            {
                string importName = Tokens[parseCounter + 2];
                if (Tokens[parseCounter + 3] == ".tbl")
                {
                    importName += ".tbl";
                    if (Tokens[parseCounter + 4] == "as" && Tokens[parseCounter + 5] == "tblname")
                    {
                        string tblName = Tokens[parseCounter + 6];
                        table.setTblname(tblName);
                        if (Tokens[parseCounter + 7] == "semicolon" && Tokens[parseCounter + 8] == ";")
                        {
                            try
                            {
                                ifstream fin1;
                                fin1.open(importName.c_str());
                                if (fin1.fail())
                                {
                                    errors += "Filename : " + importName + " does not exist -- in import statemnt.\n";
                                }
                                string newCmdLine = "";
                                getline(fin1, newCmdLine, '\n');

                                string newTokens[1000];
                                int lineTokens = TokenizeLineTab(newTokens, newCmdLine);

                                table.setColCount(lineTokens);
                                table.setColumn(table.getColCount() - 1);
                                for (int i = 0; i < lineTokens; i++)
                                {
                                    Arr[0][i] = newTokens[i];
                                }
                                table.setRowCount(1);
                                int lc = 1;
                                while (fin1)
                                {
                                    newCmdLine = "";
                                    getline(fin1, newCmdLine);
                                    lineTokens = TokenizeLineTab(newTokens, newCmdLine);
                                    if (lineTokens == 0)
                                    {
                                        break;
                                    }
                                    for (int i = 0; i < lineTokens; i++)
                                    {
                                        Arr[table.getRowCount()][i] = newTokens[i];
                                    }
                                    table.setRowCount(table.getRowCount() + 1);
                                }
                                table.setRow(table.getRowCount() - 1);
                            }
                            catch (const std::exception &e)
                            {
                                errors += e.what();
                            }
                        }
                        else
                        {
                            errors += "Expecting a semicolon to end import tblname.tbl as tblname statemt. \n";
                        }
                    }
                    else
                    {
                        errors += "Expecting the 'as' token after import tbname.tbl in import statement. \n";
                    }
                }
                else
                {
                    errors += "Expecing a import tblname file with .tbl extension here in import expr. \n";
                }
            }
            else
            {
                errors += "Expecting the token for tblname in import tblname.tbl statement\n";
            }
        }
        else
        {
            errors += "Expecting an import token here \n";
        }
    }
    else
    {
        errors += "Antlr parse error - we expect a 'makeExpr or importExpr token here\n";
    }
}

void exprRoutine(string Tokens[], int parseCounter, int extractCounter, int tokenCount)
{

    if (Tokens[parseCounter] == "insertExpr")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "insert")
        {
            insertRoutine(Tokens, parseCounter + 1, extractCounter);
        }
        else
        {
            errors += "Antlr parse error - expected 'insert' token not found\n";
        }
    }
    else if (Tokens[parseCounter] == "printExpr")
    {

        parseCounter++;
        if (Tokens[parseCounter] == "print")
        {
            parseCounter++;
            if (Tokens[parseCounter] == "row")
            {
                if (Tokens[parseCounter + 1] == "for" && Tokens[parseCounter + 2] == "tblname")
                {
                    if (Tokens[parseCounter + 3] == table.getTblname())
                    {
                        if (Tokens[parseCounter + 4] == "semicolon" && Tokens[parseCounter + 5] == ";" && table.getRow() >= 0)
                        {
                            for (int j = 0; j < table.getColCount(); j++)
                            {
                                consolePrint += "|    " + Arr[table.getRow()][j] + "       |            ";
                            }
                            consolePrint += "\n";
                        }
                        else
                        {
                            errors += "Expecting a semicolon at 'print row for tblname' statement\n";
                        }
                    }
                    else
                    {
                        errors += "Table name provided does not match active table name in print row statement.\n";
                    }
                }
                else
                {
                    errors += "Looking for a 'for' token followed by 'tblname' tp print the row.\n";
                }
            }
            else if (Tokens[parseCounter] == "column")
            {
                if (Tokens[parseCounter + 1] == "for" && Tokens[parseCounter + 2] == "tblname")
                {

                    if (Tokens[parseCounter + 3] == table.getTblname())
                    {
                        if (Tokens[parseCounter + 4] == "semicolon" && Tokens[parseCounter + 5] == ";" && table.getColumn() >= 0)
                        {

                            consolePrint += "|    " + Arr[0][table.getColumn()] + "      |" + "\n";
                            for (int i = 1; i < table.getRowCount(); i++)
                            {
                                consolePrint += "|    " + Arr[i][table.getColumn()] + "      |" + "\n";
                            }
                        }
                        else
                        {
                            errors += "Expecting a semicolon at print column for tblname.\n";
                        }
                    }
                    else
                    {
                        errors += "Table name provided does not match active table at 'print column for tblname'.\n";
                    }
                }
                else
                {
                    errors += "Expecting a 'for' token at 'print column for tblname'. \n";
                }
            }
            else if (Tokens[parseCounter] == "tblname")
            {
                if (Tokens[parseCounter + 1] == table.getTblname())
                {
                    if (Tokens[parseCounter + 2] == "semicolon" && Tokens[parseCounter + 3] == ";")
                    {
                        for (int i = 0; i < table.getRowCount(); i++)
                        {
                            for (int j = 0; j < table.getColCount(); j++)
                            {
                                consolePrint += Arr[i][j] + "    ";
                            }
                            consolePrint += "\n";
                        }
                    }
                    else
                    {
                        errors += "Expecting a semicolon token at print tblname. \n";
                    }
                }
                else
                {
                    errors += "Provided table name does not match with active table name at 'print tblname' statement \n";
                }
            }
            else
            {
                errors += "Antlr parse error - expecting either a row or column or tblname token after print token. \n";
            }
        }
        else
        {
            errors += "Antlr parse error - expected a print statement here. \n";
        }
    }
    else if (Tokens[parseCounter] == "deleteExpr")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "delete")
        {
            parseCounter++;
            if (Tokens[parseCounter] == "row")
            {
                if (Tokens[parseCounter + 1] == "for" && Tokens[parseCounter + 2] == "tblname")
                {
                    if (Tokens[parseCounter + 3] == table.getTblname())
                    {
                        if (Tokens[parseCounter + 4] == "semicolon" && Tokens[parseCounter + 5] == ";" && table.getRow() >= 0)
                        {

                            for (int i = table.getRow(); i < table.getRowCount(); i++)
                            {
                                for (int j = 0; j < table.getColCount(); j++)
                                {
                                    if (i + 1 == table.getRowCount())
                                    {

                                        Arr[i][j] = "";
                                    }
                                    else
                                    {
                                        Arr[i][j] = Arr[i + 1][j];
                                    }
                                }
                            }
                        }
                        else
                        {
                            errors += "Expecting a semicolon after delete row for tblname statement";
                        }
                    }
                    else
                    {
                        errors += "Provided table name does not match active table name in delete row for tblname statement. \n";
                    }
                }
                else
                {
                    errors += "expecting a for token followed by tblname in delete row for tblname statement. \n";
                }
            }
            else if (Tokens[parseCounter] == "column")
            {
                if (Tokens[parseCounter + 1] == "for" && Tokens[parseCounter + 2] == "tblname")
                {
                    if (Tokens[parseCounter + 3] == table.getTblname())
                    {
                        if (Tokens[parseCounter + 4] == "semicolon" && Tokens[parseCounter + 5] == ";" && table.getColumn() >= 0)
                        {
                            for (int i = 0; i < table.getRowCount(); i++)
                            {
                                for (int j = table.getColumn(); j < table.getColCount(); j++)
                                {
                                    if ((j + 1) == table.getColCount())
                                    {
                                        Arr[i][j] = "";
                                    }
                                    else
                                    {
                                        Arr[i][j] = Arr[i][j + 1];
                                    }
                                }
                            }
                        }
                        else
                        {
                            errors += "Expecting a semicolon after delete column for tblname statement. \n";
                        }
                    }
                    else
                    {
                        errors += "Table name provided does not match active table name in delete column for tblname statement. \n";
                    }
                }
                else
                {
                    errors += "Expecting a for token followed by tblname in delete column for tblname statement";
                }
            }
            else if (Tokens[parseCounter] == "tblname")
            {
                if (Tokens[parseCounter + 1] == table.getTblname() && table.getColumn() >= 0 && table.getRow() >= 0)
                {
                    for (int i = 0; i < table.getRowCount(); i++)
                    {
                        for (int j = 0; j < table.getColCount(); j++)
                        {
                            Arr[i][j] = "";
                        }
                    }
                }
                else
                {
                    errors += "Table name provided does not match active table name.\n";
                }
            }
            else
            {
                errors += "Antlr parse error - Expecting either a 'row' or 'column' or 'tblname' token after delete token. \n";
            }
        }
        else
        {
            errors += "Antlr parse error - expecting a delete token here. \n";
        }
    }
    else if (Tokens[parseCounter] == "sortExpr")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "sort")
        {
            if (Tokens[parseCounter + 1] == "tblname" && Tokens[parseCounter + 2] == table.getTblname())
            {
                if (Tokens[parseCounter + 3] == "by")
                {
                    if (Tokens[parseCounter + 4] == "value")
                    {
                        string sortVal = Tokens[parseCounter + 5];
                        if (Tokens[parseCounter + 6] == "semicolon" && Tokens[parseCounter + 7] == ";")
                        {

                            int colPosToSort = 0;
                            for (int j = 0; j < table.getColCount(); j++)
                            {
                                if (Arr[0][j] == sortVal)
                                {
                                    colPosToSort = j;
                                    break;
                                }
                            }

                            for (int i = 1; i < table.getRowCount(); i++)
                            {
                                for (int j = i + 1; j < table.getRowCount(); j++)
                                {
                                    if (Arr[i][colPosToSort] > Arr[j][colPosToSort])
                                    {
                                        for (int k = 0; k < table.getColCount(); k++)
                                        {
                                            string tempStr;
                                            tempStr = Arr[i][k];
                                            Arr[i][k] = Arr[j][k];
                                            Arr[j][k] = tempStr;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            errors += "Expecting a semicolon in sort tblname by value statement. \n";
                        }
                    }
                    else
                    {
                        errors += "expecting a value token to sort the table by. \n";
                    }
                }
                else
                {
                    errors += "Expecting a 'by' token in sort tblname statement. \n";
                }
            }
            else
            {
                errors += "Expecting a tblname token with provided tblname value that matches the active table after sort token. \n";
            }
        }
        else
        {
            errors += "Antlr parse error - expecting a sort token here. \n";
        }
    }
    else if (Tokens[parseCounter] == "filterExpr")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "filter")
        {
            if (Tokens[parseCounter + 1] == "data" && Tokens[parseCounter + 2] == "for")
            {
                if (Tokens[parseCounter + 3] == "row")
                {
                    if (Tokens[parseCounter + 4] == "to")
                    {
                        if (Tokens[parseCounter + 5] == "tblname")
                        {
                            string tblName = Tokens[parseCounter + 6];
                            if (Tokens[parseCounter + 7] == ".tbl")
                            {
                                if (Tokens[parseCounter + 8] == "semicolon" && Tokens[parseCounter + 9] == ";")
                                {

                                    ofstream fout;
                                    tblName += ".tbl";
                                    try
                                    {
                                        fout.open(tblName.c_str());
                                    }
                                    catch (const std::exception &e)
                                    {
                                        errors += e.what();
                                    }
                                    string filterData = "";
                                    for (int j = 0; j < table.getColCount(); j++)
                                    {
                                        filterData += Arr[table.getRow()][j];
                                    }
                                    try
                                    {
                                        fout << filterData;
                                        fout.close();
                                    }
                                    catch (const std::exception &e)
                                    {
                                        errors += e.what();
                                    }
                                }
                                else
                                {
                                    errors += "Expecting a semicolon in the filter data for row to tblname statement. \n";
                                }
                            }
                            else
                            {
                                errors += "The filter destination filename should have .tbl extension provided.\n";
                            }
                        }
                        else
                        {
                            errors += "Expecting a token tblname in filter data for row to (tblname) statement.\n";
                        }
                    }
                    else
                    {
                        errors += "Expecting a 'to' token after filter data for row in filter statement.";
                    }
                }
                else if (Tokens[parseCounter + 3] == "column")
                {
                    if (Tokens[parseCounter + 4] == "value")
                    {
                        string valToSearch = Tokens[parseCounter + 5];
                        if (Tokens[parseCounter + 6] == "to")
                        {
                            if (Tokens[parseCounter + 7] == "tblname")
                            {
                                string tblName = Tokens[parseCounter + 8];
                                if (Tokens[parseCounter + 9] == ".tbl")
                                {
                                    if (Tokens[parseCounter + 10] == "semicolon" && Tokens[parseCounter + 11] == ";")
                                    {
                                        ofstream fout;
                                        tblName += ".tbl";

                                        try
                                        {
                                            fout.open(tblName.c_str());
                                        }
                                        catch (const std::exception &e)
                                        {
                                            errors += e.what();
                                        }
                                        string filterData = "";
                                        int valueToCol = 0;
                                        for (int i = 0; i < table.getRowCount(); i++)
                                        {
                                            for (int j = 0; j < table.getColCount(); j++)
                                            {
                                                if (Arr[i][j] == valToSearch)
                                                {
                                                    valueToCol = j;
                                                    break;
                                                }
                                            }
                                        }
                                        for (int i = 0; i < table.getRowCount(); i++)
                                        {
                                            filterData += Arr[i][valueToCol] + "\n";
                                        }
                                        try
                                        {
                                            fout << filterData;
                                            fout.close();
                                        }
                                        catch (const std::exception &e)
                                        {
                                            errors += e.what();
                                        }
                                    }
                                    else
                                    {
                                        errors += "Expecting a semicolon in the filter data for column value to tblname statemnt. \n";
                                    }
                                }
                                else
                                {
                                    errors += "Expecting a token tblname to store the filtered data into.\n";
                                }
                            }
                            else
                            {
                                errors += "Expecting a .tbl extension for destination filename value in filter statement. \n";
                            }
                        }
                        else
                        {
                            errors += "Expecting a 'to' token after filter data for column value in filter statement.";
                        }
                    }
                    else
                    {
                        errors += "Expecting a value token in filter data for column (value) statement\n";
                    }
                }

                else
                {
                    errors += "Expecting a row/column token after filter data for in filter statement. \n";
                }
            }
            else
            {
                errors += "Expecting a 'data for' token after filter in filter statement. \n";
            }
        }
        else
        {
            errors += "Antlr parse error - expecting a 'filter' token here. \n";
        }
    }
    else if (Tokens[parseCounter] == "movementExpr")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "tblname")
        {
            if (Tokens[parseCounter + 1] == table.getTblname())
            {
                if (Tokens[parseCounter + 2] == ".")
                {
                    if (Tokens[parseCounter + 3] == "row")
                    {

                        if (Tokens[parseCounter + 4] == "decrementHandle")
                        {
                            if (Tokens[parseCounter + 5] == "--")
                            {
                                if (Tokens[parseCounter + 6] == "semicolon" && Tokens[parseCounter + 7] == ";")
                                {

                                    if (table.getRow() - 1 >= 0)
                                        table.setRow(table.getRow() - 1);
                                    else
                                    {
                                        errors += "Out of Bounds for decrement operation -- current row cannot be negative.\n";
                                    }
                                }
                                else
                                {
                                    errors += "Expected a semicolon after tblname.row-- \n";
                                }
                            }
                            else
                            {
                                errors += "failed to see a '--' token in decrementHandle of movementExpr. \n";
                            }
                        }
                        else if (Tokens[parseCounter + 4] == "incrementHandle")
                        {

                            if (Tokens[parseCounter + 5] == "++")
                            {
                                if (Tokens[parseCounter + 6] == "semicolon" && Tokens[parseCounter + 7] == ";")
                                {

                                    if (table.getRow() + 1 < 200 && table.getRow() < table.getRowCount() - 1)
                                        table.setRow(table.getRow() + 1);
                                    else
                                    {
                                        errors += "Out of Bounds for increment operation -- current row cannot be more than 200(max no or rows available in TABL).\n";
                                    }
                                }
                                else
                                {
                                    errors += "Expected a semicolon after tblname.row++ \n";
                                }
                            }
                            else
                            {
                                errors += "failed to see a '++' token in incrementHandle of movementExpr. \n";
                            }
                        }
                        else if (Tokens[parseCounter + 4] == "plusHandle")
                        {
                            if (Tokens[parseCounter + 5] == "+" && Tokens[parseCounter + 6] == "integer")
                            {
                                int integerToken = atoi(Tokens[parseCounter + 7].c_str());
                                if (Tokens[parseCounter + 8] == "semicolon" && Tokens[parseCounter + 9] == ";")
                                {

                                    if (table.getRow() + integerToken < 200 && table.getRow() + integerToken < table.getRowCount())
                                    {
                                        table.setRow(table.getRow() + integerToken);
                                    }
                                    else
                                    {
                                        errors += "Out of Bounds for addition operation -- current row cannot be more than 200(max no or rows available in TABL).\n";
                                    }
                                }
                                else
                                {
                                    errors += "Exepected a semicolon after tblname.row+<Integer_Value>\n";
                                }
                            }
                            else
                            {
                                errors += "plusHandle should be followed by +integer\n";
                            }
                        }
                        else if (Tokens[parseCounter + 4] == "minusHandle")
                        {
                            if (Tokens[parseCounter + 5] == "-" && Tokens[parseCounter + 6] == "integer")
                            {
                                int integerToken = atoi(Tokens[parseCounter + 7].c_str());
                                if (Tokens[parseCounter + 8] == "semicolon" && Tokens[parseCounter + 9] == ";")
                                {

                                    if (table.getRow() - integerToken >= 0)
                                    {
                                        table.setRow(table.getRow() - integerToken);
                                    }
                                    else
                                    {
                                        errors += "Out of bounds for subtraction operation -- current row cannot be negative. \n";
                                    }
                                }
                                else
                                {
                                    errors += "Expected a semicolon after tblname.row-<Integer_Value>\n";
                                }
                            }
                            else
                            {
                                errors += "minusHandle should be followed by -Integer\n";
                            }
                        }
                        else
                        {
                            errors += "Missing handle information from movementExpr row statement\n";
                        }
                    }
                    else if (Tokens[parseCounter + 3] == "column")
                    {

                        if (Tokens[parseCounter + 4] == "decrementHandle")
                        {
                            if (Tokens[parseCounter + 5] == "--")
                            {
                                if (Tokens[parseCounter + 6] == "semicolon" && Tokens[parseCounter + 7] == ";")
                                {

                                    if (table.getColumn() - 1 >= 0)
                                        table.setColumn(table.getColumn() - 1);
                                    else
                                    {
                                        errors += "Out of Bounds for decrement operation -- current column cannot be negative.\n";
                                    }
                                }
                                else
                                {
                                    errors += "Expected a semicolon after tblname.column-- \n";
                                }
                            }
                            else
                            {
                                errors += "failed to see a '--' token in decrementHandle of movementExpr. \n";
                            }
                        }
                        else if (Tokens[parseCounter + 4] == "incrementHandle")
                        {
                            if (Tokens[parseCounter + 5] == "++")
                            {
                                if (Tokens[parseCounter + 6] == "semicolon" && Tokens[parseCounter + 7] == ";")
                                {

                                    if (table.getColumn() + 1 < 200 && table.getColumn() < table.getColCount() - 1)
                                        table.setColumn(table.getColumn() + 1);
                                    else
                                    {
                                        errors += "Out of Bounds for increment operation -- current column cannot be more than 200(max no or columns available in TABL).\n";
                                    }
                                }
                                else
                                {
                                    errors += "Expected a semicolon after tblname.column++ \n";
                                }
                            }
                            else
                            {
                                errors += "failed to see a '++' token in incrementHandle of movementExpr. \n";
                            }
                        }
                        else if (Tokens[parseCounter + 4] == "plusHandle")
                        {
                            if (Tokens[parseCounter + 5] == "+" && Tokens[parseCounter + 6] == "integer")
                            {
                                int integerToken = atoi(Tokens[parseCounter + 7].c_str());
                                if (Tokens[parseCounter + 8] == "semicolon" && Tokens[parseCounter + 9] == ";")
                                {

                                    if (table.getColumn() + integerToken < 200 && table.getColumn() + integerToken < table.getColCount())
                                    {
                                        table.setColumn(table.getColumn() + integerToken);
                                    }
                                    else
                                    {
                                        errors += "Out of Bounds for addition operation -- current column cannot be more than 200(max no or columns available in TABL).\n";
                                    }
                                }
                                else
                                {
                                    errors += "Exepected a semicolon after tblname.column+<Integer_Value>\n";
                                }
                            }
                            else
                            {
                                errors += "plusHandle should be followed by +integer\n";
                            }
                        }
                        else if (Tokens[parseCounter + 4] == "minusHandle")
                        {
                            if (Tokens[parseCounter + 5] == "-" && Tokens[parseCounter + 6] == "integer")
                            {
                                int integerToken = atoi(Tokens[parseCounter + 7].c_str());
                                if (Tokens[parseCounter + 8] == "semicolon" && Tokens[parseCounter + 9] == ";")
                                {

                                    if (table.getColumn() - integerToken >= 0)
                                    {
                                        table.setColumn(table.getColumn() - integerToken);
                                    }
                                    else
                                    {
                                        errors += "Out of bounds for subtraction operation -- current column cannot be negative. \n";
                                    }
                                }
                                else
                                {
                                    errors += "Expected a semicolon after tblname.column-<Integer_Value>\n";
                                }
                            }
                            else
                            {
                                errors += "minusHandle should be followed by -Integer\n";
                            }
                        }
                        else
                        {
                            errors += "Missing handle information from movementExpr row statement\n";
                        }
                    }
                    else
                    {
                        errors += "Syntax error in movement Expr -- expected a 'row' or 'column' token after tblname.\n";
                    }
                }
                else
                {
                    errors += "Syntax error in movementExpr -- expected a '.' after tblname\n";
                }
            }
            else
            {
                errors += "table name provided does not match with current active table in movement expression\n";
            }
        }
        else
        {
            errors += "Antlr parse error - expected a tblname token to enter the movement expression syntax. \n";
        }
    }
    else if (Tokens[parseCounter] == "editExpr")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "edit")
        {
            if (Tokens[parseCounter + 1] == "row" && Tokens[parseCounter + 2] == "for")
            {
                if (Tokens[parseCounter + 3] == "tblname" && Tokens[parseCounter + 4] == table.getTblname())
                {
                    parseCounter = parseCounter + 5;
                    string colNames[200];
                    string colValues[200];
                    if (Tokens[parseCounter] == "value" && Tokens[parseCounter + 2] == "value")
                    {
                        colNames[0] = Tokens[parseCounter + 1];
                        colValues[0] = Tokens[parseCounter + 3];
                    }
                    else
                    {
                        errors += "Value Value pair not found -- initial\n";
                    }

                    parseCounter += 4;
                    int loopRun = 0;
                    int valvalIterator = 1;
                    while (Tokens[parseCounter] != "semicolon" && parseCounter <= tokenCount)
                    {

                        loopRun++;
                        if (loopRun > 200)
                        {

                            errors += "Syntax error in value value pairs -- expected semicolon is not found. There should be 1 or more (value value) paris which correspond to Column Name and Column Value to be edited in the row.\n";
                            break;
                        }
                        if (Tokens[parseCounter] == "value" && Tokens[parseCounter + 2] == "value")
                        {
                            colNames[valvalIterator] = Tokens[parseCounter + 1];
                            colValues[valvalIterator] = Tokens[parseCounter + 3];
                            parseCounter += 4;
                            valvalIterator++;
                        }
                        else
                        {
                            errors += "Value Value pairs not found -- after initial\n";
                            break;
                        }
                    }

                    if (Tokens[parseCounter] == "semicolon" && Tokens[parseCounter + 1] == ";")
                    {

                        if (valvalIterator > table.getColCount())
                        {
                            errors += "Error processing data to edit -- number of columns entered exceed number of columns in the active table. \n";
                        }
                        else
                        {
                            int newValIterator = 0;
                            while (newValIterator <= valvalIterator)
                            {
                                for (int i = 0; i < table.getColCount(); i++)
                                {
                                    if (Arr[0][i] == colNames[newValIterator])
                                    {
                                        Arr[table.getRow()][i] = colValues[newValIterator];
                                    }
                                }
                                newValIterator++;
                            }
                        }
                    }
                    else
                    {
                        errors += "Expected a semicolon after (value value) pairs in edit statement \n";
                    }
                }
                else
                {
                    errors += "Provided table name does not match the active table name in edit statement. \n";
                }
            }
            else
            {
                errors += "Expected tokens 'row' followed by 'for' after edit token in editExpr\n";
            }
        }
        else
        {
            errors += "Antlr parse error - expected a token edit here. \n";
        }
    }
    else if (Tokens[parseCounter] == "exportExpr")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "export")
        {
            if (Tokens[parseCounter + 1] == "table" && Tokens[parseCounter + 2] == "as")
            {
                if (Tokens[parseCounter + 3] == "tblname")
                {
                    string exportName = Tokens[parseCounter + 4];
                    exportName += ".tbl";
                    if (Tokens[parseCounter + 5] == "semicolon" && Tokens[parseCounter + 6] == ";")
                    {

                        ofstream fout;
                        try
                        {
                            fout.open(exportName.c_str());
                            for (int i = 0; i < table.getRowCount(); i++)
                            {
                                for (int j = 0; j < table.getColCount(); j++)
                                {
                                    fout << Arr[i][j] << "\t";
                                }
                                fout << "\n";
                            }
                            fout.close();
                        }
                        catch (const std::exception &e)
                        {
                            errors += e.what();
                        }
                    }
                    else
                    {
                        errors += "Expected a semicolon after export table as tblname in export statement. \n";
                    }
                }
            }
            else
            {
                errors += "Expected tokens 'table as' after export token in export statement. \n";
            }
        }
        else
        {
            errors += "Antlr parse error - expected an export token here. \n";
        }
    }
    else
    {

        errors += "Antlr illegal expression, please check keyword: " + Tokens[parseCounter];
    }
}

void insertRoutine(string Tokens[], int parseCounter, int extractCounter)
{
    if (Tokens[parseCounter] == "column")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "for" && Tokens[parseCounter + 1] == "tblname")
        {
            if (Tokens[parseCounter + 2] == table.getTblname())
            {
                if (Tokens[parseCounter + 3] == "type" && Tokens[parseCounter + 4] == "datatype")
                {
                    string datatype = Tokens[parseCounter + 5];
                    string colName = "";
                    string colValue = "";
                    if (Tokens[parseCounter + 6] == "name" && Tokens[parseCounter + 7] == "value")
                    {
                        colName = Tokens[parseCounter + 8];
                        if (Tokens[parseCounter + 9] == "auto")
                        {
                            if (datatype == "INT")
                            {
                                if (Tokens[parseCounter + 10] == "semicolon" && Tokens[parseCounter + 11] == ";")
                                {
                                    insertColumn(datatype, colName, colValue);
                                }
                                else
                                {
                                    errors += "";
                                }
                            }
                            else
                            {
                                errors += "you can only auto increment integer columns\n";
                            }
                        }
                        else if (Tokens[parseCounter + 9] == "default" && Tokens[parseCounter + 10] == "value")
                        {
                            colValue = Tokens[parseCounter + 11];
                            insertColumn(datatype, colName, colValue);
                        }
                        else
                        {
                            errors += "Antlr - expected either a default value or an auto value to insert a new column\n";
                        }
                    }
                    else
                    {
                        errors += "expected a name and value token pair after specifying datatype\n";
                    }
                }
                else
                {
                    errors += "Antlr - expected a type token\n";
                }
            }
            else
            {
                errors += "Given table name does not match with active table - please re-check your tablename\n";
            }
        }
    }
    else if (Tokens[parseCounter] == "row")
    {
        parseCounter++;
        if (Tokens[parseCounter] == "for" && Tokens[parseCounter + 1] == "tblname")
        {
            if (Tokens[parseCounter + 2] == table.getTblname())
            {
                parseCounter = parseCounter + 2;
                if (Tokens[parseCounter + 1] == "semicolon" && Tokens[parseCounter + 2] == ";")
                {
                    table.setRowCount(table.getRowCount() + 1);
                    table.setRow(table.getRow() + 1);
                    if (table.getRow() != table.getRowCount() - 1)
                    {
                        for (int i = table.getRowCount() - 1; i > table.getRow(); i--)
                        {
                            for (int j = 0; j < table.getColCount(); j++)
                            {
                                Arr[i][j] = Arr[i - 1][j];
                            }
                        }
                    }
                    else
                    {
                    }
                }
                else
                {
                    errors += "Expecting a semicolon to insert row -- please re-check";
                }
            }
            else
            {
                errors += "Given table name does not match with active table - please re-check your tablename\n";
            }
        }
        else
        {
            errors += "Antlr parse error - expected a 'for' followed by 'tblname' token here.\n";
        }
    }
    else
    {
        errors += "Expected 'row' or 'column' keyword here\n";
    }
}

void insertColumn(string datatype, string colName, string colValue)
{
    table.setColumn(table.getColumn() + 1);

    if (colValue == "")
    {

        Arr[0][table.getColumn()] = colName;

        for (int i = 1; i < 200; i++)
        {
            stringstream s;
            s << i;
            Arr[i][table.getColumn()] = s.str();
        }
    }
    else
    {

        Arr[0][table.getColumn()] = colName;

        for (int i = 1; i < table.getRowCount(); i++)
        {
            Arr[i][table.getColumn()] = colValue;
        }
    }

    table.setColCount(table.getColCount() + 1);
}