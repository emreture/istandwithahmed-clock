//------------------------------------------------------------------------------
// OCR_A_Extended_M font for PCD8544 library
// =========================================
//    width			: 16 pixels
//    height		: 3 rows (24 pixels)
//    firstASCIIChar: 0x20
//    lastASCIIChar	: 0x7e
//    unknownChar	: '?'
//    data			: 4560 bytes (95 characters * 48 bytes/character)
// http://www.rinkydinkelectronics.com/r_fonts.php
//------------------------------------------------------------------------------
#include "pcd8544.h"

const uint8_t OCR_A_Extended_mFontData[];

char OCR_A_Extended_mFontMap[][2] =
{
	{'Ç', 'C'},{'ç', 'c'},{'Ğ', 'G'},{'ğ', 'g'},{'İ', 'i'},{'ı', 'i'},{'Ö', 'O'},{'ö', 'o'},{'Ş', 'S'},{'ş', 's'},{'Ü', 'U'},{'ü', 'u'}
};

font_t OCR_A_Extended_mFont = {16, 3, 0x20, 0x7e, OCR_A_Extended_mFontMap, sizeof(OCR_A_Extended_mFontMap) / sizeof(*OCR_A_Extended_mFontMap), '?', (uint8_t*)OCR_A_Extended_mFontData};

const uint8_t OCR_A_Extended_mFontData[] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // <space>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // !
	0x00, 0x00, 0x00, 0x1E, 0xFE, 0xFE, 0x3E, 0x06, 0x06, 0x3E, 0xFE, 0xFE, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // "
	0x00, 0x00, 0x00, 0x60, 0x60, 0xFE, 0xFE, 0x60, 0x60, 0xFE, 0xFE, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0xFF, 0xFF, 0x0C, 0x0C, 0xFF, 0xFF, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // #
	0x00, 0x00, 0x00, 0xE0, 0xE0, 0x60, 0x60, 0x7E, 0x7E, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x67, 0x66, 0x66, 0xE6, 0xE6, 0x66, 0x66, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // $
	0x00, 0x00, 0x00, 0x0E, 0x0E, 0x0E, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0x3C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x38, 0x1E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,   // %
	0x00, 0x00, 0x00, 0xE0, 0xF8, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0xF3, 0x3E, 0x1C, 0x3C, 0x76, 0xE3, 0xC1, 0xC0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x06, 0x06, 0x07, 0x03, 0x01, 0x07, 0x06, 0x00, 0x00, 0x00,   // &
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // '
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0x38, 0x0C, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x04, 0x00, 0x00, 0x00, 0x00,   // (
	0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x0C, 0x38, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // )
	0x00, 0x00, 0x00, 0x60, 0xE0, 0x80, 0x80, 0xF8, 0xF8, 0x80, 0x80, 0xC0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x39, 0x1F, 0xFF, 0xFF, 0x1F, 0x39, 0x70, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // *
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x7F, 0x7F, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,   // 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x78, 0x1E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x78, 0x1E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // /
	0x00, 0x00, 0x00, 0xFC, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, 0x00, 0x00,   // 0
	0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x06, 0x06, 0x07, 0x07, 0x00, 0x00, 0x00,   // 1
	0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,   // 2
	0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFF, 0xF9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, 0x00,   // 3
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0xFF, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00,   // 4
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, 0x00, 0x00,   // 5
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x00, 0x00, 0x00,   // 6
	0x00, 0x00, 0x00, 0x0E, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 7
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0x07, 0x07, 0x06, 0x06, 0x07, 0x07, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, 0x00, 0x00,   // 8
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07, 0x07, 0x00, 0x00, 0x00,   // 9
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // :
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,   // ;
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x60, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0E, 0x1F, 0x1B, 0x31, 0x60, 0xE0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,   // <
	0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // =
	0x00, 0x00, 0x00, 0x30, 0x30, 0x60, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xE0, 0x60, 0x31, 0x1B, 0x1F, 0x0E, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // >
	0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x70, 0x38, 0x18, 0x8C, 0x8E, 0xF8, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x78, 0x7C, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ?
	0x00, 0x00, 0x00, 0x18, 0x1C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x03, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x06, 0x07, 0x07, 0x06, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00,   // @
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFE, 0xFE, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x6F, 0x60, 0x60, 0x6F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00,   // A
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0F, 0xFF, 0xF9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00,   // B
	0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x3C, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x7F, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00,   // C
	0x00, 0x00, 0x00, 0x06, 0x06, 0xFE, 0xFE, 0x06, 0x06, 0x0E, 0x3C, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x7F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x07, 0x07, 0x06, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,   // D
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00,   // E
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // F
	0x00, 0x00, 0x00, 0x80, 0xE0, 0x70, 0x3C, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, 0x00, 0x00,   // G
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00,   // H
	0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,   // I
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00,   // J
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0F, 0x1D, 0x38, 0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x04, 0x00, 0x00,   // K
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,   // L
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x1E, 0x38, 0xE0, 0xF0, 0x38, 0x1E, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00,   // M
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x3E, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x01, 0x07, 0x3E, 0xF8, 0xC0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,   // N
	0x00, 0x00, 0x00, 0x00, 0xE0, 0xF8, 0x3E, 0x06, 0x06, 0x3E, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x7F, 0xF0, 0xC0, 0x00, 0x00, 0xC0, 0xF0, 0x7F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,   // O
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // P
	0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x38, 0x1C, 0x0E, 0x06, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xB8, 0xF8, 0xE0, 0x60, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x06, 0x07, 0x03, 0x01, 0x07, 0x07, 0x06, 0x06, 0x00, 0x00, 0x00,   // Q
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x01, 0x07, 0x1F, 0x79, 0xE1, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x00, 0x00, 0x00,   // R
	0x00, 0x00, 0x00, 0x1C, 0x3E, 0xE6, 0xC6, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x01, 0x07, 0x0E, 0x38, 0x70, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, 0x00, 0x00,   // S
	0x00, 0x00, 0x00, 0x1E, 0x1E, 0x06, 0x06, 0xFE, 0xFE, 0x06, 0x06, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // T
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00,   // U
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3F, 0xFC, 0xE0, 0xE0, 0xFC, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // V
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x06, 0x07, 0x07, 0x06, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00,   // W
	0x00, 0x00, 0x00, 0x06, 0x1E, 0x78, 0xE0, 0x80, 0x80, 0xE0, 0x78, 0x1E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x79, 0x1F, 0x1F, 0x79, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x00, 0x00, 0x00,   // X
	0x00, 0x00, 0x00, 0x1E, 0x7E, 0xE0, 0xC0, 0x80, 0x80, 0xC0, 0xE0, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // Y
	0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x86, 0xE6, 0x7E, 0x1E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x78, 0x1E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,   // Z
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x06, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,   // [
	0x00, 0x00, 0x00, 0x06, 0x1E, 0x78, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3C, 0x70, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x00, 0x00,   // <backslash>
	0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x06, 0x07, 0x07, 0x00, 0x00, 0x00,   // ]
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF8, 0x7E, 0x1F, 0x07, 0x07, 0x1F, 0x7E, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,   // _
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0E, 0x0C, 0x0C, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // `
	0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x07, 0x07, 0x00, 0x00, 0x00,   // a
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x83, 0x01, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x03, 0x07, 0x06, 0x06, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,   // b
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x83, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00,   // c
	0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x01, 0x83, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x06, 0x06, 0x06, 0x07, 0x03, 0x07, 0x07, 0x00, 0x00, 0x00,   // d
	0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x31, 0x30, 0x30, 0x30, 0x30, 0x31, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,   // e
	0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xF8, 0xFC, 0xCE, 0xC6, 0xC6, 0xC6, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // f
	0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x81, 0x00, 0x00, 0x00, 0x81, 0xC3, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC1, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xE1, 0x7F, 0x3F, 0x00, 0x00, 0x00,   // g
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00,   // h
	0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC7, 0xC7, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x07, 0x07, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00,   // i
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC7, 0xC7, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x70, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x7F, 0x3F, 0x00, 0x00, 0x00,   // j
	0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x38, 0x3C, 0x6E, 0xC7, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x04, 0x00, 0x00, 0x00,   // k
	0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x07, 0x07, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00,   // l
	0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00,   // m
	0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00,   // n
	0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,   // o
	0x00, 0x00, 0x00, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x83, 0x01, 0x00, 0x00, 0x01, 0x83, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x07, 0x06, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,   // p
	0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x01, 0x83, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x06, 0x06, 0x06, 0x07, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00,   // q
	0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // r
	0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x0C, 0x0C, 0x18, 0x18, 0x30, 0x30, 0xF1, 0xC1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00,   // s
	0x00, 0x00, 0x00, 0xC0, 0xC0, 0xFC, 0xFC, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00,   // t
	0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x06, 0x07, 0x03, 0x01, 0x07, 0x07, 0x00, 0x00, 0x00,   // u
	0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x7C, 0xE0, 0x80, 0x00, 0x80, 0xE0, 0x7C, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // v
	0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x80, 0xFC, 0xFC, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x03, 0x01, 0x01, 0x03, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00,   // w
	0x00, 0x00, 0x00, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xC3, 0xEE, 0x3C, 0x7C, 0xEE, 0xC3, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x00, 0x00, 0x00,   // x
	0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x7C, 0xE0, 0x80, 0x00, 0x80, 0xE0, 0x7C, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0xFB, 0x3F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // y
	0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,   // z
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0xFF, 0xF9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,   // {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // |
	0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF9, 0xFF, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // }
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06, 0x06, 0x06, 0x0E, 0x0C, 0x0C, 0x0C, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00    // ~
};