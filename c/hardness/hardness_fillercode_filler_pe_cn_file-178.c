// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch178Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 10;
signed char var_1_2 = -1;
signed char var_1_3 = 5;
signed long int var_1_4 = -4;
signed long int var_1_5 = 256;
signed long int var_1_7 = -64;
signed long int var_1_8 = 8;
signed char var_1_9 = 5;
unsigned short int var_1_10 = 128;
signed char var_1_11 = -8;
signed char var_1_12 = -10;
signed long int var_1_13 = -5;
signed short int var_1_14 = -256;
signed short int var_1_15 = 128;
signed long int var_1_16 = 4;
signed long int var_1_17 = -8;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
signed short int var_1_20 = -1;
signed short int var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 100;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 5;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
double var_1_32 = 127.848;
unsigned short int var_1_33 = 5;
double var_1_34 = 24.625;
double var_1_35 = 3.85;
double var_1_36 = 1000000000000.75;
signed long int var_1_37 = 5;
signed short int var_1_38 = -64;
unsigned char var_1_39 = 100;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 10;
signed long int last_1_var_1_7 = -64;
signed long int last_1_var_1_17 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch178Filler_PE_CN
	signed long int stepLocal_2 = /* 5L, 181L, 185L, 1070L, 1093L, 1293L, 1430L) */ ((var_1_10) / (/* 4L, 180L, 187L, 1072L, 1095L, 1292L, 1432L) */ (min (/* 4L, 180L, 187L, 1072L, 1095L, 1292L, 1432L) */ (var_1_14) , (var_1_15)))));
	signed long int stepLocal_1 = last_1_var_1_17;
	/* 32L, 210L, 1064L, 1087L, 1309L, 1454L) */ if (/* 15L, 170L, 171L, 1065L, 1088L, 1288L, 1438L) */ ((stepLocal_1) <= (last_1_var_1_7))) {
		/* 31L, 208L, 1068L, 1091L, 1308L, 1453L) */ if (/* 19L, 183L, 184L, 1069L, 1092L, 1296L, 1441L) */ ((stepLocal_2) < (last_1_var_1_7))) {
			/* 30L, 207L, 1076L, 1099L, 1307L, 1452L) */ var_1_13 = (
				/* 29L, 206L, 1079L, 1102L, 1306L, 1451L) */ (min (
					/* 29L, 206L, 1079L, 1102L, 1306L, 1451L) */ (
						/* 27L, 204L, 1080L, 1103L, 1304L, 1449L) */ ((
							/* 24L, 202L, 1081L, 1104L, 1301L, 1446L) */ ((
								var_1_10
							) - (
								var_1_16
							))
						) + (
							last_1_var_1_1
						))
					) , (
						var_1_14
					)
				))
			);
		}
	}


	// From: Req5Batch178Filler_PE_CN
	signed char stepLocal_4 = var_1_11;
	signed long int stepLocal_3 = /* 1460L, 219L, 223L, 1159L, 1185L) */ (max (/* 1460L, 219L, 223L, 1159L, 1185L) */ (var_1_13) , (var_1_15)));
	/* 1487L, 260L, 1156L, 1182L) */ if (/* 1468L, 220L, 221L, 1157L, 1183L) */ ((var_1_10) <= (stepLocal_3))) {
		/* 1482L, 254L, 1162L, 1188L) */ if (/* 1473L, 235L, 236L, 1163L, 1189L) */ ((/* 1472L, 233L, 237L, 1164L, 1190L) */ (max (/* 1472L, 233L, 237L, 1164L, 1190L) */ (var_1_13) , (last_1_var_1_17)))) >= (stepLocal_4))) {
			/* 1477L, 249L, 1169L, 1195L) */ var_1_17 = (
				var_1_10
			);
		} else {
			/* 1481L, 253L, 1173L, 1199L) */ var_1_17 = (
				var_1_16
			);
		}
	} else {
		/* 1486L, 259L, 1177L, 1203L) */ var_1_17 = (
			var_1_10
		);
	}


	// From: Req6Batch178Filler_PE_CN
	/* 1493L, 269L, 1261L, 1267L) */ var_1_18 = (
		0
	);


	// From: Req1Batch178Filler_PE_CN
	/* 1339L, 64L, 555L, 590L) */ if (/* 1340L, 10L, 11L, 556L, 591L) */ ((/* 1341L, 4L, 12L, 557L, 592L) */ (min (/* 1341L, 4L, 12L, 557L, 592L) */ (var_1_2) , (var_1_3)))) != (/* 1344L, 9L, 15L, 560L, 595L) */ ((2) + (/* 1346L, 8L, 17L, 562L, 597L) */ ((var_1_4) + (var_1_5))))))) {
		/* 1349L, 58L, 565L, 600L) */ if (/* 1350L, 30L, 31L, 566L, 601L) */ (! (var_1_18))) {
			/* 1352L, 52L, 568L, 603L) */ if (/* 1353L, 37L, 38L, 569L, 604L) */ ((var_1_5) != (var_1_3))) {
				/* 1356L, 47L, 572L, 607L) */ var_1_1 = (
					var_1_2
				);
			} else {
				/* 1360L, 51L, 576L, 611L) */ var_1_1 = (
					var_1_3
				);
			}
		} else {
			/* 1364L, 57L, 580L, 615L) */ var_1_1 = (
				var_1_3
			);
		}
	} else {
		/* 1368L, 63L, 584L, 619L) */ var_1_1 = (
			var_1_2
		);
	}


	// From: Req3Batch178Filler_PE_CN
	signed long int stepLocal_0 = var_1_13;
	/* 1421L, 162L, 988L, 1007L) */ if (/* 1410L, 137L, 138L, 989L, 1008L) */ ((/* 1409L, 135L, 139L, 990L, 1009L) */ ((100) + (/* 1408L, 134L, 141L, 992L, 1011L) */ ((var_1_1) / (var_1_10))))) != (stepLocal_0))) {
		/* 1416L, 157L, 996L, 1015L) */ var_1_9 = (
			/* 1415L, 156L, 999L, 1018L) */ (min (
				/* 1415L, 156L, 999L, 1018L) */ (
					var_1_11
				) , (
					var_1_12
				)
			))
		);
	} else {
		/* 1420L, 161L, 1002L, 1021L) */ var_1_9 = (
			var_1_11
		);
	}


	// From: Req2Batch178Filler_PE_CN
	/* 1375L, 120L, 874L, 903L) */ if (/* 1376L, 74L, 75L, 875L, 904L) */ ((var_1_4) > (var_1_9))) {
		/* 1379L, 114L, 878L, 907L) */ if (/* 1380L, 83L, 84L, 879L, 908L) */ ((var_1_1) <= (var_1_8))) {
			/* 1383L, 112L, 882L, 911L) */ if (/* 1384L, 92L, 93L, 883L, 912L) */ ((var_1_4) < (var_1_1))) {
				/* 1387L, 110L, 886L, 915L) */ if (var_1_18) {
					/* 1389L, 105L, 888L, 917L) */ var_1_7 = (
						var_1_9
					);
				} else {
					/* 1393L, 109L, 892L, 921L) */ var_1_7 = (
						1
					);
				}
			}
		}
	} else {
		/* 1397L, 119L, 896L, 925L) */ var_1_7 = (
			var_1_9
		);
	}


	// From: CodeObject1
	/* 80L) */ if (/* 68L, 67L) */ ((var_1_20) > (/* 70L, 66L) */ (~ (var_1_21))))) {
		/* 79L) */ var_1_19 = (
			var_1_22
		);
	}


	// From: CodeObject2
	/* 98L) */ if (/* 87L, 86L) */ ((var_1_21) <= (-50))) {
		/* 97L) */ var_1_23 = (
			/* 96L) */ (abs (
				var_1_24
			))
		);
	}


	// From: CodeObject3
	/* 146L) */ if (/* 109L, 108L) */ ((/* 110L, 106L) */ ((var_1_23) & (/* 112L, 105L) */ ((var_1_20) ^ (var_1_24))))) >= (var_1_21))) {
		/* 140L) */ if (/* 126L, 125L) */ ((var_1_21) > (var_1_20))) {
			/* 139L) */ var_1_25 = (
				/* 138L) */ (max (
					/* 138L) */ (
						var_1_24
					) , (
						/* 137L) */ ((
							var_1_26
						) + (
							var_1_27
						))
					)
				))
			);
		}
	} else {
		/* 145L) */ var_1_25 = (
			var_1_24
		);
	}


	// From: CodeObject4
	/* 171L) */ if (var_1_19) {
		/* 169L) */ if (var_1_22) {
			/* 163L) */ var_1_28 = (
				/* 162L) */ ((
					var_1_29
				) && (
					var_1_30
				))
			);
		} else {
			/* 168L) */ var_1_28 = (
				/* 167L) */ (! (
					var_1_31
				))
			);
		}
	}


	// From: CodeObject5
	/* 207L) */ if (/* 184L, 183L) */ ((/* 185L, 181L) */ ((/* 186L, 179L) */ ((var_1_27) / (var_1_33))) | (var_1_20))) >= (var_1_21))) {
		/* 206L) */ var_1_32 = (
			/* 205L) */ ((
				var_1_34
			) + (
				/* 204L) */ ((
					/* 202L) */ (abs (
						var_1_35
					))
				) + (
					var_1_36
				))
			))
		);
	}


	// From: CodeObject6
	/* 224L) */ if (var_1_19) {
		/* 223L) */ var_1_37 = (
			/* 222L) */ ((
				/* 218L) */ (min (
					/* 218L) */ (
						var_1_33
					) , (
						var_1_26
					)
				))
			) - (
				/* 221L) */ ((
					1994003362
				) - (
					var_1_27
				))
			))
		);
	}


	// From: CodeObject7
	/* 250L) */ if (/* 234L, 233L) */ ((var_1_20) >= (/* 236L, 232L) */ ((var_1_27) / (var_1_33))))) {
		/* 249L) */ var_1_38 = (
			/* 248L) */ ((
				var_1_24
			) + (
				-16
			))
		);
	}


	// From: CodeObject8
	/* 294L) */ if (/* 262L, 261L) */ ((var_1_30) || (/* 264L, 260L) */ ((32) < (/* 266L, 259L) */ (abs (var_1_27))))))) {
		/* 288L) */ if (/* 277L, 276L) */ ((var_1_26) <= (var_1_27))) {
			/* 287L) */ var_1_39 = (
				/* 286L) */ (abs (
					var_1_24
				))
			);
		}
	} else {
		/* 293L) */ var_1_39 = (
			var_1_24
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65535);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -32768);
	assume_abort_if_not(var_1_14 <= 32767);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32768);
	assume_abort_if_not(var_1_15 <= 32767);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -32768);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65535);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -230584.3009213691400e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (/* 298L, 10L, 20L, 626L, 661L, 1500L) */ ((/* 299L, 4L, 21L, 627L, 662L, 1501L) */ (min (/* 299L, 4L, 21L, 627L, 662L, 1501L) */ (var_1_2) , (var_1_3)))) != (/* 302L, 9L, 24L, 630L, 665L, 1504L) */ ((2) + (/* 304L, 8L, 26L, 632L, 667L, 1506L) */ ((var_1_4) + (var_1_5))))))) {
		if (/* 308L, 30L, 33L, 636L, 671L, 1510L) */ (! (var_1_18))) {
			if (/* 311L, 37L, 41L, 639L, 674L, 1513L) */ ((var_1_5) != (var_1_3))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 334L, 74L, 78L, 933L, 962L, 1536L) */ ((var_1_4) > (var_1_9))) {
		if (/* 338L, 83L, 87L, 937L, 966L, 1540L) */ ((var_1_1) <= (var_1_8))) {
			if (/* 342L, 92L, 96L, 941L, 970L, 1544L) */ ((var_1_4) < (var_1_1))) {
				if (var_1_18) {
				} else {
				}
			}
		}
	} else {
	}
	if (/* 361L, 137L, 145L, 1027L, 1046L, 1563L) */ ((/* 362L, 135L, 146L, 1028L, 1047L, 1564L) */ ((100) + (/* 364L, 134L, 148L, 1030L, 1049L, 1566L) */ ((var_1_1) / (var_1_10))))) != (var_1_13))) {
	} else {
	}
	if (/* 380L, 170L, 174L, 1111L, 1134L, 1315L, 1582L, 39L) */ ((last_1_var_1_17) <= (last_1_var_1_7))) {
		if (/* 386L, 183L, 191L, 1115L, 1138L, 1323L, 1588L, 47L) */ ((/* 387L, 181L, 192L, 1116L, 1139L, 1320L, 1589L, 44L) */ ((var_1_10) / (/* 389L, 180L, 194L, 1118L, 1141L, 1319L, 1591L, 43L) */ (min (/* 389L, 180L, 194L, 1118L, 1141L, 1319L, 1591L, 43L) */ (var_1_14) , (var_1_15)))))) < (last_1_var_1_7))) {
		}
	}
	if (/* 407L, 220L, 226L, 1209L, 1235L, 1609L) */ ((var_1_10) <= (/* 409L, 219L, 228L, 1211L, 1237L, 1611L) */ (max (/* 409L, 219L, 228L, 1211L, 1237L, 1611L) */ (var_1_13) , (var_1_15)))))) {
		if (/* 413L, 235L, 241L, 1215L, 1241L, 1615L) */ ((/* 414L, 233L, 242L, 1216L, 1242L, 1616L) */ (max (/* 414L, 233L, 242L, 1216L, 1242L, 1616L) */ (var_1_13) , (last_1_var_1_17)))) >= (var_1_11))) {
		} else {
		}
	} else {
	}
	return /* 442L) */ ((
	/* 441L) */ ((
		/* 440L) */ ((
			/* 439L) */ ((
				/* 438L) */ ((
					/* 297L, 65L, 625L, 660L, 1499L) */ ((
						/* 298L, 10L, 20L, 626L, 661L, 1500L) */ ((
							/* 299L, 4L, 21L, 627L, 662L, 1501L) */ (min (
								/* 299L, 4L, 21L, 627L, 662L, 1501L) */ (
									var_1_2
								) , (
									var_1_3
								)
							))
						) != (
							/* 302L, 9L, 24L, 630L, 665L, 1504L) */ ((
								2
							) + (
								/* 304L, 8L, 26L, 632L, 667L, 1506L) */ ((
									var_1_4
								) + (
									var_1_5
								))
							))
						))
					) ? (
						/* 307L, 59L, 635L, 670L, 1509L) */ ((
							/* 308L, 30L, 33L, 636L, 671L, 1510L) */ (! (
								var_1_18
							))
						) ? (
							/* 310L, 53L, 638L, 673L, 1512L) */ ((
								/* 311L, 37L, 41L, 639L, 674L, 1513L) */ ((
									var_1_5
								) != (
									var_1_3
								))
							) ? (
								/* 314L, 47L, 642L, 677L, 1516L) */ ((
									var_1_1
								) == (
									/* 314L, 47L, 642L, 677L, 1516L) */ ((signed long int) (
										var_1_2
									))
								))
							) : (
								/* 318L, 51L, 646L, 681L, 1520L) */ ((
									var_1_1
								) == (
									/* 318L, 51L, 646L, 681L, 1520L) */ ((signed long int) (
										var_1_3
									))
								))
							))
						) : (
							/* 322L, 57L, 650L, 685L, 1524L) */ ((
								var_1_1
							) == (
								/* 322L, 57L, 650L, 685L, 1524L) */ ((signed long int) (
									var_1_3
								))
							))
						))
					) : (
						/* 326L, 63L, 654L, 689L, 1528L) */ ((
							var_1_1
						) == (
							/* 326L, 63L, 654L, 689L, 1528L) */ ((signed long int) (
								var_1_2
							))
						))
					))
				) && (
					/* 333L, 121L, 932L, 961L, 1535L) */ ((
						/* 334L, 74L, 78L, 933L, 962L, 1536L) */ ((
							var_1_4
						) > (
							var_1_9
						))
					) ? (
						/* 337L, 115L, 936L, 965L, 1539L) */ ((
							/* 338L, 83L, 87L, 937L, 966L, 1540L) */ ((
								var_1_1
							) <= (
								var_1_8
							))
						) ? (
							/* 341L, 113L, 940L, 969L, 1543L) */ ((
								/* 342L, 92L, 96L, 941L, 970L, 1544L) */ ((
									var_1_4
								) < (
									var_1_1
								))
							) ? (
								/* 345L, 111L, 944L, 973L, 1547L) */ ((
									var_1_18
								) ? (
									/* 347L, 105L, 946L, 975L, 1549L) */ ((
										var_1_7
									) == (
										/* 347L, 105L, 946L, 975L, 1549L) */ ((signed long int) (
											var_1_9
										))
									))
								) : (
									/* 351L, 109L, 950L, 979L, 1553L) */ ((
										var_1_7
									) == (
										/* 351L, 109L, 950L, 979L, 1553L) */ ((signed long int) (
											1
										))
									))
								))
							) : (
								1
							))
						) : (
							1
						))
					) : (
						/* 355L, 119L, 954L, 983L, 1557L) */ ((
							var_1_7
						) == (
							/* 355L, 119L, 954L, 983L, 1557L) */ ((signed long int) (
								var_1_9
							))
						))
					))
				))
			) && (
				/* 360L, 163L, 1026L, 1045L, 1562L) */ ((
					/* 361L, 137L, 145L, 1027L, 1046L, 1563L) */ ((
						/* 362L, 135L, 146L, 1028L, 1047L, 1564L) */ ((
							100
						) + (
							/* 364L, 134L, 148L, 1030L, 1049L, 1566L) */ ((
								var_1_1
							) / (
								var_1_10
							))
						))
					) != (
						var_1_13
					))
				) ? (
					/* 368L, 157L, 1034L, 1053L, 1570L) */ ((
						var_1_9
					) == (
						/* 368L, 157L, 1034L, 1053L, 1570L) */ ((signed char) (
							/* 371L, 156L, 1037L, 1056L, 1573L) */ (min (
								/* 371L, 156L, 1037L, 1056L, 1573L) */ (
									var_1_11
								) , (
									var_1_12
								)
							))
						))
					))
				) : (
					/* 374L, 161L, 1040L, 1059L, 1576L) */ ((
						var_1_9
					) == (
						/* 374L, 161L, 1040L, 1059L, 1576L) */ ((signed char) (
							var_1_11
						))
					))
				))
			))
		) && (
			/* 379L, 211L, 1110L, 1133L, 1336L, 1581L, 60L) */ ((
				/* 380L, 170L, 174L, 1111L, 1134L, 1315L, 1582L, 39L) */ ((
					last_1_var_1_17
				) <= (
					last_1_var_1_7
				))
			) ? (
				/* 385L, 209L, 1114L, 1137L, 1335L, 1587L, 59L) */ ((
					/* 386L, 183L, 191L, 1115L, 1138L, 1323L, 1588L, 47L) */ ((
						/* 387L, 181L, 192L, 1116L, 1139L, 1320L, 1589L, 44L) */ ((
							var_1_10
						) / (
							/* 389L, 180L, 194L, 1118L, 1141L, 1319L, 1591L, 43L) */ (min (
								/* 389L, 180L, 194L, 1118L, 1141L, 1319L, 1591L, 43L) */ (
									var_1_14
								) , (
									var_1_15
								)
							))
						))
					) < (
						last_1_var_1_7
					))
				) ? (
					/* 394L, 207L, 1122L, 1145L, 1334L, 1596L, 58L) */ ((
						var_1_13
					) == (
						/* 394L, 207L, 1122L, 1145L, 1334L, 1596L, 58L) */ ((signed long int) (
							/* 397L, 206L, 1125L, 1148L, 1333L, 1599L, 57L) */ (min (
								/* 397L, 206L, 1125L, 1148L, 1333L, 1599L, 57L) */ (
									/* 398L, 204L, 1126L, 1149L, 1331L, 1600L, 55L) */ ((
										/* 399L, 202L, 1127L, 1150L, 1328L, 1601L, 52L) */ ((
											var_1_10
										) - (
											var_1_16
										))
									) + (
										last_1_var_1_1
									))
								) , (
									var_1_14
								)
							))
						))
					))
				) : (
					1
				))
			) : (
				1
			))
		))
	) && (
		/* 406L, 261L, 1208L, 1234L, 1608L) */ ((
			/* 407L, 220L, 226L, 1209L, 1235L, 1609L) */ ((
				var_1_10
			) <= (
				/* 409L, 219L, 228L, 1211L, 1237L, 1611L) */ (max (
					/* 409L, 219L, 228L, 1211L, 1237L, 1611L) */ (
						var_1_13
					) , (
						var_1_15
					)
				))
			))
		) ? (
			/* 412L, 255L, 1214L, 1240L, 1614L) */ ((
				/* 413L, 235L, 241L, 1215L, 1241L, 1615L) */ ((
					/* 414L, 233L, 242L, 1216L, 1242L, 1616L) */ (max (
						/* 414L, 233L, 242L, 1216L, 1242L, 1616L) */ (
							var_1_13
						) , (
							last_1_var_1_17
						)
					))
				) >= (
					var_1_11
				))
			) ? (
				/* 419L, 249L, 1221L, 1247L, 1621L) */ ((
					var_1_17
				) == (
					/* 419L, 249L, 1221L, 1247L, 1621L) */ ((signed long int) (
						var_1_10
					))
				))
			) : (
				/* 423L, 253L, 1225L, 1251L, 1625L) */ ((
					var_1_17
				) == (
					/* 423L, 253L, 1225L, 1251L, 1625L) */ ((signed long int) (
						var_1_16
					))
				))
			))
		) : (
			/* 427L, 259L, 1229L, 1255L, 1629L) */ ((
				var_1_17
			) == (
				/* 427L, 259L, 1229L, 1255L, 1629L) */ ((signed long int) (
					var_1_10
				))
			))
		))
	))
) && (
	/* 433L, 269L, 1273L, 1279L, 1635L) */ ((
		var_1_18
	) == (
		/* 433L, 269L, 1273L, 1279L, 1635L) */ ((unsigned char) (
			0
		))
	))
))
;
}
int main(void) {
	isInitial = 1;
	initially();

	while (1) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
