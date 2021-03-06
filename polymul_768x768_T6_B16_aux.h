	.p2align	2,,3
	.syntax		unified
	.text

T6_Mat1:
	.hword	1, 2, 4, 8, 16, 32
	.hword	32, 16, 8, 4, 2, 1
	.hword	1, 4, 16, 64, 256, 1024
	.hword	1024, 256, 64, 16, 4, 1
T_exp_ov_128:
//0-703:2295 
T_exp_ov_128_128:
	.hword	-1
T_exp_add_128_128:
	.hword	352	// #TERMS(128,128)/4
//0-703:2295 704-1055:4590 
T_exp_ov_128_64:
	.hword	-1
T_exp_add_128_64:
	.hword	528	// #TERMS(128,64)/4
//0-703:2295 704-1407:4590 1408-1583:9180 
T_exp_ov_128_32:
	.hword	-1
T_exp_add_128_32:
	.hword	792	// #TERMS(128,32)/4
T_mul_ov_128:
	.hword	2288, 2375
	.hword	-1
	.hword	297	// #TERMS(128,16)/4
	// max size = 22869 @ 2823
T_col_128_ov:
T_col_ov_128_16:
// overflow ranges: 0-2816: mod 16 2816-3168: 2-13  mod 16 3168-3872: mod 16 3872-4576: 5-9  13-13  mod 16 4576-4736: mod 16
	.hword 2816, 0, 0
	.hword 3168, 2, 2, 12, 4
	.hword 3872, 0, -2
	.hword 4576, 4, 5, 5, 3, 1, 7
	.hword 4736, 0, -5
	.hword	-1
T_col_add_128_16:
	.hword	1584	// =#shift/8, #iterations*4
T_col_ov_128_32:
// overflow ranges: 0-3136: 8-23  mod 32
	.hword 3136, 2, 8, 16, 16
	.hword	-1
T_col_add_128_32:
	.hword	1056	// =#shift/8, #iterations*4
T_col_ov_128_64:
// overflow ranges: 0-2048: 16-28  34-46  mod 64
	.hword 2048, 4, 16, 13, 5, 13, 33
	.hword	-1
T_col_add_128_64:
	.hword	704	// =#shift/8, #iterations*4
T6_Mat2:
	.hword	-4, -4, -1893, -2054, -651, 1024, -868, 1241, -266, -1585, -1851
	.hword	-1440, 16, 1088, 1088, -17, -17, 1736, 1736, -1298, -1298, 0
	.hword	1169, 1169, -46, 68, -1428, 1455, 49, -22, -633, -1298, -1931
	.hword	1512, -85, -101, -101, 373, 373, 17, 17, -72, -72, 0
	.hword	-1457, -1457, -2124, -2031, 644, -1361, 644, -1361, 1798, 0, 1798
	.hword	-360, 1237, 1377, 1377, -1508, -1508, -1152, -1152, 72, 72, 0
	.hword	1440, 1440, -1202, -1088, -535, -606, -2012, 871, -633, 1298, 665
	.hword	287, -1169, -68, -68, 1152, 1152, -601, -601, 1298, 1298, 0
	.hword	-1148, -1148, -1621, -1782, 1970, -512, 2187, -729, -266, 1585, 1319

