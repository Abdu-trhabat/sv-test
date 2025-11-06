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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch191Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 0;
signed short int var_1_2 = -8;
signed short int var_1_3 = -256;
signed short int var_1_5 = 64;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 5;
unsigned long int var_1_9 = 10;
unsigned long int var_1_10 = 128;
unsigned char var_1_11 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 64;
double var_1_17 = 9.25;
double var_1_18 = 99999.25;
double var_1_19 = 499.109;
signed char var_1_20 = -1;
signed char var_1_21 = 4;
signed char var_1_22 = 0;
signed char var_1_23 = 5;
double var_1_24 = 16.6;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
signed char var_1_28 = -50;
double var_1_29 = 200.25;
double var_1_30 = 63.5;
signed char var_1_31 = -1;
double var_1_32 = 0.5;
signed char var_1_33 = 8;
double var_1_34 = 1.15;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
signed long int var_1_38 = -500;
signed short int var_1_39 = -256;
signed short int var_1_40 = 5;
signed short int var_1_41 = 500;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 0;
unsigned long int last_1_var_1_9 = 10;
unsigned long int last_1_var_1_10 = 128;
unsigned char last_1_var_1_11 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch191Filler_PE_CN
	/* 22L, 253L, 987L, 1010L, 1145L, 1309L) */ if (/* 6L, 227L, 228L, 988L, 1011L, 1129L, 1310L) */ ((/* 4L, 225L, 229L, 989L, 1012L, 1127L, 1311L) */ ((last_1_var_1_9) < (last_1_var_1_10))) || (var_1_13))) {
		/* 21L, 252L, 993L, 1016L, 1144L, 1317L) */ var_1_25 = (
			/* 20L, 251L, 996L, 1019L, 1143L, 1320L) */ ((
				/* 14L, 245L, 997L, 1020L, 1137L, 1321L) */ ((
					/* 11L, 243L, 998L, 1021L, 1134L, 1322L) */ ((
						var_1_7
					) | (
						var_1_22
					))
				) > (
					last_1_var_1_1
				))
			) && (
				/* 19L, 250L, 1002L, 1025L, 1142L, 1327L) */ ((
					/* 17L, 248L, 1003L, 1026L, 1140L, 1328L) */ ((
						var_1_19
					) < (
						var_1_18
					))
				) && (
					var_1_26
				))
			))
		);
	}


	// From: Req4Batch191Filler_PE_CN
	/* 1236L, 131L, 717L, 738L) */ if (var_1_25) {
		/* 1238L, 123L, 719L, 740L) */ if (/* 1239L, 106L, 107L, 720L, 741L) */ (! (/* 1240L, 105L, 108L, 721L, 742L) */ (! (/* 1241L, 104L, 109L, 722L, 743L) */ ((var_1_3) < (var_1_5))))))) {
			/* 1244L, 122L, 725L, 746L) */ var_1_11 = (
				/* 1247L, 121L, 728L, 749L) */ ((
					var_1_25
				) || (
					var_1_13
				))
			);
		}
	} else {
		/* 1250L, 130L, 731L, 752L) */ var_1_11 = (
			/* 1253L, 129L, 734L, 755L) */ ((
				var_1_13
			) && (
				var_1_14
			))
		);
	}


	// From: Req1Batch191Filler_PE_CN
	signed short int stepLocal_0 = var_1_2;
	/* 1198L, 38L, 347L, 369L, 1098L) */ if (/* 1184L, 8L, 9L, 348L, 370L, 1084L) */ ((stepLocal_0) >= (/* 1183L, 7L, 11L, 350L, 372L, 1083L) */ (max (/* 1183L, 7L, 11L, 350L, 372L, 1083L) */ (/* 1181L, 5L, 12L, 351L, 373L, 1081L) */ (max (/* 1181L, 5L, 12L, 351L, 373L, 1081L) */ (var_1_3) , (last_1_var_1_1)))) , (var_1_5)))))) {
		/* 1190L, 28L, 356L, 378L, 1090L) */ var_1_1 = (
			/* 1189L, 27L, 359L, 381L, 1089L) */ (max (
				/* 1189L, 27L, 359L, 381L, 1089L) */ (
					var_1_6
				) , (
					var_1_7
				)
			))
		);
	} else {
		/* 1197L, 36L, 362L, 384L, 1097L) */ if (last_1_var_1_11) {
			/* 1196L, 35L, 364L, 386L, 1096L) */ var_1_1 = (
				var_1_6
			);
		}
	}


	// From: Req2Batch191Filler_PE_CN
	/* 1204L, 55L, 437L, 450L) */ if (var_1_11) {
		/* 1206L, 50L, 439L, 452L) */ var_1_9 = (
			1000u
		);
	} else {
		/* 1210L, 54L, 443L, 456L) */ var_1_9 = (
			var_1_6
		);
	}


	// From: Req3Batch191Filler_PE_CN
	unsigned char stepLocal_1 = var_1_25;
	/* 1232L, 93L, 519L, 536L) */ if (/* 1224L, 71L, 72L, 520L, 537L) */ ((/* 1223L, 69L, 73L, 521L, 538L) */ ((var_1_6) >= (/* 1222L, 68L, 75L, 523L, 540L) */ (min (/* 1222L, 68L, 75L, 523L, 540L) */ (last_1_var_1_10) , (var_1_1)))))) && (stepLocal_1))) {
		/* 1231L, 92L, 528L, 545L) */ var_1_10 = (
			/* 1230L, 91L, 531L, 548L) */ (abs (
				/* 1229L, 90L, 532L, 549L) */ (max (
					/* 1229L, 90L, 532L, 549L) */ (
						var_1_6
					) , (
						var_1_7
					)
				))
			))
		);
	}


	// From: Req6Batch191Filler_PE_CN
	/* 1273L, 171L, 862L, 870L) */ var_1_17 = (
		/* 1276L, 170L, 865L, 873L) */ ((
			var_1_18
		) + (
			var_1_19
		))
	);


	// From: Req7Batch191Filler_PE_CN
	/* 1281L, 183L, 894L, 904L) */ var_1_20 = (
		/* 1284L, 182L, 897L, 907L) */ ((
			var_1_21
		) - (
			/* 1286L, 181L, 899L, 909L) */ ((
				var_1_22
			) + (
				var_1_23
			))
		))
	);


	// From: Req8Batch191Filler_PE_CN
	unsigned char stepLocal_2 = var_1_11;
	/* 1303L, 217L, 933L, 946L) */ if (/* 1298L, 198L, 199L, 934L, 947L) */ ((/* 1297L, 196L, 200L, 935L, 948L) */ ((var_1_20) == (/* 1296L, 195L, 202L, 937L, 950L) */ ((var_1_1) * (var_1_22))))) || (stepLocal_2))) {
		/* 1302L, 216L, 941L, 954L) */ var_1_24 = (
			var_1_18
		);
	}


	// From: Req5Batch191Filler_PE_CN
	/* 1261L, 152L, 805L, 820L) */ if (/* 1262L, 139L, 140L, 806L, 821L) */ ((var_1_1) > (var_1_10))) {
		/* 1265L, 151L, 809L, 824L) */ var_1_15 = (
			/* 1268L, 150L, 812L, 827L) */ ((
				10
			) + (
				var_1_16
			))
		);
	}


	// From: CodeObject1
	/* 57L) */ var_1_27 = (
		1
	);


	// From: CodeObject2
	/* 114L) */ if (/* 71L, 70L) */ ((/* 72L, 64L) */ ((var_1_29) + (var_1_30))) > (/* 75L, 69L) */ ((/* 76L, 66L) */ (- (1.5))) / (/* 78L, 68L) */ (abs (5.9))))))) {
		/* 108L) */ if (var_1_27) {
			/* 95L) */ var_1_28 = (
				var_1_31
			);
		} else {
			/* 107L) */ var_1_28 = (
				-100
			);
		}
	} else {
		/* 113L) */ var_1_28 = (
			var_1_31
		);
	}


	// From: CodeObject3
	/* 250L) */ if (/* 125L, 124L) */ ((/* 126L, 122L) */ ((var_1_31) > (/* 128L, 121L) */ (max (/* 128L, 121L) */ (var_1_28) , (var_1_33)))))) && (var_1_27))) {
		/* 144L) */ var_1_32 = (
			/* 143L) */ (min (
				/* 143L) */ (
					9.6
				) , (
					var_1_34
				)
			))
		);
	} else {
		/* 248L) */ if (var_1_27) {
			/* 151L) */ var_1_32 = (
				var_1_34
			);
		} else {
			/* 247L) */ var_1_32 = (
				15.5
			);
		}
	}


	// From: CodeObject4
	/* 284L) */ if (/* 260L, 259L) */ ((var_1_30) < (/* 262L, 258L) */ (max (/* 262L, 258L) */ (/* 263L, 256L) */ (abs (64.25))) , (var_1_32)))))) {
		/* 277L) */ var_1_35 = (
			/* 276L) */ ((
				var_1_36
			) || (
				var_1_37
			))
		);
	} else {
		/* 283L) */ var_1_35 = (
			/* 282L) */ (! (
				/* 281L) */ (! (
					1
				))
			))
		);
	}


	// From: CodeObject5
	/* 381L) */ if (/* 300L, 299L) */ ((var_1_34) <= (/* 302L, 298L) */ ((/* 303L, 296L) */ (max (/* 303L, 296L) */ (var_1_30) , (var_1_29)))) + (var_1_32))))) {
		/* 329L) */ if (var_1_27) {
			/* 321L) */ var_1_38 = (
				/* 320L) */ (abs (
					var_1_28
				))
			);
		} else {
			/* 328L) */ var_1_38 = (
				/* 327L) */ ((
					/* 325L) */ (abs (
						var_1_33
					))
				) + (
					var_1_28
				))
			);
		}
	} else {
		/* 379L) */ if (/* 336L, 335L) */ ((/* 337L, 333L) */ (max (/* 337L, 333L) */ (var_1_31) , (var_1_28)))) <= (var_1_33))) {
			/* 377L) */ if (/* 355L, 354L) */ ((/* 356L, 350L) */ ((var_1_29) <= (/* 358L, 349L) */ (max (/* 358L, 349L) */ (var_1_32) , (var_1_30)))))) && (/* 361L, 353L) */ ((var_1_33) <= (var_1_28))))) {
				/* 376L) */ var_1_38 = (
					var_1_31
				);
			}
		}
	}


	// From: CodeObject6
	/* 390L) */ var_1_39 = (
		var_1_40
	);


	// From: CodeObject7
	/* 398L) */ var_1_41 = (
		var_1_28
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -128);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= -32767);
	assume_abort_if_not(var_1_40 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	if (/* 402L, 8L, 16L, 392L, 414L, 1107L, 1334L) */ ((var_1_2) >= (/* 404L, 7L, 18L, 394L, 416L, 1106L, 1336L) */ (max (/* 404L, 7L, 18L, 394L, 416L, 1106L, 1336L) */ (/* 405L, 5L, 19L, 395L, 417L, 1104L, 1337L) */ (max (/* 405L, 5L, 19L, 395L, 417L, 1104L, 1337L) */ (var_1_3) , (last_1_var_1_1)))) , (var_1_5)))))) {
	} else {
		if (last_1_var_1_11) {
		}
	}
	if (var_1_11) {
	} else {
	}
	if (/* 438L, 71L, 79L, 554L, 571L, 1370L) */ ((/* 439L, 69L, 80L, 555L, 572L, 1371L) */ ((var_1_6) >= (/* 441L, 68L, 82L, 557L, 574L, 1373L) */ (min (/* 441L, 68L, 82L, 557L, 574L, 1373L) */ (last_1_var_1_10) , (var_1_1)))))) && (var_1_25))) {
	}
	if (var_1_25) {
		if (/* 457L, 106L, 112L, 762L, 783L, 1389L) */ (! (/* 458L, 105L, 113L, 763L, 784L, 1390L) */ (! (/* 459L, 104L, 114L, 764L, 785L, 1391L) */ ((var_1_3) < (var_1_5))))))) {
		}
	} else {
	}
	if (/* 480L, 139L, 143L, 836L, 851L, 1412L) */ ((var_1_1) > (var_1_10))) {
	}
	if (/* 509L, 198L, 206L, 960L, 973L, 1441L) */ ((/* 510L, 196L, 207L, 961L, 974L, 1442L) */ ((var_1_20) == (/* 512L, 195L, 209L, 963L, 976L, 1444L) */ ((var_1_1) * (var_1_22))))) || (var_1_11))) {
	}
	if (/* 524L, 227L, 233L, 1034L, 1057L, 1155L, 1456L, 32L) */ ((/* 525L, 225L, 234L, 1035L, 1058L, 1153L, 1457L, 30L) */ ((last_1_var_1_9) < (last_1_var_1_10))) || (var_1_13))) {
	}
	return /* 554L) */ ((
	/* 553L) */ ((
		/* 552L) */ ((
			/* 551L) */ ((
				/* 550L) */ ((
					/* 549L) */ ((
						/* 548L) */ ((
							/* 547L) */ ((
								/* 401L, 39L, 391L, 413L, 1121L, 1333L) */ ((
									/* 402L, 8L, 16L, 392L, 414L, 1107L, 1334L) */ ((
										var_1_2
									) >= (
										/* 404L, 7L, 18L, 394L, 416L, 1106L, 1336L) */ (max (
											/* 404L, 7L, 18L, 394L, 416L, 1106L, 1336L) */ (
												/* 405L, 5L, 19L, 395L, 417L, 1104L, 1337L) */ (max (
													/* 405L, 5L, 19L, 395L, 417L, 1104L, 1337L) */ (
														var_1_3
													) , (
														last_1_var_1_1
													)
												))
											) , (
												var_1_5
											)
										))
									))
								) ? (
									/* 410L, 28L, 400L, 422L, 1113L, 1342L) */ ((
										var_1_1
									) == (
										/* 410L, 28L, 400L, 422L, 1113L, 1342L) */ ((unsigned long int) (
											/* 413L, 27L, 403L, 425L, 1112L, 1345L) */ (max (
												/* 413L, 27L, 403L, 425L, 1112L, 1345L) */ (
													var_1_6
												) , (
													var_1_7
												)
											))
										))
									))
								) : (
									/* 416L, 37L, 406L, 428L, 1120L, 1348L) */ ((
										last_1_var_1_11
									) ? (
										/* 419L, 35L, 408L, 430L, 1119L, 1351L) */ ((
											var_1_1
										) == (
											/* 419L, 35L, 408L, 430L, 1119L, 1351L) */ ((unsigned long int) (
												var_1_6
											))
										))
									) : (
										1
									))
								))
							) && (
								/* 426L, 56L, 463L, 476L, 1358L) */ ((
									var_1_11
								) ? (
									/* 428L, 50L, 465L, 478L, 1360L) */ ((
										var_1_9
									) == (
										/* 428L, 50L, 465L, 478L, 1360L) */ ((unsigned long int) (
											1000u
										))
									))
								) : (
									/* 432L, 54L, 469L, 482L, 1364L) */ ((
										var_1_9
									) == (
										/* 432L, 54L, 469L, 482L, 1364L) */ ((unsigned long int) (
											var_1_6
										))
									))
								))
							))
						) && (
							/* 437L, 94L, 553L, 570L, 1369L) */ ((
								/* 438L, 71L, 79L, 554L, 571L, 1370L) */ ((
									/* 439L, 69L, 80L, 555L, 572L, 1371L) */ ((
										var_1_6
									) >= (
										/* 441L, 68L, 82L, 557L, 574L, 1373L) */ (min (
											/* 441L, 68L, 82L, 557L, 574L, 1373L) */ (
												last_1_var_1_10
											) , (
												var_1_1
											)
										))
									))
								) && (
									var_1_25
								))
							) ? (
								/* 446L, 92L, 562L, 579L, 1378L) */ ((
									var_1_10
								) == (
									/* 446L, 92L, 562L, 579L, 1378L) */ ((unsigned long int) (
										/* 449L, 91L, 565L, 582L, 1381L) */ (abs (
											/* 450L, 90L, 566L, 583L, 1382L) */ (max (
												/* 450L, 90L, 566L, 583L, 1382L) */ (
													var_1_6
												) , (
													var_1_7
												)
											))
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 454L, 132L, 759L, 780L, 1386L) */ ((
							var_1_25
						) ? (
							/* 456L, 124L, 761L, 782L, 1388L) */ ((
								/* 457L, 106L, 112L, 762L, 783L, 1389L) */ (! (
									/* 458L, 105L, 113L, 763L, 784L, 1390L) */ (! (
										/* 459L, 104L, 114L, 764L, 785L, 1391L) */ ((
											var_1_3
										) < (
											var_1_5
										))
									))
								))
							) ? (
								/* 462L, 122L, 767L, 788L, 1394L) */ ((
									var_1_11
								) == (
									/* 462L, 122L, 767L, 788L, 1394L) */ ((unsigned char) (
										/* 465L, 121L, 770L, 791L, 1397L) */ ((
											var_1_25
										) || (
											var_1_13
										))
									))
								))
							) : (
								1
							))
						) : (
							/* 468L, 130L, 773L, 794L, 1400L) */ ((
								var_1_11
							) == (
								/* 468L, 130L, 773L, 794L, 1400L) */ ((unsigned char) (
									/* 471L, 129L, 776L, 797L, 1403L) */ ((
										var_1_13
									) && (
										var_1_14
									))
								))
							))
						))
					))
				) && (
					/* 479L, 153L, 835L, 850L, 1411L) */ ((
						/* 480L, 139L, 143L, 836L, 851L, 1412L) */ ((
							var_1_1
						) > (
							var_1_10
						))
					) ? (
						/* 483L, 151L, 839L, 854L, 1415L) */ ((
							var_1_15
						) == (
							/* 483L, 151L, 839L, 854L, 1415L) */ ((unsigned char) (
								/* 486L, 150L, 842L, 857L, 1418L) */ ((
									10
								) + (
									var_1_16
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 491L, 171L, 878L, 886L, 1423L) */ ((
					var_1_17
				) == (
					/* 491L, 171L, 878L, 886L, 1423L) */ ((double) (
						/* 494L, 170L, 881L, 889L, 1426L) */ ((
							var_1_18
						) + (
							var_1_19
						))
					))
				))
			))
		) && (
			/* 499L, 183L, 914L, 924L, 1431L) */ ((
				var_1_20
			) == (
				/* 499L, 183L, 914L, 924L, 1431L) */ ((signed char) (
					/* 502L, 182L, 917L, 927L, 1434L) */ ((
						var_1_21
					) - (
						/* 504L, 181L, 919L, 929L, 1436L) */ ((
							var_1_22
						) + (
							var_1_23
						))
					))
				))
			))
		))
	) && (
		/* 508L, 218L, 959L, 972L, 1440L) */ ((
			/* 509L, 198L, 206L, 960L, 973L, 1441L) */ ((
				/* 510L, 196L, 207L, 961L, 974L, 1442L) */ ((
					var_1_20
				) == (
					/* 512L, 195L, 209L, 963L, 976L, 1444L) */ ((
						var_1_1
					) * (
						var_1_22
					))
				))
			) || (
				var_1_11
			))
		) ? (
			/* 516L, 216L, 967L, 980L, 1448L) */ ((
				var_1_24
			) == (
				/* 516L, 216L, 967L, 980L, 1448L) */ ((double) (
					var_1_18
				))
			))
		) : (
			1
		))
	))
) && (
	/* 523L, 254L, 1033L, 1056L, 1171L, 1455L, 48L) */ ((
		/* 524L, 227L, 233L, 1034L, 1057L, 1155L, 1456L, 32L) */ ((
			/* 525L, 225L, 234L, 1035L, 1058L, 1153L, 1457L, 30L) */ ((
				last_1_var_1_9
			) < (
				last_1_var_1_10
			))
		) || (
			var_1_13
		))
	) ? (
		/* 531L, 252L, 1039L, 1062L, 1170L, 1463L, 47L) */ ((
			var_1_25
		) == (
			/* 531L, 252L, 1039L, 1062L, 1170L, 1463L, 47L) */ ((unsigned char) (
				/* 534L, 251L, 1042L, 1065L, 1169L, 1466L, 46L) */ ((
					/* 535L, 245L, 1043L, 1066L, 1163L, 1467L, 40L) */ ((
						/* 536L, 243L, 1044L, 1067L, 1160L, 1468L, 37L) */ ((
							var_1_7
						) | (
							var_1_22
						))
					) > (
						last_1_var_1_1
					))
				) && (
					/* 541L, 250L, 1048L, 1071L, 1168L, 1473L, 45L) */ ((
						/* 542L, 248L, 1049L, 1072L, 1166L, 1474L, 43L) */ ((
							var_1_19
						) < (
							var_1_18
						))
					) && (
						var_1_26
					))
				))
			))
		))
	) : (
		1
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
