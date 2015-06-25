//global transformation data
float shadowPoly_GLOBAL[9]={
0.000000, 0.000000, 0.000000, //rotation
0.000000, 0.000000, 0.000000, //location
1.000000, 1.000000, 1.000000, //size
};

//transformation data
float shadowPoly_TRANS[9]={
//data block 0
0.000000, -0.000000, 0.000000,
0.000000, 0.000000, 0.000000,
10.000000, 10.000000, 10.000000,
};

//point data
float shadowPoly_POINT[57]={
//data array 0
0.000000, 1.000000, 0.050000,
0.500000, 0.866025, 0.050000,
0.866025, 0.500000, 0.050000,
1.000000, 0.000000, 0.050000,
0.866025, -0.500000, 0.050000,
0.500000, -0.866025, 0.050000,
0.000000, -1.000000, 0.050000,
-0.500000, -0.866026, 0.050000,
-0.866025, -0.500000, 0.050000,
-1.000000, -0.000000, 0.050000,
-0.866026, 0.499999, 0.050000,
-0.500001, 0.866025, 0.050000,
-0.493717, -0.493717, 0.050000,
0.493717, 0.493717, 0.050000,
0.715785, 0.016577, 0.050000,
-0.016577, -0.715785, 0.050000,
0.016577, 0.715785, 0.050000,
-0.715785, -0.016577, 0.050000,
1.746917, 1.746917, 1.878569,
};

//line data
int shadowPoly_LINE[60]={
//data array 0
3, 1, 0, 18,
3, 2, 1, 18,
3, 3, 2, 18,
3, 4, 3, 18,
3, 5, 4, 18,
3, 6, 5, 18,
3, 7, 6, 18,
3, 8, 7, 18,
3, 9, 8, 18,
3, 10, 9, 18,
3, 11, 10, 18,
3, 0, 11, 18,
3, 13, 12, 18,
3, 14, 15, 18,
3, 16, 17, 18,
};

//color data
int shadowPoly_COLOR[15]={
//data array 0
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
0x888888,
};

//point data array sizes
int shadowPoly_POINTDATSZ[1]={
57,
};

//line data array sizes
int shadowPoly_LINEDATSZ[1]={
60,
};

//color data array sizes
int shadowPoly_COLORDATSZ[1]={
15,
};

//number of meshes
int shadowPoly_MESHCNT = 1;