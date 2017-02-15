#ifndef _CAVLC_DEFINES_H_
#define _CAVLC_DEFINES_H_

// CAVLC
#define LUMA              0
#define LUMA_INTRA16x16DC 1
#define LUMA_INTRA16x16AC 2

//  coeff_token mapping to TotalCoeff( coeff_token ) and TrailingOnes( coeff_token )
int coeffTokenTable_Length[3][4][17] =
{
	{
		{ 1, 6, 8, 9, 10, 11, 13, 13, 13, 14, 14, 15, 15, 16, 16, 16, 16 },
		{ 0, 2, 6, 8, 9, 10, 11, 13, 13, 14, 14, 15, 15, 15, 16, 16, 16 },
		{ 0, 0, 3, 7, 8, 9, 10, 11, 13, 13, 14, 14, 15, 15, 16, 16, 16 },
		{ 0, 0, 0, 5, 6, 7, 8, 9, 10, 11, 13, 14, 14, 15, 15, 16, 16 },
	},
	{
		{ 2, 6, 6, 7, 8, 8, 9, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14 },
		{ 0, 2, 5, 6, 6, 7, 8, 9, 11, 11, 12, 12, 13, 13, 14, 14, 14 },
		{ 0, 0, 3, 6, 6, 7, 8, 9, 11, 11, 12, 12, 13, 13, 13, 14, 14 },
		{ 0, 0, 0, 4, 4, 5, 6, 6, 7, 9, 11, 11, 12, 13, 13, 13, 14 },
	},
	{
		{ 4, 6, 6, 6, 7, 7, 7, 7, 8, 8, 9, 9, 9, 10, 10, 10, 10 },
		{ 0, 4, 5, 5, 5, 5, 6, 6, 7, 8, 8, 9, 9, 9, 10, 10, 10 },
		{ 0, 0, 4, 5, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 10 },
		{ 0, 0, 0, 4, 4, 4, 4, 4, 5, 6, 7, 8, 8, 9, 10, 10, 10 },
	},

};

int coeffTokenTable_Code[3][4][17] =
{
	{
		{ 1, 5, 7, 7, 7, 7, 15, 11, 8, 15, 11, 15, 11, 15, 11, 7, 4 },
		{ 0, 1, 4, 6, 6, 6, 6, 14, 10, 14, 10, 14, 10, 1, 14, 10, 6 },
		{ 0, 0, 1, 5, 5, 5, 5, 5, 13, 9, 13, 9, 13, 9, 13, 9, 5 },
		{ 0, 0, 0, 3, 3, 4, 4, 4, 4, 4, 12, 12, 8, 12, 8, 12, 8 },
	},
	{
		{ 3, 11, 7, 7, 7, 4, 7, 15, 11, 15, 11, 8, 15, 11, 7, 9, 7 },
		{ 0, 2, 7, 10, 6, 6, 6, 6, 14, 10, 14, 10, 14, 10, 11, 8, 6 },
		{ 0, 0, 3, 9, 5, 5, 5, 5, 13, 9, 13, 9, 13, 9, 6, 10, 5 },
		{ 0, 0, 0, 5, 4, 6, 8, 4, 4, 4, 12, 8, 12, 12, 8, 1, 4 },
	},
	{
		{ 15, 15, 11, 8, 15, 11, 9, 8, 15, 11, 15, 11, 8, 13, 9, 5, 1 },
		{ 0, 14, 15, 12, 10, 8, 14, 10, 14, 14, 10, 14, 10, 7, 12, 8, 4 },
		{ 0, 0, 13, 14, 11, 9, 13, 9, 13, 10, 13, 9, 13, 9, 11, 7, 3 },
		{ 0, 0, 0, 12, 11, 10, 9, 8, 13, 12, 12, 12, 8, 12, 10, 6, 2 },
	},
};

int totalZerosTable_Length[15][16] =
{

	{ 1,3,3,4,4,5,5,6,6,7,7,8,8,9,9,9 },
	{ 3,3,3,3,3,4,4,4,4,5,5,6,6,6,6 },
	{ 4,3,3,3,4,4,3,3,4,5,5,6,5,6 },
	{ 5,3,4,4,3,3,3,4,3,4,5,5,5 },
	{ 4,4,4,3,3,3,3,3,4,5,4,5 },
	{ 6,5,3,3,3,3,3,3,4,3,6 },
	{ 6,5,3,3,3,2,3,4,3,6 },
	{ 6,4,5,3,2,2,3,3,6 },
	{ 6,6,4,2,2,3,2,5 },
	{ 5,5,3,2,2,2,4 },
	{ 4,4,3,3,1,3 },
	{ 4,4,2,1,3 },
	{ 3,3,1,2 },
	{ 2,2,1 },
	{ 1,1 },
};

int totalZerosTable_Code[15][16] =
{
	{ 1,3,2,3,2,3,2,3,2,3,2,3,2,3,2,1 },
	{ 7,6,5,4,3,5,4,3,2,3,2,3,2,1,0 },
	{ 5,7,6,5,4,3,4,3,2,3,2,1,1,0 },
	{ 3,7,5,4,6,5,4,3,3,2,2,1,0 },
	{ 5,4,3,7,6,5,4,3,2,1,1,0 },
	{ 1,1,7,6,5,4,3,2,1,1,0 },
	{ 1,1,5,4,3,3,2,1,1,0 },
	{ 1,1,1,3,3,2,2,1,0 },
	{ 1,0,1,3,2,1,1,1, },
	{ 1,0,1,3,2,1,1, },
	{ 0,1,1,2,1,3 },
	{ 0,1,1,1,1 },
	{ 0,1,1,1 },
	{ 0,1,1 },
	{ 0,1 },
};

int runBeforeTable_Length[15][16] =
{
	{ 1,1 },
	{ 1,2,2 },
	{ 2,2,2,2 },
	{ 2,2,2,3,3 },
	{ 2,2,3,3,3,3 },
	{ 2,3,3,3,3,3,3 },
	{ 3,3,3,3,3,3,3,4,5,6,7,8,9,10,11 },
};

int runBeforeTable_Code[15][16] =
{
	{ 1,0 },
	{ 1,1,0 },
	{ 3,2,1,0 },
	{ 3,2,1,1,0 },
	{ 3,2,3,2,1,0 },
	{ 3,0,1,3,2,5,4 },
	{ 7,6,5,4,3,2,1,1,1,1,1,1,1,1,1 },
};

#endif