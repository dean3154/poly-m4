	.p2align	2,,3
	.syntax		unified
	.text

KA_exp_ov_512:
KA_exp_ov_512_512:
	.hword	-1
KA_exp_add_512_512:
	.hword	128	// #TERMS(512,512)/4
KA_exp_ov_512_256:
	.hword	-1
KA_exp_add_512_256:
	.hword	192	// #TERMS(512,256)/4
KA_exp_ov_512_128:
	.hword	-1
KA_exp_add_512_128:
	.hword	288	// #TERMS(512,128)/4
KA_exp_ov_512_64:
	.hword	832
	.hword	863
	.hword	-1
KA_exp_add_512_64:
	.hword	432	// #TERMS(512,64)/4
KA_exp_ov_512_32:
	.hword	1120
	.hword	1151
	.hword	1216
	.hword	1279
	.hword	-1
KA_exp_add_512_32:
	.hword	648	// #TERMS(512,32)/4
KA_exp_ov_512_16:
	.hword	1552
	.hword	1583
	.hword	1648
	.hword	1711
	.hword	1792
	.hword	1855
	.hword	1872
	.hword	1903
	.hword	-1
KA_exp_add_512_16:
	.hword	972	// #TERMS(512,16)/4
KA_mul_ov_512:
	.hword	2200
	.hword	2201
	.hword	2202
	.hword	2203
	.hword	2204
	.hword	2205
	.hword	2206
	.hword	2207
	.hword	2208
	.hword	2209
	.hword	2210
	.hword	2211
	.hword	2212
	.hword	2213
	.hword	2214
	.hword	2215
	.hword	2216
	.hword	2217
	.hword	2218
	.hword	2219
	.hword	2220
	.hword	2221
	.hword	2222
	.hword	2223
	.hword	2224
	.hword	2225
	.hword	2226
	.hword	2227
	.hword	2228
	.hword	2229
	.hword	2230
	.hword	2231
	.hword	2296
	.hword	2297
	.hword	2298
	.hword	2299
	.hword	2300
	.hword	2301
	.hword	2302
	.hword	2303
	.hword	2304
	.hword	2305
	.hword	2306
	.hword	2307
	.hword	2308
	.hword	2309
	.hword	2310
	.hword	2311
	.hword	2312
	.hword	2313
	.hword	2314
	.hword	2315
	.hword	2316
	.hword	2317
	.hword	2318
	.hword	2319
	.hword	2320
	.hword	2321
	.hword	2322
	.hword	2323
	.hword	2324
	.hword	2325
	.hword	2326
	.hword	2327
	.hword	2328
	.hword	2329
	.hword	2330
	.hword	2331
	.hword	2332
	.hword	2333
	.hword	2334
	.hword	2335
	.hword	2336
	.hword	2337
	.hword	2338
	.hword	2339
	.hword	2340
	.hword	2341
	.hword	2342
	.hword	2343
	.hword	2344
	.hword	2345
	.hword	2346
	.hword	2347
	.hword	2348
	.hword	2349
	.hword	2350
	.hword	2351
	.hword	2352
	.hword	2353
	.hword	2354
	.hword	2355
	.hword	2356
	.hword	2357
	.hword	2358
	.hword	2359
	.hword	2440
	.hword	2441
	.hword	2442
	.hword	2443
	.hword	2444
	.hword	2445
	.hword	2446
	.hword	2447
	.hword	2448
	.hword	2449
	.hword	2450
	.hword	2451
	.hword	2452
	.hword	2453
	.hword	2454
	.hword	2455
	.hword	2456
	.hword	2457
	.hword	2458
	.hword	2459
	.hword	2460
	.hword	2461
	.hword	2462
	.hword	2463
	.hword	2464
	.hword	2465
	.hword	2466
	.hword	2467
	.hword	2468
	.hword	2469
	.hword	2470
	.hword	2471
	.hword	2472
	.hword	2473
	.hword	2474
	.hword	2475
	.hword	2476
	.hword	2477
	.hword	2478
	.hword	2479
	.hword	2480
	.hword	2481
	.hword	2482
	.hword	2483
	.hword	2484
	.hword	2485
	.hword	2486
	.hword	2487
	.hword	2488
	.hword	2489
	.hword	2490
	.hword	2491
	.hword	2492
	.hword	2493
	.hword	2494
	.hword	2495
	.hword	2496
	.hword	2497
	.hword	2498
	.hword	2499
	.hword	2500
	.hword	2501
	.hword	2502
	.hword	2503
	.hword	2520
	.hword	2521
	.hword	2522
	.hword	2523
	.hword	2524
	.hword	2525
	.hword	2526
	.hword	2527
	.hword	2528
	.hword	2529
	.hword	2530
	.hword	2531
	.hword	2532
	.hword	2533
	.hword	2534
	.hword	2535
	.hword	2536
	.hword	2537
	.hword	2538
	.hword	2539
	.hword	2540
	.hword	2541
	.hword	2542
	.hword	2543
	.hword	2544
	.hword	2545
	.hword	2546
	.hword	2547
	.hword	2548
	.hword	2549
	.hword	2550
	.hword	2551
	.hword	2656
	.hword	2657
	.hword	2658
	.hword	2659
	.hword	2660
	.hword	2661
	.hword	2662
	.hword	2663
	.hword	2664
	.hword	2665
	.hword	2666
	.hword	2667
	.hword	2668
	.hword	2669
	.hword	2670
	.hword	2671
	.hword	2672
	.hword	2673
	.hword	2674
	.hword	2675
	.hword	2676
	.hword	2677
	.hword	2678
	.hword	2679
	.hword	2680
	.hword	2681
	.hword	2682
	.hword	2683
	.hword	2684
	.hword	2685
	.hword	2686
	.hword	2687
	.hword	2688
	.hword	2689
	.hword	2690
	.hword	2691
	.hword	2692
	.hword	2693
	.hword	2694
	.hword	2695
	.hword	2696
	.hword	2697
	.hword	2698
	.hword	2699
	.hword	2700
	.hword	2701
	.hword	2702
	.hword	2703
	.hword	2704
	.hword	2705
	.hword	2706
	.hword	2707
	.hword	2708
	.hword	2709
	.hword	2710
	.hword	2711
	.hword	2712
	.hword	2713
	.hword	2714
	.hword	2715
	.hword	2716
	.hword	2717
	.hword	2718
	.hword	2719
	.hword	2736
	.hword	2737
	.hword	2738
	.hword	2739
	.hword	2740
	.hword	2741
	.hword	2742
	.hword	2743
	.hword	2744
	.hword	2745
	.hword	2746
	.hword	2747
	.hword	2748
	.hword	2749
	.hword	2750
	.hword	2751
	.hword	2752
	.hword	2753
	.hword	2754
	.hword	2755
	.hword	2756
	.hword	2757
	.hword	2758
	.hword	2759
	.hword	2760
	.hword	2761
	.hword	2762
	.hword	2763
	.hword	2764
	.hword	2765
	.hword	2766
	.hword	2767
	.hword	2808
	.hword	2809
	.hword	2810
	.hword	2811
	.hword	2812
	.hword	2813
	.hword	2814
	.hword	2815
	.hword	2816
	.hword	2817
	.hword	2818
	.hword	2819
	.hword	2820
	.hword	2821
	.hword	2822
	.hword	2823
	.hword	2824
	.hword	2825
	.hword	2826
	.hword	2827
	.hword	2828
	.hword	2829
	.hword	2830
	.hword	2831
	.hword	2832
	.hword	2833
	.hword	2834
	.hword	2835
	.hword	2836
	.hword	2837
	.hword	2838
	.hword	2839
	.hword	2912
	.hword	2913
	.hword	2914
	.hword	2915
	.hword	-1
	.hword	729	// #TERMS(512,8)/8
KA_col_512_ov:
KA_col_ov_512_8:
KA_col_add_512_8:
	.hword	1944	// =#shift/8, #iterations*4
KA_col_ov_512_16:
	.hword	4
	.hword	11
	.hword	20
	.hword	27
	.hword	36
	.hword	43
	.hword	52
	.hword	59
	.hword	68
	.hword	75
	.hword	84
	.hword	91
	.hword	100
	.hword	107
	.hword	116
	.hword	123
	.hword	132
	.hword	139
	.hword	148
	.hword	155
	.hword	164
	.hword	171
	.hword	180
	.hword	187
	.hword	196
	.hword	203
	.hword	212
	.hword	219
	.hword	228
	.hword	235
	.hword	244
	.hword	251
	.hword	260
	.hword	267
	.hword	276
	.hword	283
	.hword	292
	.hword	299
	.hword	308
	.hword	315
	.hword	324
	.hword	331
	.hword	340
	.hword	347
	.hword	356
	.hword	363
	.hword	372
	.hword	379
	.hword	388
	.hword	395
	.hword	404
	.hword	411
	.hword	420
	.hword	427
	.hword	436
	.hword	443
	.hword	452
	.hword	459
	.hword	468
	.hword	475
	.hword	484
	.hword	491
	.hword	500
	.hword	507
	.hword	516
	.hword	523
	.hword	532
	.hword	539
	.hword	548
	.hword	555
	.hword	564
	.hword	571
	.hword	580
	.hword	587
	.hword	596
	.hword	603
	.hword	612
	.hword	619
	.hword	628
	.hword	635
	.hword	644
	.hword	651
	.hword	660
	.hword	667
	.hword	676
	.hword	683
	.hword	692
	.hword	699
	.hword	708
	.hword	715
	.hword	724
	.hword	731
	.hword	740
	.hword	747
	.hword	756
	.hword	763
	.hword	772
	.hword	779
	.hword	788
	.hword	795
	.hword	804
	.hword	811
	.hword	820
	.hword	827
	.hword	836
	.hword	843
	.hword	852
	.hword	859
	.hword	868
	.hword	875
	.hword	884
	.hword	891
	.hword	900
	.hword	907
	.hword	916
	.hword	923
	.hword	932
	.hword	939
	.hword	948
	.hword	955
	.hword	964
	.hword	971
	.hword	980
	.hword	987
	.hword	996
	.hword	1003
	.hword	1012
	.hword	1019
	.hword	1026
	.hword	1037
	.hword	1042
	.hword	1053
	.hword	1058
	.hword	1069
	.hword	1074
	.hword	1085
	.hword	1090
	.hword	1101
	.hword	1106
	.hword	1117
	.hword	1122
	.hword	1133
	.hword	1138
	.hword	1149
	.hword	1156
	.hword	1163
	.hword	1172
	.hword	1179
	.hword	1188
	.hword	1195
	.hword	1204
	.hword	1211
	.hword	1220
	.hword	1227
	.hword	1236
	.hword	1243
	.hword	1252
	.hword	1259
	.hword	1268
	.hword	1275
	.hword	1284
	.hword	1291
	.hword	1300
	.hword	1307
	.hword	1316
	.hword	1323
	.hword	1332
	.hword	1339
	.hword	1348
	.hword	1355
	.hword	1364
	.hword	1371
	.hword	1380
	.hword	1387
	.hword	1396
	.hword	1403
	.hword	1410
	.hword	1421
	.hword	1426
	.hword	1437
	.hword	1442
	.hword	1453
	.hword	1458
	.hword	1469
	.hword	1474
	.hword	1485
	.hword	1490
	.hword	1501
	.hword	1506
	.hword	1517
	.hword	1522
	.hword	1533
	.hword	1538
	.hword	1549
	.hword	1554
	.hword	1565
	.hword	1570
	.hword	1581
	.hword	1586
	.hword	1597
	.hword	1602
	.hword	1613
	.hword	1618
	.hword	1629
	.hword	1634
	.hword	1645
	.hword	1650
	.hword	1661
	.hword	1668
	.hword	1675
	.hword	1684
	.hword	1691
	.hword	1700
	.hword	1707
	.hword	1716
	.hword	1723
	.hword	1732
	.hword	1739
	.hword	1748
	.hword	1755
	.hword	1764
	.hword	1771
	.hword	1780
	.hword	1787
	.hword	1796
	.hword	1803
	.hword	1812
	.hword	1819
	.hword	1828
	.hword	1835
	.hword	1844
	.hword	1851
	.hword	1860
	.hword	1867
	.hword	1876
	.hword	1883
	.hword	1892
	.hword	1899
	.hword	1908
	.hword	1915
	.hword	1924
	.hword	1931
	.hword	1940
	.hword	1947
	.hword	1956
	.hword	1963
	.hword	1972
	.hword	1979
	.hword	1986
	.hword	1997
	.hword	2002
	.hword	2013
	.hword	2018
	.hword	2029
	.hword	2034
	.hword	2045
	.hword	2050
	.hword	2061
	.hword	2066
	.hword	2077
	.hword	2082
	.hword	2093
	.hword	2098
	.hword	2109
	.hword	2114
	.hword	2125
	.hword	2130
	.hword	2141
	.hword	2146
	.hword	2157
	.hword	2162
	.hword	2173
	.hword	2178
	.hword	2189
	.hword	2194
	.hword	2205
	.hword	2210
	.hword	2221
	.hword	2226
	.hword	2237
	.hword	2244
	.hword	2251
	.hword	2260
	.hword	2267
	.hword	2276
	.hword	2283
	.hword	2292
	.hword	2299
	.hword	2306
	.hword	2317
	.hword	2322
	.hword	2333
	.hword	2338
	.hword	2349
	.hword	2354
	.hword	2365
	.hword	2370
	.hword	2381
	.hword	2386
	.hword	2397
	.hword	2402
	.hword	2413
	.hword	2418
	.hword	2429
	.hword	2436
	.hword	2443
	.hword	2452
	.hword	2459
	.hword	2468
	.hword	2475
	.hword	2484
	.hword	2491
	.hword	2500
	.hword	2507
	.hword	2516
	.hword	2523
	.hword	2532
	.hword	2539
	.hword	2548
	.hword	2555
	.hword	2564
	.hword	2571
	.hword	2580
	.hword	2587
	.hword	2596
	.hword	2603
	.hword	2612
	.hword	2619
	.hword	2628
	.hword	2635
	.hword	2644
	.hword	2651
	.hword	2660
	.hword	2667
	.hword	2676
	.hword	2683
	.hword	2692
	.hword	2699
	.hword	2708
	.hword	2715
	.hword	2724
	.hword	2731
	.hword	2740
	.hword	2747
	.hword	2756
	.hword	2763
	.hword	2772
	.hword	2779
	.hword	2788
	.hword	2795
	.hword	2804
	.hword	2811
	.hword	2820
	.hword	2827
	.hword	2836
	.hword	2843
	.hword	2850
	.hword	2861
	.hword	2866
	.hword	2877
	.hword	2882
	.hword	2893
	.hword	2898
	.hword	2909
	.hword	2914
	.hword	2925
	.hword	2930
	.hword	2941
	.hword	2946
	.hword	2957
	.hword	2962
	.hword	2973
	.hword	2978
	.hword	2989
	.hword	2994
	.hword	3005
	.hword	3010
	.hword	3021
	.hword	3026
	.hword	3037
	.hword	3042
	.hword	3053
	.hword	3058
	.hword	3069
	.hword	3074
	.hword	3085
	.hword	3090
	.hword	3101
	.hword	3108
	.hword	3115
	.hword	3124
	.hword	3131
	.hword	3140
	.hword	3147
	.hword	3156
	.hword	3163
	.hword	3170
	.hword	3181
	.hword	3186
	.hword	3197
	.hword	3202
	.hword	3213
	.hword	3218
	.hword	3229
	.hword	3234
	.hword	3245
	.hword	3250
	.hword	3261
	.hword	3266
	.hword	3277
	.hword	3282
	.hword	3293
	.hword	3300
	.hword	3307
	.hword	3316
	.hword	3323
	.hword	3332
	.hword	3339
	.hword	3348
	.hword	3355
	.hword	3364
	.hword	3371
	.hword	3380
	.hword	3387
	.hword	3396
	.hword	3403
	.hword	3412
	.hword	3419
	.hword	3428
	.hword	3435
	.hword	3444
	.hword	3451
	.hword	3458
	.hword	3469
	.hword	3474
	.hword	3485
	.hword	3490
	.hword	3501
	.hword	3506
	.hword	3517
	.hword	3522
	.hword	3533
	.hword	3538
	.hword	3549
	.hword	3554
	.hword	3565
	.hword	3570
	.hword	3581
	.hword	3588
	.hword	3595
	.hword	3604
	.hword	3611
	.hword	3620
	.hword	3627
	.hword	3636
	.hword	3643
	.hword	3652
	.hword	3659
	.hword	3668
	.hword	3675
	.hword	3684
	.hword	3691
	.hword	3700
	.hword	3707
	.hword	3716
	.hword	3723
	.hword	3732
	.hword	3739
	.hword	3748
	.hword	3755
	.hword	3764
	.hword	3771
	.hword	3780
	.hword	3787
	.hword	3796
	.hword	3803
	.hword	3812
	.hword	3819
	.hword	3828
	.hword	3835
	.hword	3844
	.hword	3851
	.hword	3860
	.hword	3867
	.hword	3874
	.hword	3885
	.hword	-1
KA_col_add_512_16:
	.hword	1296	// =#shift/8, #iterations*4
KA_col_ov_512_32:
	.hword	8
	.hword	12
	.hword	18
	.hword	22
	.hword	40
	.hword	44
	.hword	50
	.hword	54
	.hword	72
	.hword	76
	.hword	82
	.hword	86
	.hword	104
	.hword	108
	.hword	114
	.hword	118
	.hword	136
	.hword	140
	.hword	146
	.hword	150
	.hword	168
	.hword	172
	.hword	178
	.hword	182
	.hword	200
	.hword	204
	.hword	210
	.hword	214
	.hword	232
	.hword	236
	.hword	242
	.hword	246
	.hword	264
	.hword	268
	.hword	274
	.hword	278
	.hword	296
	.hword	300
	.hword	306
	.hword	310
	.hword	328
	.hword	332
	.hword	338
	.hword	342
	.hword	360
	.hword	364
	.hword	370
	.hword	374
	.hword	392
	.hword	396
	.hword	402
	.hword	406
	.hword	424
	.hword	428
	.hword	434
	.hword	438
	.hword	456
	.hword	460
	.hword	466
	.hword	470
	.hword	488
	.hword	492
	.hword	498
	.hword	502
	.hword	520
	.hword	526
	.hword	528
	.hword	535
	.hword	552
	.hword	558
	.hword	560
	.hword	567
	.hword	584
	.hword	590
	.hword	592
	.hword	599
	.hword	616
	.hword	622
	.hword	624
	.hword	631
	.hword	648
	.hword	654
	.hword	656
	.hword	663
	.hword	680
	.hword	686
	.hword	688
	.hword	695
	.hword	712
	.hword	718
	.hword	720
	.hword	727
	.hword	744
	.hword	750
	.hword	752
	.hword	759
	.hword	776
	.hword	782
	.hword	784
	.hword	791
	.hword	808
	.hword	814
	.hword	816
	.hword	823
	.hword	840
	.hword	846
	.hword	848
	.hword	855
	.hword	872
	.hword	878
	.hword	880
	.hword	887
	.hword	904
	.hword	910
	.hword	912
	.hword	919
	.hword	936
	.hword	942
	.hword	944
	.hword	951
	.hword	968
	.hword	974
	.hword	976
	.hword	983
	.hword	1000
	.hword	1006
	.hword	1008
	.hword	1015
	.hword	1032
	.hword	1035
	.hword	1038
	.hword	1041
	.hword	1044
	.hword	1047
	.hword	1064
	.hword	1067
	.hword	1070
	.hword	1073
	.hword	1076
	.hword	1079
	.hword	1096
	.hword	1099
	.hword	1102
	.hword	1105
	.hword	1108
	.hword	1111
	.hword	1128
	.hword	1131
	.hword	1134
	.hword	1137
	.hword	1140
	.hword	1143
	.hword	1160
	.hword	1166
	.hword	1168
	.hword	1175
	.hword	1192
	.hword	1198
	.hword	1200
	.hword	1207
	.hword	1224
	.hword	1230
	.hword	1232
	.hword	1239
	.hword	1256
	.hword	1262
	.hword	1264
	.hword	1271
	.hword	1288
	.hword	1294
	.hword	1296
	.hword	1303
	.hword	1320
	.hword	1326
	.hword	1328
	.hword	1335
	.hword	1352
	.hword	1358
	.hword	1360
	.hword	1367
	.hword	1384
	.hword	1390
	.hword	1392
	.hword	1399
	.hword	1416
	.hword	1419
	.hword	1422
	.hword	1425
	.hword	1428
	.hword	1431
	.hword	1448
	.hword	1451
	.hword	1454
	.hword	1457
	.hword	1460
	.hword	1463
	.hword	1480
	.hword	1483
	.hword	1486
	.hword	1489
	.hword	1492
	.hword	1495
	.hword	1512
	.hword	1515
	.hword	1518
	.hword	1521
	.hword	1524
	.hword	1527
	.hword	1544
	.hword	1547
	.hword	1550
	.hword	1553
	.hword	1556
	.hword	1559
	.hword	1576
	.hword	1579
	.hword	1582
	.hword	1585
	.hword	1588
	.hword	1591
	.hword	1608
	.hword	1611
	.hword	1614
	.hword	1617
	.hword	1620
	.hword	1623
	.hword	1640
	.hword	1643
	.hword	1646
	.hword	1649
	.hword	1652
	.hword	1655
	.hword	1672
	.hword	1676
	.hword	1682
	.hword	1686
	.hword	1704
	.hword	1708
	.hword	1714
	.hword	1718
	.hword	1736
	.hword	1740
	.hword	1746
	.hword	1750
	.hword	1768
	.hword	1772
	.hword	1778
	.hword	1782
	.hword	1800
	.hword	1804
	.hword	1810
	.hword	1814
	.hword	1832
	.hword	1836
	.hword	1842
	.hword	1846
	.hword	1864
	.hword	1868
	.hword	1874
	.hword	1878
	.hword	1896
	.hword	1900
	.hword	1906
	.hword	1910
	.hword	1928
	.hword	1932
	.hword	1938
	.hword	1942
	.hword	1960
	.hword	1964
	.hword	1970
	.hword	1974
	.hword	1992
	.hword	1998
	.hword	2000
	.hword	2007
	.hword	2024
	.hword	2030
	.hword	2032
	.hword	2039
	.hword	2056
	.hword	2062
	.hword	2064
	.hword	2071
	.hword	2088
	.hword	2094
	.hword	2096
	.hword	2103
	.hword	2120
	.hword	2126
	.hword	2128
	.hword	2135
	.hword	2152
	.hword	2158
	.hword	2160
	.hword	2167
	.hword	2184
	.hword	2190
	.hword	2192
	.hword	2199
	.hword	2216
	.hword	2222
	.hword	2224
	.hword	2231
	.hword	2248
	.hword	2251
	.hword	2254
	.hword	2257
	.hword	2260
	.hword	2263
	.hword	2280
	.hword	2283
	.hword	2286
	.hword	2289
	.hword	2292
	.hword	2295
	.hword	2312
	.hword	2318
	.hword	2320
	.hword	2327
	.hword	2344
	.hword	2350
	.hword	2352
	.hword	2359
	.hword	2376
	.hword	2382
	.hword	2384
	.hword	2391
	.hword	2408
	.hword	2414
	.hword	2416
	.hword	2423
	.hword	2440
	.hword	2443
	.hword	2446
	.hword	2449
	.hword	2452
	.hword	2455
	.hword	2472
	.hword	2475
	.hword	2478
	.hword	2481
	.hword	2484
	.hword	2487
	.hword	2504
	.hword	2507
	.hword	2510
	.hword	2513
	.hword	2516
	.hword	2519
	.hword	2536
	.hword	2539
	.hword	2542
	.hword	2545
	.hword	2548
	.hword	2551
	.hword	2568
	.hword	2572
	.hword	2578
	.hword	2582
	.hword	-1
KA_col_add_512_32:
	.hword	864	// =#shift/8, #iterations*4
KA_col_ov_512_64:
	.hword	13
	.hword	19
	.hword	23
	.hword	23
	.hword	28
	.hword	35
	.hword	39
	.hword	39
	.hword	44
	.hword	49
	.hword	55
	.hword	55
	.hword	77
	.hword	83
	.hword	87
	.hword	87
	.hword	92
	.hword	99
	.hword	103
	.hword	103
	.hword	108
	.hword	113
	.hword	119
	.hword	119
	.hword	141
	.hword	147
	.hword	151
	.hword	151
	.hword	156
	.hword	163
	.hword	167
	.hword	167
	.hword	172
	.hword	177
	.hword	183
	.hword	183
	.hword	205
	.hword	211
	.hword	215
	.hword	215
	.hword	220
	.hword	227
	.hword	231
	.hword	231
	.hword	236
	.hword	241
	.hword	247
	.hword	247
	.hword	269
	.hword	275
	.hword	279
	.hword	279
	.hword	284
	.hword	291
	.hword	295
	.hword	295
	.hword	300
	.hword	305
	.hword	311
	.hword	311
	.hword	333
	.hword	339
	.hword	343
	.hword	343
	.hword	348
	.hword	355
	.hword	359
	.hword	359
	.hword	364
	.hword	369
	.hword	375
	.hword	375
	.hword	397
	.hword	403
	.hword	407
	.hword	407
	.hword	412
	.hword	419
	.hword	423
	.hword	423
	.hword	428
	.hword	433
	.hword	439
	.hword	439
	.hword	461
	.hword	467
	.hword	471
	.hword	471
	.hword	476
	.hword	483
	.hword	487
	.hword	487
	.hword	492
	.hword	497
	.hword	503
	.hword	503
	.hword	527
	.hword	531
	.hword	540
	.hword	547
	.hword	556
	.hword	559
	.hword	591
	.hword	595
	.hword	604
	.hword	611
	.hword	620
	.hword	623
	.hword	655
	.hword	659
	.hword	668
	.hword	675
	.hword	684
	.hword	687
	.hword	719
	.hword	723
	.hword	732
	.hword	739
	.hword	748
	.hword	751
	.hword	783
	.hword	787
	.hword	796
	.hword	803
	.hword	812
	.hword	815
	.hword	847
	.hword	851
	.hword	860
	.hword	867
	.hword	876
	.hword	879
	.hword	911
	.hword	915
	.hword	924
	.hword	931
	.hword	940
	.hword	943
	.hword	975
	.hword	979
	.hword	988
	.hword	995
	.hword	1004
	.hword	1007
	.hword	1036
	.hword	1037
	.hword	1040
	.hword	1043
	.hword	1047
	.hword	1047
	.hword	1052
	.hword	1059
	.hword	1063
	.hword	1063
	.hword	1068
	.hword	1071
	.hword	1074
	.hword	1075
	.hword	1100
	.hword	1101
	.hword	1104
	.hword	1107
	.hword	1111
	.hword	1111
	.hword	1116
	.hword	1123
	.hword	1127
	.hword	1127
	.hword	1132
	.hword	1135
	.hword	1138
	.hword	1139
	.hword	1167
	.hword	1171
	.hword	1175
	.hword	1175
	.hword	1180
	.hword	1187
	.hword	1191
	.hword	1191
	.hword	1196
	.hword	1199
	.hword	1231
	.hword	1235
	.hword	1239
	.hword	1239
	.hword	1244
	.hword	1251
	.hword	1255
	.hword	1255
	.hword	1260
	.hword	1263
	.hword	1295
	.hword	1299
	.hword	1303
	.hword	1303
	.hword	1308
	.hword	1315
	.hword	1319
	.hword	1319
	.hword	1324
	.hword	1327
	.hword	1359
	.hword	1363
	.hword	1367
	.hword	1367
	.hword	1372
	.hword	1379
	.hword	1383
	.hword	1383
	.hword	1388
	.hword	1391
	.hword	1420
	.hword	1421
	.hword	1424
	.hword	1427
	.hword	1436
	.hword	1443
	.hword	1452
	.hword	1455
	.hword	1458
	.hword	1459
	.hword	1484
	.hword	1485
	.hword	1488
	.hword	1491
	.hword	1500
	.hword	1507
	.hword	1516
	.hword	1519
	.hword	1522
	.hword	1523
	.hword	1548
	.hword	1549
	.hword	1552
	.hword	1555
	.hword	1564
	.hword	1571
	.hword	1580
	.hword	1583
	.hword	1586
	.hword	1587
	.hword	1612
	.hword	1613
	.hword	1616
	.hword	1619
	.hword	1628
	.hword	1635
	.hword	1644
	.hword	1647
	.hword	1650
	.hword	1651
	.hword	1677
	.hword	1683
	.hword	1687
	.hword	1687
	.hword	1692
	.hword	1699
	.hword	1703
	.hword	1703
	.hword	1708
	.hword	1713
	.hword	1719
	.hword	1719
	.hword	-1
KA_col_add_512_64:
	.hword	576	// =#shift/8, #iterations*4
KA_col_ov_512_128:
	.hword	20
	.hword	22
	.hword	24
	.hword	27
	.hword	32
	.hword	43
	.hword	52
	.hword	60
	.hword	66
	.hword	75
	.hword	84
	.hword	94
	.hword	100
	.hword	102
	.hword	104
	.hword	107
	.hword	148
	.hword	150
	.hword	152
	.hword	155
	.hword	160
	.hword	171
	.hword	180
	.hword	188
	.hword	194
	.hword	203
	.hword	212
	.hword	222
	.hword	228
	.hword	230
	.hword	232
	.hword	235
	.hword	276
	.hword	278
	.hword	280
	.hword	283
	.hword	288
	.hword	299
	.hword	308
	.hword	316
	.hword	322
	.hword	331
	.hword	340
	.hword	350
	.hword	356
	.hword	358
	.hword	360
	.hword	363
	.hword	404
	.hword	406
	.hword	408
	.hword	411
	.hword	416
	.hword	427
	.hword	436
	.hword	444
	.hword	450
	.hword	459
	.hword	468
	.hword	478
	.hword	484
	.hword	486
	.hword	488
	.hword	491
	.hword	532
	.hword	539
	.hword	544
	.hword	555
	.hword	564
	.hword	574
	.hword	576
	.hword	587
	.hword	596
	.hword	607
	.hword	612
	.hword	619
	.hword	660
	.hword	667
	.hword	672
	.hword	683
	.hword	692
	.hword	702
	.hword	704
	.hword	715
	.hword	724
	.hword	735
	.hword	740
	.hword	747
	.hword	788
	.hword	795
	.hword	800
	.hword	811
	.hword	820
	.hword	828
	.hword	834
	.hword	843
	.hword	852
	.hword	862
	.hword	868
	.hword	875
	.hword	916
	.hword	923
	.hword	928
	.hword	939
	.hword	948
	.hword	956
	.hword	962
	.hword	971
	.hword	980
	.hword	990
	.hword	996
	.hword	1003
	.hword	1044
	.hword	1046
	.hword	1048
	.hword	1051
	.hword	1056
	.hword	1067
	.hword	1076
	.hword	1086
	.hword	1088
	.hword	1099
	.hword	1108
	.hword	1119
	.hword	1124
	.hword	1126
	.hword	1128
	.hword	1131
	.hword	-1
KA_col_add_512_128:
	.hword	384	// =#shift/8, #iterations*4
KA_col_ov_512_256:
	.hword	44
	.hword	51
	.hword	61
	.hword	67
	.hword	76
	.hword	83
	.hword	95
	.hword	95
	.hword	108
	.hword	115
	.hword	124
	.hword	131
	.hword	140
	.hword	147
	.hword	159
	.hword	159
	.hword	172
	.hword	179
	.hword	188
	.hword	193
	.hword	204
	.hword	211
	.hword	223
	.hword	223
	.hword	300
	.hword	307
	.hword	317
	.hword	323
	.hword	332
	.hword	339
	.hword	351
	.hword	351
	.hword	364
	.hword	371
	.hword	380
	.hword	387
	.hword	396
	.hword	403
	.hword	415
	.hword	415
	.hword	428
	.hword	435
	.hword	444
	.hword	449
	.hword	460
	.hword	467
	.hword	479
	.hword	479
	.hword	556
	.hword	563
	.hword	575
	.hword	579
	.hword	588
	.hword	595
	.hword	607
	.hword	607
	.hword	620
	.hword	627
	.hword	636
	.hword	643
	.hword	652
	.hword	659
	.hword	671
	.hword	671
	.hword	684
	.hword	691
	.hword	700
	.hword	703
	.hword	716
	.hword	723
	.hword	-1
KA_col_add_512_256:
	.hword	256	// =#shift/8, #iterations*4
