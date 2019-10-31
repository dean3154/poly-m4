	.p2align	2,,3
	.syntax		unified
	.text

T6_Mat1:
	.hword	1, 1, 1, 1, 1, 1
	.hword	1, -1, 1, -1, 1, -1
	.hword	1, 2, 4, 8, 16, 32
	.hword	1, -2, 4, -8, 16, -32
	.hword	32, 16, 8, 4, 2, 1
	.hword	-32, 16, -8, 4, -2, 1
	.hword	1, 4, 16, 64, 256, 1024
	.hword	1, -4, 16, -64, 256, -1024
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
//0-703:2295 704-1407:4590 1408-1583:9180 1584-1935:4590 1936-2287:9180 2288-2375:18360 
T_exp_ov_128_16:
	.hword	2288, 2375
	.hword	-1
T_exp_add_128_16:
	.hword	1188	// #TERMS(128,16)/4
//0-703:2295 704-1407:4590 1408-1583:9180 1584-1935:4590 1936-2287:9180 2288-2375:2295 2376-2727:4590 2728-3079:9180 3080-3167:18360 3168-3343:9180 3344-3519:18360 3520-3563:4590 
T_exp_ov_128_8:
	.hword	3080, 3167
	.hword	3344, 3519
	.hword	-1
T_exp_add_128_8:
	.hword	1782	// #TERMS(128,8)/4
T_mul_ov_128:
	// no multiplicative overflow
	.hword	2673	// #TERMS(128,4)/4
	// max size = 22869 @ 8537
T_col_128_ov:
T_col_ov_128_4:
	.hword	8536, 8710
	.hword	9064, 9414
	.hword	9856, 10206
	.hword	10296, 10470
	.hword	-1
T_col_add_128_4:
	.hword	3564	// =#shift/8, #iterations*4
T_col_ov_128_8:
	/* tailored overflow check
	.hword	2, 5
	.hword	10, 13
	.hword	18, 21
	.hword	26, 29
	.hword	34, 37
	.hword	42, 45
	.hword	50, 53
	.hword	58, 61
	.hword	66, 69
	.hword	74, 77
	.hword	82, 85
	.hword	90, 93
	.hword	98, 101
	.hword	106, 109
	.hword	114, 117
	.hword	122, 125
	.hword	130, 133
	.hword	138, 141
	.hword	146, 149
	.hword	154, 157
	.hword	162, 165
	.hword	170, 173
	.hword	178, 181
	.hword	186, 189
	.hword	194, 197
	.hword	202, 205
	.hword	210, 213
	.hword	218, 221
	.hword	226, 229
	.hword	234, 237
	.hword	242, 245
	.hword	250, 253
	.hword	258, 261
	.hword	266, 269
	.hword	274, 277
	.hword	282, 285
	.hword	290, 293
	.hword	298, 301
	.hword	306, 309
	.hword	314, 317
	.hword	322, 325
	.hword	330, 333
	.hword	338, 341
	.hword	346, 349
	.hword	354, 357
	.hword	362, 365
	.hword	370, 373
	.hword	378, 381
	.hword	386, 389
	.hword	394, 397
	.hword	402, 405
	.hword	410, 413
	.hword	418, 421
	.hword	426, 429
	.hword	434, 437
	.hword	442, 445
	.hword	450, 453
	.hword	458, 461
	.hword	466, 469
	.hword	474, 477
	.hword	482, 485
	.hword	490, 493
	.hword	498, 501
	.hword	506, 509
	.hword	514, 517
	.hword	522, 525
	.hword	530, 533
	.hword	538, 541
	.hword	546, 549
	.hword	554, 557
	.hword	562, 565
	.hword	570, 573
	.hword	578, 581
	.hword	586, 589
	.hword	594, 597
	.hword	602, 605
	.hword	610, 613
	.hword	618, 621
	.hword	626, 629
	.hword	634, 637
	.hword	642, 645
	.hword	650, 653
	.hword	658, 661
	.hword	666, 669
	.hword	674, 677
	.hword	682, 685
	.hword	690, 693
	.hword	698, 701
	.hword	706, 709
	.hword	714, 717
	.hword	722, 725
	.hword	730, 733
	.hword	738, 741
	.hword	746, 749
	.hword	754, 757
	.hword	762, 765
	.hword	770, 773
	.hword	778, 781
	.hword	786, 789
	.hword	794, 797
	.hword	802, 805
	.hword	810, 813
	.hword	818, 821
	.hword	826, 829
	.hword	834, 837
	.hword	842, 845
	.hword	850, 853
	.hword	858, 861
	.hword	866, 869
	.hword	874, 877
	.hword	882, 885
	.hword	890, 893
	.hword	898, 901
	.hword	906, 909
	.hword	914, 917
	.hword	922, 925
	.hword	930, 933
	.hword	938, 941
	.hword	946, 949
	.hword	954, 957
	.hword	962, 965
	.hword	970, 973
	.hword	978, 981
	.hword	986, 989
	.hword	994, 997
	.hword	1002, 1005
	.hword	1010, 1013
	.hword	1018, 1021
	.hword	1026, 1029
	.hword	1034, 1037
	.hword	1042, 1045
	.hword	1050, 1053
	.hword	1058, 1061
	.hword	1066, 1069
	.hword	1074, 1077
	.hword	1082, 1085
	.hword	1090, 1093
	.hword	1098, 1101
	.hword	1106, 1109
	.hword	1114, 1117
	.hword	1122, 1125
	.hword	1130, 1133
	.hword	1138, 1141
	.hword	1146, 1149
	.hword	1154, 1157
	.hword	1162, 1165
	.hword	1170, 1173
	.hword	1178, 1181
	.hword	1186, 1189
	.hword	1194, 1197
	.hword	1202, 1205
	.hword	1210, 1213
	.hword	1218, 1221
	.hword	1226, 1229
	.hword	1234, 1237
	.hword	1242, 1245
	.hword	1250, 1253
	.hword	1258, 1261
	.hword	1266, 1269
	.hword	1274, 1277
	.hword	1282, 1285
	.hword	1290, 1293
	.hword	1298, 1301
	.hword	1306, 1309
	.hword	1314, 1317
	.hword	1322, 1325
	.hword	1330, 1333
	.hword	1338, 1341
	.hword	1346, 1349
	.hword	1354, 1357
	.hword	1362, 1365
	.hword	1370, 1373
	.hword	1378, 1381
	.hword	1386, 1389
	.hword	1394, 1397
	.hword	1402, 1405
	.hword	1410, 1413
	.hword	1418, 1421
	.hword	1426, 1429
	.hword	1434, 1437
	.hword	1442, 1445
	.hword	1450, 1453
	.hword	1458, 1461
	.hword	1466, 1469
	.hword	1474, 1477
	.hword	1482, 1485
	.hword	1490, 1493
	.hword	1498, 1501
	.hword	1506, 1509
	.hword	1514, 1517
	.hword	1522, 1525
	.hword	1530, 1533
	.hword	1538, 1541
	.hword	1546, 1549
	.hword	1554, 1557
	.hword	1562, 1565
	.hword	1570, 1573
	.hword	1578, 1581
	.hword	1586, 1589
	.hword	1594, 1597
	.hword	1602, 1605
	.hword	1610, 1613
	.hword	1618, 1621
	.hword	1626, 1629
	.hword	1634, 1637
	.hword	1642, 1645
	.hword	1650, 1653
	.hword	1658, 1661
	.hword	1666, 1669
	.hword	1674, 1677
	.hword	1682, 1685
	.hword	1690, 1693
	.hword	1698, 1701
	.hword	1706, 1709
	.hword	1714, 1717
	.hword	1722, 1725
	.hword	1730, 1733
	.hword	1738, 1741
	.hword	1746, 1749
	.hword	1754, 1757
	.hword	1762, 1765
	.hword	1770, 1773
	.hword	1778, 1781
	.hword	1786, 1789
	.hword	1794, 1797
	.hword	1802, 1805
	.hword	1810, 1813
	.hword	1818, 1821
	.hword	1826, 1829
	.hword	1834, 1837
	.hword	1842, 1845
	.hword	1850, 1853
	.hword	1858, 1861
	.hword	1866, 1869
	.hword	1874, 1877
	.hword	1882, 1885
	.hword	1890, 1893
	.hword	1898, 1901
	.hword	1906, 1909
	.hword	1914, 1917
	.hword	1922, 1925
	.hword	1930, 1933
	.hword	1938, 1941
	.hword	1946, 1949
	.hword	1954, 1957
	.hword	1962, 1965
	.hword	1970, 1973
	.hword	1978, 1981
	.hword	1986, 1989
	.hword	1994, 1997
	.hword	2002, 2005
	.hword	2010, 2013
	.hword	2018, 2021
	.hword	2026, 2029
	.hword	2034, 2037
	.hword	2042, 2045
	.hword	2050, 2053
	.hword	2058, 2061
	.hword	2066, 2069
	.hword	2074, 2077
	.hword	2082, 2085
	.hword	2090, 2093
	.hword	2098, 2101
	.hword	2106, 2109
	.hword	2114, 2117
	.hword	2122, 2125
	.hword	2130, 2133
	.hword	2138, 2141
	.hword	2146, 2149
	.hword	2154, 2157
	.hword	2162, 2165
	.hword	2170, 2173
	.hword	2178, 2181
	.hword	2186, 2189
	.hword	2194, 2197
	.hword	2202, 2205
	.hword	2210, 2213
	.hword	2218, 2221
	.hword	2226, 2229
	.hword	2234, 2237
	.hword	2242, 2245
	.hword	2250, 2253
	.hword	2258, 2261
	.hword	2266, 2269
	.hword	2274, 2277
	.hword	2282, 2285
	.hword	2290, 2293
	.hword	2298, 2301
	.hword	2306, 2309
	.hword	2314, 2317
	.hword	2322, 2325
	.hword	2330, 2333
	.hword	2338, 2341
	.hword	2346, 2349
	.hword	2354, 2357
	.hword	2362, 2365
	.hword	2370, 2373
	.hword	2378, 2381
	.hword	2386, 2389
	.hword	2394, 2397
	.hword	2402, 2405
	.hword	2410, 2413
	.hword	2418, 2421
	.hword	2426, 2429
	.hword	2434, 2437
	.hword	2442, 2445
	.hword	2450, 2453
	.hword	2458, 2461
	.hword	2466, 2469
	.hword	2474, 2477
	.hword	2482, 2485
	.hword	2490, 2493
	.hword	2498, 2501
	.hword	2506, 2509
	.hword	2514, 2517
	.hword	2522, 2525
	.hword	2530, 2533
	.hword	2538, 2541
	.hword	2546, 2549
	.hword	2554, 2557
	.hword	2562, 2565
	.hword	2570, 2573
	.hword	2578, 2581
	.hword	2586, 2589
	.hword	2594, 2597
	.hword	2602, 2605
	.hword	2610, 2613
	.hword	2618, 2621
	.hword	2626, 2629
	.hword	2634, 2637
	.hword	2642, 2645
	.hword	2650, 2653
	.hword	2658, 2661
	.hword	2666, 2669
	.hword	2674, 2677
	.hword	2682, 2685
	.hword	2690, 2693
	.hword	2698, 2701
	.hword	2706, 2709
	.hword	2714, 2717
	.hword	2722, 2725
	.hword	2730, 2733
	.hword	2738, 2741
	.hword	2746, 2749
	.hword	2754, 2757
	.hword	2762, 2765
	.hword	2770, 2773
	.hword	2778, 2781
	.hword	2786, 2789
	.hword	2794, 2797
	.hword	2802, 2805
	.hword	2810, 2813
	.hword	2818, 2821
	.hword	2826, 2829
	.hword	2834, 2837
	.hword	2842, 2845
	.hword	2850, 2853
	.hword	2858, 2861
	.hword	2866, 2869
	.hword	2874, 2877
	.hword	2882, 2885
	.hword	2890, 2893
	.hword	2898, 2901
	.hword	2906, 2909
	.hword	2914, 2917
	.hword	2922, 2925
	.hword	2930, 2933
	.hword	2938, 2941
	.hword	2946, 2949
	.hword	2954, 2957
	.hword	2962, 2965
	.hword	2970, 2973
	.hword	2978, 2981
	.hword	2986, 2989
	.hword	2994, 2997
	.hword	3002, 3005
	.hword	3010, 3013
	.hword	3018, 3021
	.hword	3026, 3029
	.hword	3034, 3037
	.hword	3042, 3045
	.hword	3050, 3053
	.hword	3058, 3061
	.hword	3066, 3069
	.hword	3074, 3077
	.hword	3082, 3085
	.hword	3090, 3093
	.hword	3098, 3101
	.hword	3106, 3109
	.hword	3114, 3117
	.hword	3122, 3125
	.hword	3130, 3133
	.hword	3138, 3141
	.hword	3146, 3149
	.hword	3154, 3157
	.hword	3162, 3165
	.hword	3170, 3173
	.hword	3178, 3181
	.hword	3186, 3189
	.hword	3194, 3197
	.hword	3202, 3205
	.hword	3210, 3213
	.hword	3218, 3221
	.hword	3226, 3229
	.hword	3234, 3237
	.hword	3242, 3245
	.hword	3250, 3253
	.hword	3258, 3261
	.hword	3266, 3269
	.hword	3274, 3277
	.hword	3282, 3285
	.hword	3290, 3293
	.hword	3298, 3301
	.hword	3306, 3309
	.hword	3314, 3317
	.hword	3322, 3325
	.hword	3330, 3333
	.hword	3338, 3341
	.hword	3346, 3349
	.hword	3354, 3357
	.hword	3362, 3365
	.hword	3370, 3373
	.hword	3378, 3381
	.hword	3386, 3389
	.hword	3394, 3397
	.hword	3402, 3405
	.hword	3410, 3413
	.hword	3418, 3421
	.hword	3426, 3429
	.hword	3434, 3437
	.hword	3442, 3445
	.hword	3450, 3453
	.hword	3458, 3461
	.hword	3466, 3469
	.hword	3474, 3477
	.hword	3482, 3485
	.hword	3490, 3493
	.hword	3498, 3501
	.hword	3506, 3509
	.hword	3514, 3517
	.hword	3522, 3525
	.hword	3530, 3533
	.hword	3538, 3541
	.hword	3546, 3549
	.hword	3554, 3557
	.hword	3562, 3565
	.hword	3570, 3573
	.hword	3578, 3581
	.hword	3586, 3589
	.hword	3594, 3597
	.hword	3602, 3605
	.hword	3610, 3613
	.hword	3618, 3621
	.hword	3626, 3629
	.hword	3634, 3637
	.hword	3642, 3645
	.hword	3650, 3653
	.hword	3658, 3661
	.hword	3666, 3669
	.hword	3674, 3677
	.hword	3682, 3685
	.hword	3690, 3693
	.hword	3698, 3701
	.hword	3706, 3709
	.hword	3714, 3717
	.hword	3722, 3725
	.hword	3730, 3733
	.hword	3738, 3741
	.hword	3746, 3749
	.hword	3754, 3757
	.hword	3762, 3765
	.hword	3770, 3773
	.hword	3778, 3781
	.hword	3786, 3789
	.hword	3794, 3797
	.hword	3802, 3805
	.hword	3810, 3813
	.hword	3818, 3821
	.hword	3826, 3829
	.hword	3834, 3837
	.hword	3842, 3845
	.hword	3850, 3853
	.hword	3858, 3861
	.hword	3866, 3869
	.hword	3874, 3877
	.hword	3882, 3885
	.hword	3890, 3893
	.hword	3898, 3901
	.hword	3906, 3909
	.hword	3914, 3917
	.hword	3922, 3925
	.hword	3930, 3933
	.hword	3938, 3941
	.hword	3946, 3949
	.hword	3954, 3957
	.hword	3962, 3965
	.hword	3970, 3973
	.hword	3978, 3981
	.hword	3986, 3989
	.hword	3994, 3997
	.hword	4002, 4005
	.hword	4010, 4013
	.hword	4018, 4021
	.hword	4026, 4029
	.hword	4034, 4037
	.hword	4042, 4045
	.hword	4050, 4053
	.hword	4058, 4061
	.hword	4066, 4069
	.hword	4074, 4077
	.hword	4082, 4085
	.hword	4090, 4093
	.hword	4098, 4101
	.hword	4106, 4109
	.hword	4114, 4117
	.hword	4122, 4125
	.hword	4130, 4133
	.hword	4138, 4141
	.hword	4146, 4149
	.hword	4154, 4157
	.hword	4162, 4165
	.hword	4170, 4173
	.hword	4178, 4181
	.hword	4186, 4189
	.hword	4194, 4197
	.hword	4202, 4205
	.hword	4210, 4213
	.hword	4218, 4221
	.hword	4226, 4229
	.hword	4234, 4237
	.hword	4242, 4245
	.hword	4250, 4253
	.hword	4258, 4261
	.hword	4266, 4269
	.hword	4274, 4277
	.hword	4282, 4285
	.hword	4290, 4293
	.hword	4298, 4301
	.hword	4306, 4309
	.hword	4314, 4317
	.hword	4322, 4325
	.hword	4330, 4333
	.hword	4338, 4341
	.hword	4346, 4349
	.hword	4354, 4357
	.hword	4362, 4365
	.hword	4370, 4373
	.hword	4378, 4381
	.hword	4386, 4389
	.hword	4394, 4397
	.hword	4402, 4405
	.hword	4410, 4413
	.hword	4418, 4421
	.hword	4426, 4429
	.hword	4434, 4437
	.hword	4442, 4445
	.hword	4450, 4453
	.hword	4458, 4461
	.hword	4466, 4469
	.hword	4474, 4477
	.hword	4482, 4485
	.hword	4490, 4493
	.hword	4498, 4501
	.hword	4506, 4509
	.hword	4514, 4517
	.hword	4522, 4525
	.hword	4530, 4533
	.hword	4538, 4541
	.hword	4546, 4549
	.hword	4554, 4557
	.hword	4562, 4565
	.hword	4570, 4573
	.hword	4578, 4581
	.hword	4586, 4589
	.hword	4594, 4597
	.hword	4602, 4605
	.hword	4610, 4613
	.hword	4618, 4621
	.hword	4626, 4629
	.hword	4634, 4637
	.hword	4642, 4645
	.hword	4650, 4653
	.hword	4658, 4661
	.hword	4666, 4669
	.hword	4674, 4677
	.hword	4682, 4685
	.hword	4690, 4693
	.hword	4698, 4701
	.hword	4706, 4709
	.hword	4714, 4717
	.hword	4722, 4725
	.hword	4730, 4733
	.hword	4738, 4741
	.hword	4746, 4749
	.hword	4754, 4757
	.hword	4762, 4765
	.hword	4770, 4773
	.hword	4778, 4781
	.hword	4786, 4789
	.hword	4794, 4797
	.hword	4802, 4805
	.hword	4810, 4813
	.hword	4818, 4821
	.hword	4826, 4829
	.hword	4834, 4837
	.hword	4842, 4845
	.hword	4850, 4853
	.hword	4858, 4861
	.hword	4866, 4869
	.hword	4874, 4877
	.hword	4882, 4885
	.hword	4890, 4893
	.hword	4898, 4901
	.hword	4906, 4909
	.hword	4914, 4917
	.hword	4922, 4925
	.hword	4930, 4933
	.hword	4938, 4941
	.hword	4946, 4949
	.hword	4954, 4957
	.hword	4962, 4965
	.hword	4970, 4973
	.hword	4978, 4981
	.hword	4986, 4989
	.hword	4994, 4997
	.hword	5002, 5005
	.hword	5010, 5013
	.hword	5018, 5021
	.hword	5026, 5029
	.hword	5034, 5037
	.hword	5042, 5045
	.hword	5050, 5053
	.hword	5058, 5061
	.hword	5066, 5069
	.hword	5074, 5077
	.hword	5082, 5085
	.hword	5090, 5093
	.hword	5098, 5101
	.hword	5106, 5109
	.hword	5114, 5117
	.hword	5122, 5125
	.hword	5130, 5133
	.hword	5138, 5141
	.hword	5146, 5149
	.hword	5154, 5157
	.hword	5162, 5165
	.hword	5170, 5173
	.hword	5178, 5181
	.hword	5186, 5189
	.hword	5194, 5197
	.hword	5202, 5205
	.hword	5210, 5213
	.hword	5218, 5221
	.hword	5226, 5229
	.hword	5234, 5237
	.hword	5242, 5245
	.hword	5250, 5253
	.hword	5258, 5261
	.hword	5266, 5269
	.hword	5274, 5277
	.hword	5282, 5285
	.hword	5290, 5293
	.hword	5298, 5301
	.hword	5306, 5309
	.hword	5314, 5317
	.hword	5322, 5325
	.hword	5330, 5333
	.hword	5338, 5341
	.hword	5346, 5349
	.hword	5354, 5357
	.hword	5362, 5365
	.hword	5370, 5373
	.hword	5378, 5381
	.hword	5386, 5389
	.hword	5394, 5397
	.hword	5402, 5405
	.hword	5410, 5413
	.hword	5418, 5421
	.hword	5426, 5429
	.hword	5434, 5437
	.hword	5442, 5445
	.hword	5450, 5453
	.hword	5458, 5461
	.hword	5466, 5469
	.hword	5474, 5477
	.hword	5482, 5485
	.hword	5490, 5493
	.hword	5498, 5501
	.hword	5506, 5509
	.hword	5514, 5517
	.hword	5522, 5525
	.hword	5530, 5533
	.hword	5538, 5541
	.hword	5546, 5549
	.hword	5554, 5557
	.hword	5562, 5565
	.hword	5570, 5573
	.hword	5578, 5581
	.hword	5586, 5589
	.hword	5594, 5597
	.hword	5602, 5605
	.hword	5610, 5613
	.hword	5618, 5621
	.hword	5626, 5629
	.hword	5634, 5637
	.hword	5642, 5645
	.hword	5650, 5653
	.hword	5658, 5661
	.hword	5666, 5669
	.hword	5674, 5677
	.hword	5682, 5685
	.hword	5690, 5693
	.hword	5698, 5701
	.hword	5706, 5709
	.hword	5714, 5717
	.hword	5722, 5725
	.hword	5730, 5733
	.hword	5738, 5741
	.hword	5746, 5749
	.hword	5754, 5757
	.hword	5762, 5765
	.hword	5770, 5773
	.hword	5778, 5781
	.hword	5786, 5789
	.hword	5794, 5797
	.hword	5802, 5805
	.hword	5810, 5813
	.hword	5818, 5821
	.hword	5826, 5829
	.hword	5834, 5837
	.hword	5842, 5845
	.hword	5850, 5853
	.hword	5858, 5861
	.hword	5866, 5869
	.hword	5874, 5877
	.hword	5882, 5885
	.hword	5890, 5893
	.hword	5898, 5901
	.hword	5906, 5909
	.hword	5914, 5917
	.hword	5922, 5925
	.hword	5930, 5933
	.hword	5938, 5941
	.hword	5946, 5949
	.hword	5954, 5957
	.hword	5962, 5965
	.hword	5970, 5973
	.hword	5978, 5981
	.hword	5986, 5989
	.hword	5994, 5997
	.hword	6002, 6005
	.hword	6010, 6013
	.hword	6018, 6021
	.hword	6026, 6029
	.hword	6034, 6037
	.hword	6042, 6045
	.hword	6050, 6053
	.hword	6058, 6061
	.hword	6066, 6069
	.hword	6074, 6077
	.hword	6082, 6085
	.hword	6090, 6093
	.hword	6098, 6101
	.hword	6106, 6109
	.hword	6114, 6117
	.hword	6122, 6125
	.hword	6130, 6133
	.hword	6138, 6141
	.hword	6146, 6149
	.hword	6154, 6157
	.hword	6162, 6165
	.hword	6170, 6173
	.hword	6178, 6181
	.hword	6186, 6189
	.hword	6194, 6197
	.hword	6202, 6205
	.hword	6210, 6213
	.hword	6218, 6221
	.hword	6226, 6229
	.hword	6234, 6237
	.hword	6242, 6245
	.hword	6250, 6253
	.hword	6258, 6261
	.hword	6266, 6269
	.hword	6274, 6277
	.hword	6282, 6285
	.hword	6290, 6293
	.hword	6298, 6301
	.hword	6306, 6309
	.hword	6314, 6317
	.hword	6322, 6325
	.hword	6330, 6333
	.hword	6338, 6341
	.hword	6346, 6349
	.hword	6354, 6357
	.hword	6362, 6365
	.hword	6370, 6373
	.hword	6378, 6381
	.hword	6386, 6389
	.hword	6394, 6397
	.hword	6402, 6405
	.hword	6410, 6413
	.hword	6418, 6421
	.hword	6426, 6429
	.hword	6434, 6437
	.hword	6442, 6445
	.hword	6450, 6453
	.hword	6458, 6461
	.hword	6466, 6469
	.hword	6474, 6477
	.hword	6482, 6485
	.hword	6490, 6493
	.hword	6498, 6501
	.hword	6506, 6509
	.hword	6514, 6517
	.hword	6522, 6525
	.hword	6530, 6533
	.hword	6538, 6541
	.hword	6546, 6549
	.hword	6554, 6557
	.hword	6562, 6565
	.hword	6570, 6573
	.hword	6578, 6581
	.hword	6586, 6589
	.hword	6594, 6597
	.hword	6602, 6605
	.hword	6610, 6613
	.hword	6618, 6621
	.hword	6626, 6629
	.hword	6634, 6637
	.hword	6642, 6645
	.hword	6650, 6653
	.hword	6658, 6661
	.hword	6666, 6669
	.hword	6674, 6677
	.hword	6682, 6685
	.hword	6690, 6693
	.hword	6698, 6701
	.hword	6706, 6709
	.hword	6714, 6717
	.hword	6722, 6725
	.hword	6730, 6733
	.hword	6738, 6741
	.hword	6746, 6749
	.hword	6754, 6757
	.hword	6762, 6765
	.hword	6770, 6773
	.hword	6778, 6781
	.hword	6786, 6789
	.hword	6794, 6797
	.hword	6802, 6805
	.hword	6810, 6813
	.hword	6818, 6821
	.hword	6826, 6829
	.hword	6834, 6837
	.hword	6842, 6845
	.hword	6850, 6853
	.hword	6858, 6861
	.hword	6866, 6869
	.hword	6874, 6877
	.hword	6882, 6885
	.hword	6890, 6893
	.hword	6898, 6901
	.hword	6906, 6909
	.hword	6914, 6917
	.hword	6922, 6925
	.hword	6930, 6933
	.hword	6938, 6941
	.hword	6946, 6949
	.hword	6954, 6957
	.hword	6962, 6965
	.hword	6970, 6973
	.hword	6978, 6981
	.hword	6986, 6989
	.hword	6994, 6997
	.hword	7002, 7005
	.hword	7010, 7013
	.hword	7018, 7021
	.hword	7026, 7029
	.hword	7034, 7037
	.hword	7042, 7045
	.hword	7050, 7053
	.hword	7058, 7061
	.hword	7066, 7069
	.hword	7074, 7077
	.hword	7082, 7085
	.hword	7090, 7093
	.hword	7098, 7101
	.hword	7106, 7109
	.hword	7114, 7117
	.hword	7122, 7125
	.hword	-1
	skipped overflow list */
T_col_add_128_8:
	.hword	2376	// =#shift/8, #iterations*4
T_col_ov_128_16:
	/* tailored overflow check
	.hword	4, 5
	.hword	10, 10
	.hword	20, 21
	.hword	26, 26
	.hword	36, 37
	.hword	42, 42
	.hword	52, 53
	.hword	58, 58
	.hword	68, 69
	.hword	74, 74
	.hword	84, 85
	.hword	90, 90
	.hword	100, 101
	.hword	106, 106
	.hword	116, 117
	.hword	122, 122
	.hword	132, 133
	.hword	138, 138
	.hword	148, 149
	.hword	154, 154
	.hword	164, 165
	.hword	170, 170
	.hword	180, 181
	.hword	186, 186
	.hword	196, 197
	.hword	202, 202
	.hword	212, 213
	.hword	218, 218
	.hword	228, 229
	.hword	234, 234
	.hword	244, 245
	.hword	250, 250
	.hword	260, 261
	.hword	266, 266
	.hword	276, 277
	.hword	282, 282
	.hword	292, 293
	.hword	298, 298
	.hword	308, 309
	.hword	314, 314
	.hword	324, 325
	.hword	330, 330
	.hword	340, 341
	.hword	346, 346
	.hword	356, 357
	.hword	362, 362
	.hword	372, 373
	.hword	378, 378
	.hword	388, 389
	.hword	394, 394
	.hword	404, 405
	.hword	410, 410
	.hword	420, 421
	.hword	426, 426
	.hword	436, 437
	.hword	442, 442
	.hword	452, 453
	.hword	458, 458
	.hword	468, 469
	.hword	474, 474
	.hword	484, 485
	.hword	490, 490
	.hword	500, 501
	.hword	506, 506
	.hword	516, 517
	.hword	522, 522
	.hword	532, 533
	.hword	538, 538
	.hword	548, 549
	.hword	554, 554
	.hword	564, 565
	.hword	570, 570
	.hword	580, 581
	.hword	586, 586
	.hword	596, 597
	.hword	602, 602
	.hword	612, 613
	.hword	618, 618
	.hword	628, 629
	.hword	634, 634
	.hword	644, 645
	.hword	650, 650
	.hword	660, 661
	.hword	666, 666
	.hword	676, 677
	.hword	682, 682
	.hword	692, 693
	.hword	698, 698
	.hword	708, 709
	.hword	714, 714
	.hword	724, 725
	.hword	730, 730
	.hword	740, 741
	.hword	746, 746
	.hword	756, 757
	.hword	762, 762
	.hword	772, 773
	.hword	778, 778
	.hword	788, 789
	.hword	794, 794
	.hword	804, 805
	.hword	810, 810
	.hword	820, 821
	.hword	826, 826
	.hword	836, 837
	.hword	842, 842
	.hword	852, 853
	.hword	858, 858
	.hword	868, 869
	.hword	874, 874
	.hword	884, 885
	.hword	890, 890
	.hword	900, 901
	.hword	906, 906
	.hword	916, 917
	.hword	922, 922
	.hword	932, 933
	.hword	938, 938
	.hword	948, 949
	.hword	954, 954
	.hword	964, 965
	.hword	970, 970
	.hword	980, 981
	.hword	986, 986
	.hword	996, 997
	.hword	1002, 1002
	.hword	1012, 1013
	.hword	1018, 1018
	.hword	1028, 1029
	.hword	1034, 1034
	.hword	1044, 1045
	.hword	1050, 1050
	.hword	1060, 1061
	.hword	1066, 1066
	.hword	1076, 1077
	.hword	1082, 1082
	.hword	1092, 1093
	.hword	1098, 1098
	.hword	1108, 1109
	.hword	1114, 1114
	.hword	1124, 1125
	.hword	1130, 1130
	.hword	1140, 1141
	.hword	1146, 1146
	.hword	1156, 1157
	.hword	1162, 1162
	.hword	1172, 1173
	.hword	1178, 1178
	.hword	1188, 1189
	.hword	1194, 1194
	.hword	1204, 1205
	.hword	1210, 1210
	.hword	1220, 1221
	.hword	1226, 1226
	.hword	1236, 1237
	.hword	1242, 1242
	.hword	1252, 1253
	.hword	1258, 1258
	.hword	1268, 1269
	.hword	1274, 1274
	.hword	1284, 1285
	.hword	1290, 1290
	.hword	1300, 1301
	.hword	1306, 1306
	.hword	1316, 1317
	.hword	1322, 1322
	.hword	1332, 1333
	.hword	1338, 1338
	.hword	1348, 1349
	.hword	1354, 1354
	.hword	1364, 1365
	.hword	1370, 1370
	.hword	1380, 1381
	.hword	1386, 1386
	.hword	1396, 1397
	.hword	1402, 1402
	.hword	1412, 1419
	.hword	1428, 1435
	.hword	1444, 1451
	.hword	1460, 1467
	.hword	1476, 1483
	.hword	1492, 1499
	.hword	1508, 1515
	.hword	1524, 1531
	.hword	1540, 1547
	.hword	1556, 1563
	.hword	1572, 1579
	.hword	1588, 1595
	.hword	1604, 1611
	.hword	1620, 1627
	.hword	1636, 1643
	.hword	1652, 1659
	.hword	1668, 1675
	.hword	1684, 1691
	.hword	1700, 1707
	.hword	1716, 1723
	.hword	1732, 1739
	.hword	1748, 1755
	.hword	1764, 1771
	.hword	1780, 1787
	.hword	1796, 1803
	.hword	1812, 1819
	.hword	1828, 1835
	.hword	1844, 1851
	.hword	1860, 1867
	.hword	1876, 1883
	.hword	1892, 1899
	.hword	1908, 1915
	.hword	1924, 1931
	.hword	1940, 1947
	.hword	1956, 1963
	.hword	1972, 1979
	.hword	1988, 1995
	.hword	2004, 2011
	.hword	2020, 2027
	.hword	2036, 2043
	.hword	2052, 2059
	.hword	2068, 2075
	.hword	2084, 2091
	.hword	2100, 2107
	.hword	2116, 2123
	.hword	2132, 2139
	.hword	2148, 2155
	.hword	2164, 2171
	.hword	2180, 2187
	.hword	2196, 2203
	.hword	2212, 2219
	.hword	2228, 2235
	.hword	2244, 2251
	.hword	2260, 2267
	.hword	2276, 2283
	.hword	2292, 2299
	.hword	2308, 2315
	.hword	2324, 2331
	.hword	2340, 2347
	.hword	2356, 2363
	.hword	2372, 2379
	.hword	2388, 2395
	.hword	2404, 2411
	.hword	2420, 2427
	.hword	2436, 2443
	.hword	2452, 2459
	.hword	2468, 2475
	.hword	2484, 2491
	.hword	2500, 2507
	.hword	2516, 2523
	.hword	2532, 2539
	.hword	2548, 2555
	.hword	2564, 2571
	.hword	2580, 2587
	.hword	2596, 2603
	.hword	2612, 2619
	.hword	2628, 2635
	.hword	2644, 2651
	.hword	2660, 2667
	.hword	2676, 2683
	.hword	2692, 2699
	.hword	2708, 2715
	.hword	2724, 2731
	.hword	2740, 2747
	.hword	2756, 2763
	.hword	2772, 2779
	.hword	2788, 2795
	.hword	2804, 2811
	.hword	2820, 2827
	.hword	2836, 2843
	.hword	2852, 2859
	.hword	2868, 2875
	.hword	2884, 2891
	.hword	2900, 2907
	.hword	2916, 2923
	.hword	2932, 2939
	.hword	2948, 2955
	.hword	2964, 2971
	.hword	2980, 2987
	.hword	2996, 3003
	.hword	3012, 3019
	.hword	3028, 3035
	.hword	3044, 3051
	.hword	3060, 3067
	.hword	3076, 3083
	.hword	3092, 3099
	.hword	3108, 3115
	.hword	3124, 3131
	.hword	3140, 3147
	.hword	3156, 3163
	.hword	3172, 3173
	.hword	3178, 3178
	.hword	3188, 3189
	.hword	3194, 3194
	.hword	3204, 3205
	.hword	3210, 3210
	.hword	3220, 3221
	.hword	3226, 3226
	.hword	3236, 3237
	.hword	3242, 3242
	.hword	3252, 3253
	.hword	3258, 3258
	.hword	3268, 3269
	.hword	3274, 3274
	.hword	3284, 3285
	.hword	3290, 3290
	.hword	3300, 3301
	.hword	3306, 3306
	.hword	3316, 3317
	.hword	3322, 3322
	.hword	3332, 3333
	.hword	3338, 3338
	.hword	3348, 3349
	.hword	3354, 3354
	.hword	3364, 3365
	.hword	3370, 3370
	.hword	3380, 3381
	.hword	3386, 3386
	.hword	3396, 3397
	.hword	3402, 3402
	.hword	3412, 3413
	.hword	3418, 3418
	.hword	3428, 3429
	.hword	3434, 3434
	.hword	3444, 3445
	.hword	3450, 3450
	.hword	3460, 3461
	.hword	3466, 3466
	.hword	3476, 3477
	.hword	3482, 3482
	.hword	3492, 3493
	.hword	3498, 3498
	.hword	3508, 3509
	.hword	3514, 3514
	.hword	3524, 3525
	.hword	3530, 3530
	.hword	3540, 3541
	.hword	3546, 3546
	.hword	3556, 3557
	.hword	3562, 3562
	.hword	3572, 3573
	.hword	3578, 3578
	.hword	3588, 3589
	.hword	3594, 3594
	.hword	3604, 3605
	.hword	3610, 3610
	.hword	3620, 3621
	.hword	3626, 3626
	.hword	3636, 3637
	.hword	3642, 3642
	.hword	3652, 3653
	.hword	3658, 3658
	.hword	3668, 3669
	.hword	3674, 3674
	.hword	3684, 3685
	.hword	3690, 3690
	.hword	3700, 3701
	.hword	3706, 3706
	.hword	3716, 3717
	.hword	3722, 3722
	.hword	3732, 3733
	.hword	3738, 3738
	.hword	3748, 3749
	.hword	3754, 3754
	.hword	3764, 3765
	.hword	3770, 3770
	.hword	3780, 3781
	.hword	3786, 3786
	.hword	3796, 3797
	.hword	3802, 3802
	.hword	3812, 3813
	.hword	3818, 3818
	.hword	3828, 3829
	.hword	3834, 3834
	.hword	3844, 3845
	.hword	3850, 3850
	.hword	3860, 3861
	.hword	3866, 3866
	.hword	3876, 3883
	.hword	3892, 3899
	.hword	3908, 3915
	.hword	3924, 3931
	.hword	3940, 3947
	.hword	3956, 3963
	.hword	3972, 3979
	.hword	3988, 3995
	.hword	4004, 4011
	.hword	4020, 4027
	.hword	4036, 4043
	.hword	4052, 4059
	.hword	4068, 4075
	.hword	4084, 4091
	.hword	4100, 4107
	.hword	4116, 4123
	.hword	4132, 4139
	.hword	4148, 4155
	.hword	4164, 4171
	.hword	4180, 4187
	.hword	4196, 4203
	.hword	4212, 4219
	.hword	4228, 4235
	.hword	4244, 4251
	.hword	4260, 4267
	.hword	4276, 4283
	.hword	4292, 4299
	.hword	4308, 4315
	.hword	4324, 4331
	.hword	4340, 4347
	.hword	4356, 4363
	.hword	4372, 4379
	.hword	4388, 4395
	.hword	4404, 4411
	.hword	4420, 4427
	.hword	4436, 4443
	.hword	4452, 4459
	.hword	4468, 4475
	.hword	4484, 4491
	.hword	4500, 4507
	.hword	4516, 4523
	.hword	4532, 4539
	.hword	4548, 4555
	.hword	4564, 4571
	.hword	4580, 4587
	.hword	4596, 4603
	.hword	4612, 4619
	.hword	4628, 4635
	.hword	4644, 4651
	.hword	4660, 4667
	.hword	4676, 4683
	.hword	4692, 4699
	.hword	4708, 4715
	.hword	4724, 4731
	.hword	4740, 4747
	.hword	-1
	skipped overflow list */
T_col_add_128_16:
	.hword	1584	// =#shift/8, #iterations*4
T_col_ov_128_32:
	.hword	6, 11
	.hword	14, 19
	.hword	22, 27
	.hword	38, 43
	.hword	46, 51
	.hword	54, 59
	.hword	70, 75
	.hword	78, 83
	.hword	86, 91
	.hword	102, 107
	.hword	110, 115
	.hword	118, 123
	.hword	134, 139
	.hword	142, 147
	.hword	150, 155
	.hword	166, 171
	.hword	174, 179
	.hword	182, 187
	.hword	198, 203
	.hword	206, 211
	.hword	214, 219
	.hword	230, 235
	.hword	238, 243
	.hword	246, 251
	.hword	262, 267
	.hword	270, 275
	.hword	278, 283
	.hword	294, 299
	.hword	302, 307
	.hword	310, 315
	.hword	326, 331
	.hword	334, 339
	.hword	342, 347
	.hword	358, 363
	.hword	366, 371
	.hword	374, 379
	.hword	390, 395
	.hword	398, 403
	.hword	406, 411
	.hword	422, 427
	.hword	430, 435
	.hword	438, 443
	.hword	454, 459
	.hword	462, 467
	.hword	470, 475
	.hword	486, 491
	.hword	494, 499
	.hword	502, 507
	.hword	518, 523
	.hword	526, 531
	.hword	534, 539
	.hword	550, 555
	.hword	558, 563
	.hword	566, 571
	.hword	582, 587
	.hword	590, 595
	.hword	598, 603
	.hword	614, 619
	.hword	622, 627
	.hword	630, 635
	.hword	646, 651
	.hword	654, 659
	.hword	662, 667
	.hword	678, 683
	.hword	686, 691
	.hword	694, 699
	.hword	710, 715
	.hword	718, 723
	.hword	726, 731
	.hword	742, 747
	.hword	750, 755
	.hword	758, 763
	.hword	774, 779
	.hword	782, 787
	.hword	790, 795
	.hword	806, 811
	.hword	814, 819
	.hword	822, 827
	.hword	838, 843
	.hword	846, 851
	.hword	854, 859
	.hword	870, 875
	.hword	878, 883
	.hword	886, 891
	.hword	902, 907
	.hword	910, 915
	.hword	918, 923
	.hword	934, 939
	.hword	942, 947
	.hword	950, 955
	.hword	966, 971
	.hword	974, 979
	.hword	982, 987
	.hword	998, 1003
	.hword	1006, 1011
	.hword	1014, 1019
	.hword	1030, 1035
	.hword	1038, 1043
	.hword	1046, 1051
	.hword	1062, 1067
	.hword	1070, 1075
	.hword	1078, 1083
	.hword	1094, 1099
	.hword	1102, 1107
	.hword	1110, 1115
	.hword	1126, 1131
	.hword	1134, 1139
	.hword	1142, 1147
	.hword	1158, 1163
	.hword	1166, 1171
	.hword	1174, 1179
	.hword	1190, 1195
	.hword	1198, 1203
	.hword	1206, 1211
	.hword	1222, 1227
	.hword	1230, 1235
	.hword	1238, 1243
	.hword	1254, 1259
	.hword	1262, 1267
	.hword	1270, 1275
	.hword	1286, 1291
	.hword	1294, 1299
	.hword	1302, 1307
	.hword	1318, 1323
	.hword	1326, 1331
	.hword	1334, 1339
	.hword	1350, 1355
	.hword	1358, 1363
	.hword	1366, 1371
	.hword	1382, 1387
	.hword	1390, 1395
	.hword	1398, 1403
	.hword	1415, 1417
	.hword	1422, 1425
	.hword	1430, 1431
	.hword	1447, 1449
	.hword	1454, 1457
	.hword	1462, 1463
	.hword	1479, 1481
	.hword	1486, 1489
	.hword	1494, 1495
	.hword	1511, 1513
	.hword	1518, 1521
	.hword	1526, 1527
	.hword	1543, 1545
	.hword	1550, 1553
	.hword	1558, 1559
	.hword	1575, 1577
	.hword	1582, 1585
	.hword	1590, 1591
	.hword	1607, 1609
	.hword	1614, 1617
	.hword	1622, 1623
	.hword	1639, 1641
	.hword	1646, 1649
	.hword	1654, 1655
	.hword	1671, 1673
	.hword	1678, 1681
	.hword	1686, 1687
	.hword	1703, 1705
	.hword	1710, 1713
	.hword	1718, 1719
	.hword	1735, 1737
	.hword	1742, 1745
	.hword	1750, 1751
	.hword	1767, 1769
	.hword	1774, 1777
	.hword	1782, 1783
	.hword	1799, 1801
	.hword	1806, 1809
	.hword	1814, 1815
	.hword	1831, 1833
	.hword	1838, 1841
	.hword	1846, 1847
	.hword	1863, 1865
	.hword	1870, 1873
	.hword	1878, 1879
	.hword	1895, 1897
	.hword	1902, 1905
	.hword	1910, 1911
	.hword	1927, 1929
	.hword	1934, 1937
	.hword	1942, 1943
	.hword	1959, 1961
	.hword	1966, 1969
	.hword	1974, 1975
	.hword	1991, 1993
	.hword	1998, 2001
	.hword	2006, 2007
	.hword	2023, 2025
	.hword	2030, 2033
	.hword	2038, 2039
	.hword	2055, 2057
	.hword	2062, 2065
	.hword	2070, 2071
	.hword	2087, 2089
	.hword	2094, 2097
	.hword	2102, 2103
	.hword	2119, 2123
	.hword	2126, 2131
	.hword	2134, 2135
	.hword	2151, 2155
	.hword	2158, 2163
	.hword	2166, 2167
	.hword	2183, 2187
	.hword	2190, 2195
	.hword	2198, 2199
	.hword	2215, 2219
	.hword	2222, 2227
	.hword	2230, 2231
	.hword	2247, 2251
	.hword	2254, 2259
	.hword	2262, 2263
	.hword	2279, 2283
	.hword	2286, 2291
	.hword	2294, 2295
	.hword	2311, 2315
	.hword	2318, 2323
	.hword	2326, 2327
	.hword	2343, 2347
	.hword	2350, 2355
	.hword	2358, 2359
	.hword	2375, 2379
	.hword	2382, 2387
	.hword	2390, 2391
	.hword	2407, 2411
	.hword	2414, 2419
	.hword	2422, 2423
	.hword	2439, 2443
	.hword	2446, 2451
	.hword	2454, 2455
	.hword	2471, 2475
	.hword	2478, 2483
	.hword	2486, 2487
	.hword	2503, 2507
	.hword	2510, 2515
	.hword	2518, 2519
	.hword	2535, 2539
	.hword	2542, 2547
	.hword	2550, 2551
	.hword	2567, 2571
	.hword	2574, 2579
	.hword	2582, 2583
	.hword	2599, 2603
	.hword	2606, 2611
	.hword	2614, 2615
	.hword	2631, 2635
	.hword	2638, 2643
	.hword	2646, 2647
	.hword	2663, 2667
	.hword	2670, 2675
	.hword	2678, 2679
	.hword	2695, 2699
	.hword	2702, 2707
	.hword	2710, 2711
	.hword	2727, 2731
	.hword	2734, 2739
	.hword	2742, 2743
	.hword	2759, 2763
	.hword	2766, 2771
	.hword	2774, 2775
	.hword	2791, 2795
	.hword	2798, 2803
	.hword	2806, 2807
	.hword	2824, 2825
	.hword	2830, 2833
	.hword	2838, 2839
	.hword	2856, 2857
	.hword	2862, 2865
	.hword	2870, 2871
	.hword	2888, 2889
	.hword	2894, 2897
	.hword	2902, 2903
	.hword	2920, 2921
	.hword	2926, 2929
	.hword	2934, 2935
	.hword	2952, 2953
	.hword	2958, 2961
	.hword	2966, 2967
	.hword	2984, 2985
	.hword	2990, 2993
	.hword	2998, 2999
	.hword	3016, 3017
	.hword	3022, 3025
	.hword	3030, 3031
	.hword	3048, 3049
	.hword	3054, 3057
	.hword	3062, 3063
	.hword	3080, 3081
	.hword	3086, 3089
	.hword	3094, 3095
	.hword	3112, 3113
	.hword	3118, 3121
	.hword	3126, 3127
	.hword	3144, 3145
	.hword	3150, 3153
	.hword	3158, 3159
	.hword	-1
T_col_add_128_32:
	.hword	1056	// =#shift/8, #iterations*4
T_col_ov_128_64:
	.hword	10, 13
	.hword	16, 21
	.hword	26, 29
	.hword	34, 37
	.hword	42, 46
	.hword	50, 53
	.hword	74, 77
	.hword	80, 85
	.hword	90, 93
	.hword	98, 101
	.hword	106, 110
	.hword	114, 117
	.hword	138, 141
	.hword	144, 149
	.hword	154, 157
	.hword	162, 165
	.hword	170, 174
	.hword	178, 181
	.hword	202, 205
	.hword	208, 213
	.hword	218, 221
	.hword	226, 229
	.hword	234, 238
	.hword	242, 245
	.hword	266, 269
	.hword	272, 277
	.hword	282, 285
	.hword	290, 293
	.hword	298, 302
	.hword	306, 309
	.hword	330, 333
	.hword	336, 341
	.hword	346, 349
	.hword	354, 357
	.hword	362, 366
	.hword	370, 373
	.hword	394, 397
	.hword	400, 405
	.hword	410, 413
	.hword	418, 421
	.hword	426, 430
	.hword	434, 437
	.hword	458, 461
	.hword	464, 469
	.hword	474, 477
	.hword	482, 485
	.hword	490, 494
	.hword	498, 501
	.hword	522, 525
	.hword	528, 533
	.hword	538, 541
	.hword	546, 549
	.hword	554, 558
	.hword	562, 565
	.hword	586, 589
	.hword	592, 597
	.hword	602, 605
	.hword	610, 613
	.hword	618, 622
	.hword	626, 629
	.hword	650, 653
	.hword	656, 661
	.hword	666, 669
	.hword	674, 677
	.hword	682, 686
	.hword	690, 693
	.hword	714, 717
	.hword	720, 725
	.hword	730, 733
	.hword	738, 741
	.hword	746, 750
	.hword	754, 757
	.hword	778, 781
	.hword	784, 789
	.hword	794, 797
	.hword	802, 805
	.hword	810, 814
	.hword	818, 821
	.hword	842, 845
	.hword	848, 853
	.hword	858, 861
	.hword	866, 869
	.hword	874, 878
	.hword	882, 885
	.hword	906, 909
	.hword	912, 917
	.hword	922, 925
	.hword	930, 933
	.hword	938, 942
	.hword	946, 949
	.hword	970, 973
	.hword	976, 981
	.hword	986, 989
	.hword	994, 997
	.hword	1002, 1006
	.hword	1010, 1013
	.hword	1034, 1037
	.hword	1040, 1045
	.hword	1050, 1053
	.hword	1058, 1061
	.hword	1066, 1070
	.hword	1074, 1077
	.hword	1098, 1101
	.hword	1104, 1109
	.hword	1114, 1117
	.hword	1122, 1125
	.hword	1130, 1134
	.hword	1138, 1141
	.hword	1162, 1165
	.hword	1168, 1173
	.hword	1178, 1181
	.hword	1186, 1189
	.hword	1194, 1198
	.hword	1202, 1205
	.hword	1226, 1229
	.hword	1232, 1237
	.hword	1242, 1245
	.hword	1250, 1253
	.hword	1258, 1262
	.hword	1266, 1269
	.hword	1290, 1293
	.hword	1296, 1301
	.hword	1306, 1309
	.hword	1314, 1317
	.hword	1322, 1326
	.hword	1330, 1333
	.hword	1354, 1357
	.hword	1360, 1365
	.hword	1370, 1373
	.hword	1378, 1381
	.hword	1386, 1390
	.hword	1394, 1397
	.hword	1418, 1421
	.hword	1424, 1429
	.hword	1434, 1437
	.hword	1442, 1445
	.hword	1450, 1454
	.hword	1458, 1461
	.hword	1482, 1485
	.hword	1488, 1493
	.hword	1498, 1501
	.hword	1506, 1509
	.hword	1514, 1518
	.hword	1522, 1525
	.hword	1546, 1549
	.hword	1552, 1557
	.hword	1562, 1565
	.hword	1570, 1573
	.hword	1578, 1582
	.hword	1586, 1589
	.hword	1610, 1613
	.hword	1616, 1621
	.hword	1626, 1629
	.hword	1634, 1637
	.hword	1642, 1646
	.hword	1650, 1653
	.hword	1674, 1677
	.hword	1680, 1685
	.hword	1690, 1693
	.hword	1698, 1701
	.hword	1706, 1710
	.hword	1714, 1717
	.hword	1738, 1741
	.hword	1744, 1749
	.hword	1754, 1757
	.hword	1762, 1765
	.hword	1770, 1774
	.hword	1778, 1781
	.hword	1802, 1805
	.hword	1808, 1813
	.hword	1818, 1821
	.hword	1826, 1829
	.hword	1834, 1838
	.hword	1842, 1845
	.hword	1866, 1869
	.hword	1872, 1877
	.hword	1882, 1885
	.hword	1890, 1893
	.hword	1898, 1902
	.hword	1906, 1909
	.hword	1930, 1933
	.hword	1936, 1941
	.hword	1946, 1949
	.hword	1954, 1957
	.hword	1962, 1966
	.hword	1970, 1973
	.hword	1994, 1997
	.hword	2000, 2005
	.hword	2010, 2013
	.hword	2018, 2021
	.hword	2026, 2030
	.hword	2034, 2037
	.hword	2058, 2061
	.hword	2064, 2069
	.hword	2074, 2077
	.hword	2082, 2085
	.hword	2090, 2094
	.hword	2098, 2101
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
