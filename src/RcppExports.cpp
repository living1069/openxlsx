// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// RcppConvertFromExcelRef2
IntegerVector RcppConvertFromExcelRef2(std::vector<std::string>& r);
RcppExport SEXP openxlsx_RcppConvertFromExcelRef2(SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type r(rSEXP);
    __result = Rcpp::wrap(RcppConvertFromExcelRef2(r));
    return __result;
END_RCPP
}
// RcppConvertFromExcelRef
IntegerVector RcppConvertFromExcelRef(CharacterVector x);
RcppExport SEXP openxlsx_RcppConvertFromExcelRef(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(RcppConvertFromExcelRef(x));
    return __result;
END_RCPP
}
// calcColumnWidths
SEXP calcColumnWidths(List sheetData, std::vector<std::string> sharedStrings, IntegerVector autoColumns, NumericVector widths, float baseFontCharWidth, float minW, float maxW);
RcppExport SEXP openxlsx_calcColumnWidths(SEXP sheetDataSEXP, SEXP sharedStringsSEXP, SEXP autoColumnsSEXP, SEXP widthsSEXP, SEXP baseFontCharWidthSEXP, SEXP minWSEXP, SEXP maxWSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sheetData(sheetDataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sharedStrings(sharedStringsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type autoColumns(autoColumnsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type widths(widthsSEXP);
    Rcpp::traits::input_parameter< float >::type baseFontCharWidth(baseFontCharWidthSEXP);
    Rcpp::traits::input_parameter< float >::type minW(minWSEXP);
    Rcpp::traits::input_parameter< float >::type maxW(maxWSEXP);
    __result = Rcpp::wrap(calcColumnWidths(sheetData, sharedStrings, autoColumns, widths, baseFontCharWidth, minW, maxW));
    return __result;
END_RCPP
}
// cppReadFile
std::string cppReadFile(std::string xmlFile);
RcppExport SEXP openxlsx_cppReadFile(SEXP xmlFileSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP);
    __result = Rcpp::wrap(cppReadFile(xmlFile));
    return __result;
END_RCPP
}
// cppReadFile2
std::string cppReadFile2(std::string xmlFile);
RcppExport SEXP openxlsx_cppReadFile2(SEXP xmlFileSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP);
    __result = Rcpp::wrap(cppReadFile2(xmlFile));
    return __result;
END_RCPP
}
// getVals
SEXP getVals(CharacterVector x);
RcppExport SEXP openxlsx_getVals(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(getVals(x));
    return __result;
END_RCPP
}
// getNodes
SEXP getNodes(std::string xml, std::string tagIn);
RcppExport SEXP openxlsx_getNodes(SEXP xmlSEXP, SEXP tagInSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP);
    Rcpp::traits::input_parameter< std::string >::type tagIn(tagInSEXP);
    __result = Rcpp::wrap(getNodes(xml, tagIn));
    return __result;
END_RCPP
}
// getChildlessNode_ss
std::vector<std::string> getChildlessNode_ss(std::string xml, std::string tag);
RcppExport SEXP openxlsx_getChildlessNode_ss(SEXP xmlSEXP, SEXP tagSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP);
    Rcpp::traits::input_parameter< std::string >::type tag(tagSEXP);
    __result = Rcpp::wrap(getChildlessNode_ss(xml, tag));
    return __result;
END_RCPP
}
// get_extLst_Major
CharacterVector get_extLst_Major(std::string xml);
RcppExport SEXP openxlsx_get_extLst_Major(SEXP xmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP);
    __result = Rcpp::wrap(get_extLst_Major(xml));
    return __result;
END_RCPP
}
// getChildlessNode
CharacterVector getChildlessNode(std::string xml, std::string tag);
RcppExport SEXP openxlsx_getChildlessNode(SEXP xmlSEXP, SEXP tagSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP);
    Rcpp::traits::input_parameter< std::string >::type tag(tagSEXP);
    __result = Rcpp::wrap(getChildlessNode(xml, tag));
    return __result;
END_RCPP
}
// getAttr
SEXP getAttr(CharacterVector x, std::string tag);
RcppExport SEXP openxlsx_getAttr(SEXP xSEXP, SEXP tagSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type tag(tagSEXP);
    __result = Rcpp::wrap(getAttr(x, tag));
    return __result;
END_RCPP
}
// getCellStyles
SEXP getCellStyles(CharacterVector x);
RcppExport SEXP openxlsx_getCellStyles(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(getCellStyles(x));
    return __result;
END_RCPP
}
// getCellTypes
SEXP getCellTypes(CharacterVector x);
RcppExport SEXP openxlsx_getCellTypes(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(getCellTypes(x));
    return __result;
END_RCPP
}
// getCells
SEXP getCells(CharacterVector x);
RcppExport SEXP openxlsx_getCells(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(getCells(x));
    return __result;
END_RCPP
}
// getFunction
SEXP getFunction(CharacterVector x);
RcppExport SEXP openxlsx_getFunction(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(getFunction(x));
    return __result;
END_RCPP
}
// getRefs
SEXP getRefs(CharacterVector x, int startRow);
RcppExport SEXP openxlsx_getRefs(SEXP xSEXP, SEXP startRowSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type startRow(startRowSEXP);
    __result = Rcpp::wrap(getRefs(x, startRow));
    return __result;
END_RCPP
}
// getSharedStrings
CharacterVector getSharedStrings(std::string xmlFile, bool isFile);
RcppExport SEXP openxlsx_getSharedStrings(SEXP xmlFileSEXP, SEXP isFileSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP);
    Rcpp::traits::input_parameter< bool >::type isFile(isFileSEXP);
    __result = Rcpp::wrap(getSharedStrings(xmlFile, isFile));
    return __result;
END_RCPP
}
// getNumValues
List getNumValues(CharacterVector inFile, int n, std::string tagIn);
RcppExport SEXP openxlsx_getNumValues(SEXP inFileSEXP, SEXP nSEXP, SEXP tagInSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type inFile(inFileSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::string >::type tagIn(tagInSEXP);
    __result = Rcpp::wrap(getNumValues(inFile, n, tagIn));
    return __result;
END_RCPP
}
// writeFile
SEXP writeFile(std::string parent, std::string xmlText, std::string parentEnd, std::string R_fileName);
RcppExport SEXP openxlsx_writeFile(SEXP parentSEXP, SEXP xmlTextSEXP, SEXP parentEndSEXP, SEXP R_fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< std::string >::type xmlText(xmlTextSEXP);
    Rcpp::traits::input_parameter< std::string >::type parentEnd(parentEndSEXP);
    Rcpp::traits::input_parameter< std::string >::type R_fileName(R_fileNameSEXP);
    __result = Rcpp::wrap(writeFile(parent, xmlText, parentEnd, R_fileName));
    return __result;
END_RCPP
}
// buildCellList
List buildCellList(CharacterVector r, CharacterVector t, CharacterVector v);
RcppExport SEXP openxlsx_buildCellList(SEXP rSEXP, SEXP tSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP);
    __result = Rcpp::wrap(buildCellList(r, t, v));
    return __result;
END_RCPP
}
// buildLoadCellList
SEXP buildLoadCellList(CharacterVector r, CharacterVector t, CharacterVector v, CharacterVector f);
RcppExport SEXP openxlsx_buildLoadCellList(SEXP rSEXP, SEXP tSEXP, SEXP vSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type f(fSEXP);
    __result = Rcpp::wrap(buildLoadCellList(r, t, v, f));
    return __result;
END_RCPP
}
// constructCellData
SEXP constructCellData(IntegerVector cols, std::vector<std::string> LETTERS, std::vector<std::string> rows, CharacterVector t, CharacterVector v);
RcppExport SEXP openxlsx_constructCellData(SEXP colsSEXP, SEXP LETTERSSEXP, SEXP rowsSEXP, SEXP tSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type LETTERS(LETTERSSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP);
    __result = Rcpp::wrap(constructCellData(cols, LETTERS, rows, t, v));
    return __result;
END_RCPP
}
// convert2ExcelRef
SEXP convert2ExcelRef(IntegerVector cols, std::vector<std::string> LETTERS);
RcppExport SEXP openxlsx_convert2ExcelRef(SEXP colsSEXP, SEXP LETTERSSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type LETTERS(LETTERSSEXP);
    __result = Rcpp::wrap(convert2ExcelRef(cols, LETTERS));
    return __result;
END_RCPP
}
// buildMatrixNumeric
SEXP buildMatrixNumeric(CharacterVector v, IntegerVector rowInd, IntegerVector colInd, CharacterVector colNames, int nRows, int nCols);
RcppExport SEXP openxlsx_buildMatrixNumeric(SEXP vSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP colNamesSEXP, SEXP nRowsSEXP, SEXP nColsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type colNames(colNamesSEXP);
    Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP);
    Rcpp::traits::input_parameter< int >::type nCols(nColsSEXP);
    __result = Rcpp::wrap(buildMatrixNumeric(v, rowInd, colInd, colNames, nRows, nCols));
    return __result;
END_RCPP
}
// buildMatrixMixed
SEXP buildMatrixMixed(CharacterVector v, IntegerVector rowInd, IntegerVector colInd, CharacterVector colNames, int nRows, int nCols, IntegerVector charCols, IntegerVector dateCols);
RcppExport SEXP openxlsx_buildMatrixMixed(SEXP vSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP colNamesSEXP, SEXP nRowsSEXP, SEXP nColsSEXP, SEXP charColsSEXP, SEXP dateColsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type colNames(colNamesSEXP);
    Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP);
    Rcpp::traits::input_parameter< int >::type nCols(nColsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type charCols(charColsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dateCols(dateColsSEXP);
    __result = Rcpp::wrap(buildMatrixMixed(v, rowInd, colInd, colNames, nRows, nCols, charCols, dateCols));
    return __result;
END_RCPP
}
// matrixRowInds
IntegerVector matrixRowInds(IntegerVector indices);
RcppExport SEXP openxlsx_matrixRowInds(SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP);
    __result = Rcpp::wrap(matrixRowInds(indices));
    return __result;
END_RCPP
}
// matrixRowInds2
std::vector<int> matrixRowInds2(std::vector<int>& x);
RcppExport SEXP openxlsx_matrixRowInds2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<int>& >::type x(xSEXP);
    __result = Rcpp::wrap(matrixRowInds2(x));
    return __result;
END_RCPP
}
// buildCellMerges
List buildCellMerges(List comps);
RcppExport SEXP openxlsx_buildCellMerges(SEXP compsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type comps(compsSEXP);
    __result = Rcpp::wrap(buildCellMerges(comps));
    return __result;
END_RCPP
}
// quickBuildCellXML
SEXP quickBuildCellXML(std::string prior, std::string post, List sheetData, IntegerVector rowNumbers, CharacterVector styleInds, std::string R_fileName);
RcppExport SEXP openxlsx_quickBuildCellXML(SEXP priorSEXP, SEXP postSEXP, SEXP sheetDataSEXP, SEXP rowNumbersSEXP, SEXP styleIndsSEXP, SEXP R_fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< std::string >::type post(postSEXP);
    Rcpp::traits::input_parameter< List >::type sheetData(sheetDataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rowNumbers(rowNumbersSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type styleInds(styleIndsSEXP);
    Rcpp::traits::input_parameter< std::string >::type R_fileName(R_fileNameSEXP);
    __result = Rcpp::wrap(quickBuildCellXML(prior, post, sheetData, rowNumbers, styleInds, R_fileName));
    return __result;
END_RCPP
}
// buildTableXML
CharacterVector buildTableXML(std::string table, std::string ref, std::vector<std::string> colNames, bool showColNames, std::string tableStyle, bool withFilter);
RcppExport SEXP openxlsx_buildTableXML(SEXP tableSEXP, SEXP refSEXP, SEXP colNamesSEXP, SEXP showColNamesSEXP, SEXP tableStyleSEXP, SEXP withFilterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type table(tableSEXP);
    Rcpp::traits::input_parameter< std::string >::type ref(refSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type colNames(colNamesSEXP);
    Rcpp::traits::input_parameter< bool >::type showColNames(showColNamesSEXP);
    Rcpp::traits::input_parameter< std::string >::type tableStyle(tableStyleSEXP);
    Rcpp::traits::input_parameter< bool >::type withFilter(withFilterSEXP);
    __result = Rcpp::wrap(buildTableXML(table, ref, colNames, showColNames, tableStyle, withFilter));
    return __result;
END_RCPP
}
// uniqueCellAppend
List uniqueCellAppend(List sheetData, CharacterVector r, List newCells);
RcppExport SEXP openxlsx_uniqueCellAppend(SEXP sheetDataSEXP, SEXP rSEXP, SEXP newCellsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sheetData(sheetDataSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< List >::type newCells(newCellsSEXP);
    __result = Rcpp::wrap(uniqueCellAppend(sheetData, r, newCells));
    return __result;
END_RCPP
}
// getHyperlinkRefs
SEXP getHyperlinkRefs(CharacterVector x);
RcppExport SEXP openxlsx_getHyperlinkRefs(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(getHyperlinkRefs(x));
    return __result;
END_RCPP
}
// isInternalHyperlink
LogicalVector isInternalHyperlink(CharacterVector x);
RcppExport SEXP openxlsx_isInternalHyperlink(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(isInternalHyperlink(x));
    return __result;
END_RCPP
}
// writeCellStyles
List writeCellStyles(List sheetData, CharacterVector rows, IntegerVector cols, String styleId, std::vector<std::string> LETTERS);
RcppExport SEXP openxlsx_writeCellStyles(SEXP sheetDataSEXP, SEXP rowsSEXP, SEXP colsSEXP, SEXP styleIdSEXP, SEXP LETTERSSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sheetData(sheetDataSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< String >::type styleId(styleIdSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type LETTERS(LETTERSSEXP);
    __result = Rcpp::wrap(writeCellStyles(sheetData, rows, cols, styleId, LETTERS));
    return __result;
END_RCPP
}
// calcNRows
int calcNRows(CharacterVector x, bool skipEmptyRows);
RcppExport SEXP openxlsx_calcNRows(SEXP xSEXP, SEXP skipEmptyRowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type skipEmptyRows(skipEmptyRowsSEXP);
    __result = Rcpp::wrap(calcNRows(x, skipEmptyRows));
    return __result;
END_RCPP
}
// buildCellTypes
CharacterVector buildCellTypes(CharacterVector classes, int nRows);
RcppExport SEXP openxlsx_buildCellTypes(SEXP classesSEXP, SEXP nRowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type classes(classesSEXP);
    Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP);
    __result = Rcpp::wrap(buildCellTypes(classes, nRows));
    return __result;
END_RCPP
}
// removeEmptyNodes
CharacterVector removeEmptyNodes(CharacterVector x, CharacterVector emptyNodes);
RcppExport SEXP openxlsx_removeEmptyNodes(SEXP xSEXP, SEXP emptyNodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type emptyNodes(emptyNodesSEXP);
    __result = Rcpp::wrap(removeEmptyNodes(x, emptyNodes));
    return __result;
END_RCPP
}
// getCellsWithChildrenLimited
CharacterVector getCellsWithChildrenLimited(std::string xmlFile, CharacterVector emptyNodes, int n);
RcppExport SEXP openxlsx_getCellsWithChildrenLimited(SEXP xmlFileSEXP, SEXP emptyNodesSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type emptyNodes(emptyNodesSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(getCellsWithChildrenLimited(xmlFile, emptyNodes, n));
    return __result;
END_RCPP
}
// getCellsWithChildren
CharacterVector getCellsWithChildren(std::string xmlFile, CharacterVector emptyNodes);
RcppExport SEXP openxlsx_getCellsWithChildren(SEXP xmlFileSEXP, SEXP emptyNodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type emptyNodes(emptyNodesSEXP);
    __result = Rcpp::wrap(getCellsWithChildren(xmlFile, emptyNodes));
    return __result;
END_RCPP
}
// quickBuildCellXML2
SEXP quickBuildCellXML2(std::string prior, std::string post, List sheetData, IntegerVector rowNumbers, CharacterVector styleInds, CharacterVector rowHeights, std::string R_fileName);
RcppExport SEXP openxlsx_quickBuildCellXML2(SEXP priorSEXP, SEXP postSEXP, SEXP sheetDataSEXP, SEXP rowNumbersSEXP, SEXP styleIndsSEXP, SEXP rowHeightsSEXP, SEXP R_fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< std::string >::type post(postSEXP);
    Rcpp::traits::input_parameter< List >::type sheetData(sheetDataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rowNumbers(rowNumbersSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type styleInds(styleIndsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type rowHeights(rowHeightsSEXP);
    Rcpp::traits::input_parameter< std::string >::type R_fileName(R_fileNameSEXP);
    __result = Rcpp::wrap(quickBuildCellXML2(prior, post, sheetData, rowNumbers, styleInds, rowHeights, R_fileName));
    return __result;
END_RCPP
}
// getRefsVals
SEXP getRefsVals(CharacterVector x, int startRow);
RcppExport SEXP openxlsx_getRefsVals(SEXP xSEXP, SEXP startRowSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type startRow(startRowSEXP);
    __result = Rcpp::wrap(getRefsVals(x, startRow));
    return __result;
END_RCPP
}
// createAlignmentNode
std::string createAlignmentNode(List style);
RcppExport SEXP openxlsx_createAlignmentNode(SEXP styleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type style(styleSEXP);
    __result = Rcpp::wrap(createAlignmentNode(style));
    return __result;
END_RCPP
}
// createFillNode
std::string createFillNode(List style);
RcppExport SEXP openxlsx_createFillNode(SEXP styleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type style(styleSEXP);
    __result = Rcpp::wrap(createFillNode(style));
    return __result;
END_RCPP
}
// createFontNode
std::string createFontNode(List style, std::string defaultFontSize, std::string defaultFontColour, std::string defaultFontName);
RcppExport SEXP openxlsx_createFontNode(SEXP styleSEXP, SEXP defaultFontSizeSEXP, SEXP defaultFontColourSEXP, SEXP defaultFontNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type style(styleSEXP);
    Rcpp::traits::input_parameter< std::string >::type defaultFontSize(defaultFontSizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type defaultFontColour(defaultFontColourSEXP);
    Rcpp::traits::input_parameter< std::string >::type defaultFontName(defaultFontNameSEXP);
    __result = Rcpp::wrap(createFontNode(style, defaultFontSize, defaultFontColour, defaultFontName));
    return __result;
END_RCPP
}
// createBorderNode
std::string createBorderNode(List style, CharacterVector borders);
RcppExport SEXP openxlsx_createBorderNode(SEXP styleSEXP, SEXP bordersSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type style(styleSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type borders(bordersSEXP);
    __result = Rcpp::wrap(createBorderNode(style, borders));
    return __result;
END_RCPP
}
// getCellStylesPossiblyMissing
SEXP getCellStylesPossiblyMissing(CharacterVector x);
RcppExport SEXP openxlsx_getCellStylesPossiblyMissing(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(getCellStylesPossiblyMissing(x));
    return __result;
END_RCPP
}
// readWorkbook
SEXP readWorkbook(CharacterVector v, CharacterVector r, CharacterVector string_refs, LogicalVector is_date, int nRows, bool hasColNames, bool skipEmptyRows, Function clean_names);
RcppExport SEXP openxlsx_readWorkbook(SEXP vSEXP, SEXP rSEXP, SEXP string_refsSEXP, SEXP is_dateSEXP, SEXP nRowsSEXP, SEXP hasColNamesSEXP, SEXP skipEmptyRowsSEXP, SEXP clean_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type string_refs(string_refsSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type is_date(is_dateSEXP);
    Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP);
    Rcpp::traits::input_parameter< bool >::type hasColNames(hasColNamesSEXP);
    Rcpp::traits::input_parameter< bool >::type skipEmptyRows(skipEmptyRowsSEXP);
    Rcpp::traits::input_parameter< Function >::type clean_names(clean_namesSEXP);
    __result = Rcpp::wrap(readWorkbook(v, r, string_refs, is_date, nRows, hasColNames, skipEmptyRows, clean_names));
    return __result;
END_RCPP
}
// getCellInfo
List getCellInfo(std::string xmlFile, CharacterVector sharedStrings, bool skipEmptyRows, int startRow, IntegerVector rows, bool getDates);
RcppExport SEXP openxlsx_getCellInfo(SEXP xmlFileSEXP, SEXP sharedStringsSEXP, SEXP skipEmptyRowsSEXP, SEXP startRowSEXP, SEXP rowsSEXP, SEXP getDatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sharedStrings(sharedStringsSEXP);
    Rcpp::traits::input_parameter< bool >::type skipEmptyRows(skipEmptyRowsSEXP);
    Rcpp::traits::input_parameter< int >::type startRow(startRowSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< bool >::type getDates(getDatesSEXP);
    __result = Rcpp::wrap(getCellInfo(xmlFile, sharedStrings, skipEmptyRows, startRow, rows, getDates));
    return __result;
END_RCPP
}
// loadworksheets
SEXP loadworksheets(Reference wb, List styleObjects, std::vector<std::string> xmlFiles, LogicalVector is_chart_sheet);
RcppExport SEXP openxlsx_loadworksheets(SEXP wbSEXP, SEXP styleObjectsSEXP, SEXP xmlFilesSEXP, SEXP is_chart_sheetSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Reference >::type wb(wbSEXP);
    Rcpp::traits::input_parameter< List >::type styleObjects(styleObjectsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type xmlFiles(xmlFilesSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type is_chart_sheet(is_chart_sheetSEXP);
    __result = Rcpp::wrap(loadworksheets(wb, styleObjects, xmlFiles, is_chart_sheet));
    return __result;
END_RCPP
}
// ExcelConvertExpand
SEXP ExcelConvertExpand(const std::vector<int>& cols, const std::vector<std::string>& LETTERS, const std::vector<std::string>& rows);
RcppExport SEXP openxlsx_ExcelConvertExpand(SEXP colsSEXP, SEXP LETTERSSEXP, SEXP rowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type LETTERS(LETTERSSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type rows(rowsSEXP);
    __result = Rcpp::wrap(ExcelConvertExpand(cols, LETTERS, rows));
    return __result;
END_RCPP
}
// buildMatrixNumeric2
List buildMatrixNumeric2(std::vector<std::string> v, const std::vector<int>& rowInd, IntegerVector& colInd, int nRows, int nCols);
RcppExport SEXP openxlsx_buildMatrixNumeric2(SEXP vSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP nRowsSEXP, SEXP nColsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type v(vSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP);
    Rcpp::traits::input_parameter< int >::type nCols(nColsSEXP);
    __result = Rcpp::wrap(buildMatrixNumeric2(v, rowInd, colInd, nRows, nCols));
    return __result;
END_RCPP
}
// readWorkbook2
SEXP readWorkbook2(std::vector<std::string>& v, std::vector<std::string>& r, std::vector<std::string>& string_refs, std::vector<bool>& is_date, int nRows, bool hasColNames, bool skipEmptyRows, Function clean_names);
RcppExport SEXP openxlsx_readWorkbook2(SEXP vSEXP, SEXP rSEXP, SEXP string_refsSEXP, SEXP is_dateSEXP, SEXP nRowsSEXP, SEXP hasColNamesSEXP, SEXP skipEmptyRowsSEXP, SEXP clean_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type v(vSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type r(rSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type string_refs(string_refsSEXP);
    Rcpp::traits::input_parameter< std::vector<bool>& >::type is_date(is_dateSEXP);
    Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP);
    Rcpp::traits::input_parameter< bool >::type hasColNames(hasColNamesSEXP);
    Rcpp::traits::input_parameter< bool >::type skipEmptyRows(skipEmptyRowsSEXP);
    Rcpp::traits::input_parameter< Function >::type clean_names(clean_namesSEXP);
    __result = Rcpp::wrap(readWorkbook2(v, r, string_refs, is_date, nRows, hasColNames, skipEmptyRows, clean_names));
    return __result;
END_RCPP
}
