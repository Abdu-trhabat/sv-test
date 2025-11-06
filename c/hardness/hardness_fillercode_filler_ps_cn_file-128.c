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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch128Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 32;
unsigned char var_1_2 = 0;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 16;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 256;
signed long int var_1_7 = -128;
signed long int var_1_8 = 25;
signed long int var_1_9 = 4;
double var_1_10 = 4.25;
unsigned char var_1_11 = 0;
double var_1_12 = 256.5;
double var_1_13 = 10.5;
double var_1_14 = 8.2;
double var_1_15 = 1000000000000.4;
double var_1_16 = 15.75;
double var_1_17 = 128.6;
double var_1_18 = 25.4;
signed char var_1_19 = -32;
signed char var_1_20 = 32;
unsigned long int var_1_21 = 5;
unsigned long int var_1_22 = 3753087255;
unsigned long int var_1_23 = 16;
signed short int var_1_24 = -32;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 4;
signed short int var_1_29 = 0;
signed short int var_1_30 = -32;
unsigned long int var_1_31 = 0;
unsigned long int var_1_32 = 10;
unsigned long int var_1_33 = 0;
float var_1_34 = 24.6;
float var_1_35 = 4.375;
signed char var_1_36 = 4;
float var_1_37 = 9999999999.75;
signed char var_1_38 = 5;
signed char var_1_39 = 4;
signed char var_1_40 = -50;
signed long int var_1_41 = -8;
unsigned long int var_1_42 = 50;
signed char var_1_43 = 5;
signed long int var_1_44 = 16;
signed long int var_1_45 = 4;
signed long int var_1_46 = 64;
unsigned char var_1_47 = 0;
unsigned long int var_1_48 = 0;
unsigned short int var_1_49 = 1;
unsigned short int var_1_50 = 64;
unsigned short int var_1_51 = 4;
unsigned short int var_1_52 = 8;
unsigned short int var_1_53 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 5L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject2
	/* 39L) */ if (/* 15L, 14L) */ ((/* 16L, 12L) */ (abs (/* 17L, 11L) */ (abs (var_1_30))))) == (var_1_29))) {
		/* 31L) */ var_1_31 = (
			/* 30L) */ (min (
				/* 30L) */ (
					/* 28L) */ (abs (
						var_1_32
					))
				) , (
					var_1_33
				)
			))
		);
	} else {
		/* 38L) */ var_1_31 = (
			/* 37L) */ (abs (
				/* 36L) */ (max (
					/* 36L) */ (
						8u
					) , (
						var_1_33
					)
				))
			))
		);
	}


	// From: CodeObject3
	/* 46L) */ var_1_34 = (
		var_1_35
	);


	// From: CodeObject4
	/* 79L) */ if (/* 57L, 56L) */ ((/* 58L, 54L) */ ((var_1_34) * (/* 60L, 53L) */ (abs (var_1_35))))) <= (var_1_37))) {
		/* 72L) */ var_1_36 = (
			var_1_38
		);
	} else {
		/* 78L) */ var_1_36 = (
			/* 77L) */ ((
				var_1_39
			) + (
				var_1_40
			))
		);
	}


	// From: CodeObject5
	/* 106L) */ if (/* 89L, 88L) */ ((var_1_31) < (/* 91L, 87L) */ ((/* 92L, 85L) */ (abs (var_1_33))) | (var_1_42))))) {
		/* 105L) */ var_1_41 = (
			/* 104L) */ (abs (
				var_1_29
			))
		);
	}


	// From: CodeObject6
	/* 144L) */ if (/* 119L, 118L) */ ((/* 120L, 115L) */ ((/* 121L, 113L) */ (min (/* 121L, 113L) */ (var_1_44) , (var_1_45)))) - (var_1_46))) < (/* 125L, 117L) */ (~ (var_1_30))))) {
		/* 142L) */ if (var_1_47) {
			/* 141L) */ var_1_43 = (
				var_1_39
			);
		}
	}


	// From: CodeObject7
	/* 210L) */ if (/* 151L, 150L) */ ((var_1_39) >= (var_1_36))) {
		/* 204L) */ if (/* 162L, 161L) */ ((/* 163L, 159L) */ ((var_1_44) >> (16))) < (var_1_46))) {
			/* 198L) */ if (/* 178L, 177L) */ (! (/* 179L, 176L) */ ((/* 180L, 174L) */ ((var_1_46) | (var_1_33))) >= (var_1_41))))) {
				/* 193L) */ var_1_48 = (
					var_1_32
				);
			} else {
				/* 197L) */ var_1_48 = (
					var_1_44
				);
			}
		} else {
			/* 203L) */ var_1_48 = (
				5u
			);
		}
	} else {
		/* 209L) */ var_1_48 = (
			var_1_44
		);
	}


	// From: CodeObject8
	/* 226L) */ var_1_49 = (
		/* 225L) */ (max (
			/* 225L) */ (
				/* 223L) */ (max (
					/* 223L) */ (
						/* 220L) */ ((
							var_1_50
						) + (
							var_1_51
						))
					) , (
						/* 222L) */ (abs (
							var_1_52
						))
					)
				))
			) , (
				var_1_53
			)
		))
	);


	// From: Req2Batch128Filler_PS_CN
	unsigned long int stepLocal_2 = var_1_4;
	unsigned char stepLocal_1 = /* 1143L, 85L, 89L, 672L, 696L) */ (! (0));
	/* 1168L, 288L, 670L, 694L) */ if (/* 1150L, 87L, 88L, 671L, 695L) */ ((stepLocal_1) || (var_1_2))) {
		/* 1167L, 286L, 675L, 699L) */ if (var_1_2) {
			/* 1162L, 280L, 677L, 701L) */ if (/* 1153L, 101L, 102L, 678L, 702L) */ ((var_1_3) > (stepLocal_2))) {
				/* 1157L, 111L, 681L, 705L) */ var_1_7 = (
					var_1_8
				);
			} else {
				/* 1161L, 279L, 685L, 709L) */ var_1_7 = (
					var_1_9
				);
			}
		} else {
			/* 1166L, 285L, 689L, 713L) */ var_1_7 = (
				var_1_9
			);
		}
	}


	// From: Req5Batch128Filler_PS_CN
	/* 1235L, 403L, 970L, 983L) */ if (/* 1236L, 388L, 389L, 971L, 984L) */ ((var_1_13) == (0.8))) {
		/* 1239L, 402L, 974L, 987L) */ var_1_21 = (
			/* 1242L, 401L, 977L, 990L) */ ((
				var_1_22
			) - (
				/* 1244L, 400L, 979L, 992L) */ ((
					1281391062u
				) - (
					var_1_23
				))
			))
		);
	}


	// From: Req6Batch128Filler_PS_CN
	/* 1249L, 456L, 1023L, 1045L) */ if (/* 1250L, 420L, 421L, 1024L, 1046L) */ ((/* 1251L, 416L, 422L, 1025L, 1047L) */ ((var_1_26) - (/* 1253L, 415L, 424L, 1027L, 1049L) */ ((var_1_27) + (var_1_28))))) == (/* 1256L, 419L, 427L, 1030L, 1052L) */ ((var_1_23) << (var_1_21))))) {
		/* 1259L, 454L, 1033L, 1055L) */ if (var_1_11) {
			/* 1261L, 445L, 1035L, 1057L) */ var_1_24 = (
				var_1_20
			);
		} else {
			/* 1265L, 453L, 1039L, 1061L) */ var_1_24 = (
				var_1_27
			);
		}
	}


	// From: Req1Batch128Filler_PS_CN
	unsigned char stepLocal_0 = var_1_5;
	/* 1138L, 78L, 462L, 490L) */ if (var_1_2) {
		/* 1133L, 72L, 464L, 492L) */ if (/* 1118L, 10L, 11L, 465L, 493L) */ ((/* 1117L, 8L, 12L, 466L, 494L) */ ((/* 1115L, 6L, 13L, 467L, 495L) */ (~ (var_1_21))) >= (var_1_21))) && (stepLocal_0))) {
			/* 1128L, 66L, 471L, 499L) */ if (var_1_5) {
				/* 1123L, 29L, 473L, 501L) */ var_1_1 = (
					var_1_6
				);
			} else {
				/* 1127L, 65L, 477L, 505L) */ var_1_1 = (
					1u
				);
			}
		} else {
			/* 1132L, 71L, 481L, 509L) */ var_1_1 = (
				var_1_6
			);
		}
	} else {
		/* 1137L, 77L, 485L, 513L) */ var_1_1 = (
			var_1_6
		);
	}


	// From: Req3Batch128Filler_PS_CN
	unsigned char stepLocal_4 = /* 1177L, 297L, 301L, 769L, 809L) */ ((var_1_2) || (var_1_11));
	unsigned long int stepLocal_3 = var_1_6;
	/* 1215L, 352L, 766L, 806L) */ if (/* 1182L, 298L, 299L, 767L, 807L) */ ((var_1_5) || (stepLocal_4))) {
		/* 1202L, 330L, 772L, 812L) */ if (var_1_11) {
			/* 1193L, 321L, 774L, 814L) */ var_1_10 = (
				/* 1192L, 320L, 777L, 817L) */ (min (
					/* 1192L, 320L, 777L, 817L) */ (
						var_1_12
					) , (
						/* 1191L, 319L, 779L, 819L) */ (min (
							/* 1191L, 319L, 779L, 819L) */ (
								/* 1189L, 317L, 780L, 820L) */ (min (
									/* 1189L, 317L, 780L, 820L) */ (
										var_1_13
									) , (
										var_1_14
									)
								))
							) , (
								var_1_15
							)
						))
					)
				))
			);
		} else {
			/* 1201L, 329L, 784L, 824L) */ var_1_10 = (
				/* 1200L, 328L, 787L, 827L) */ ((
					var_1_16
				) - (
					/* 1199L, 327L, 789L, 829L) */ (max (
						/* 1199L, 327L, 789L, 829L) */ (
							var_1_17
						) , (
							var_1_18
						)
					))
				))
			);
		}
	} else {
		/* 1214L, 350L, 792L, 832L) */ if (/* 1204L, 334L, 335L, 793L, 833L) */ ((var_1_1) != (stepLocal_3))) {
			/* 1209L, 345L, 796L, 836L) */ var_1_10 = (
				/* 1208L, 344L, 799L, 839L) */ (abs (
					15.5
				))
			);
		} else {
			/* 1213L, 349L, 801L, 841L) */ var_1_10 = (
				var_1_15
			);
		}
	}


	// From: Req4Batch128Filler_PS_CN
	unsigned long int stepLocal_5 = var_1_1;
	/* 1231L, 377L, 926L, 937L) */ if (/* 1226L, 362L, 363L, 927L, 938L) */ ((/* 1225L, 360L, 364L, 928L, 939L) */ ((var_1_8) + (200))) > (stepLocal_5))) {
		/* 1230L, 376L, 932L, 943L) */ var_1_19 = (
			var_1_20
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483647);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1073741823);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 127);
	assume_abort_if_not(var_1_26 <= 255);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 64);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -127);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 4294967295);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -1);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 32767);
	var_1_51 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 32767);
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 65534);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
		if (/* 232L, 10L, 17L, 521L, 549L, 1273L) */ ((/* 233L, 8L, 18L, 522L, 550L, 1274L) */ ((/* 234L, 6L, 19L, 523L, 551L, 1275L) */ (~ (var_1_21))) >= (var_1_21))) && (var_1_5))) {
			if (var_1_5) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 258L, 87L, 92L, 719L, 743L, 1299L) */ ((/* 259L, 85L, 93L, 720L, 744L, 1300L) */ (! (0))) || (var_1_2))) {
		if (var_1_2) {
			if (/* 265L, 101L, 105L, 726L, 750L, 1306L) */ ((var_1_3) > (var_1_4))) {
			} else {
			}
		} else {
		}
	}
	if (/* 282L, 298L, 304L, 847L, 887L, 1323L) */ ((var_1_5) || (/* 284L, 297L, 306L, 849L, 889L, 1325L) */ ((var_1_2) || (var_1_11))))) {
		if (var_1_11) {
		} else {
		}
	} else {
		if (/* 308L, 334L, 338L, 873L, 913L, 1349L) */ ((var_1_1) != (var_1_6))) {
		} else {
		}
	}
	if (/* 322L, 362L, 368L, 949L, 960L, 1363L) */ ((/* 323L, 360L, 369L, 950L, 961L, 1364L) */ ((var_1_8) + (200))) > (var_1_1))) {
	}
	if (/* 333L, 388L, 392L, 997L, 1010L, 1374L) */ ((var_1_13) == (0.8))) {
	}
	if (/* 347L, 420L, 430L, 1068L, 1090L, 1388L) */ ((/* 348L, 416L, 431L, 1069L, 1091L, 1389L) */ ((var_1_26) - (/* 350L, 415L, 433L, 1071L, 1093L, 1391L) */ ((var_1_27) + (var_1_28))))) == (/* 353L, 419L, 436L, 1074L, 1096L, 1394L) */ ((var_1_23) << (var_1_21))))) {
		if (var_1_11) {
		} else {
		}
	}
	return /* 371L) */ ((
	/* 370L) */ ((
		/* 369L) */ ((
			/* 368L) */ ((
				/* 367L) */ ((
					/* 229L, 79L, 518L, 546L, 1270L) */ ((
						var_1_2
					) ? (
						/* 231L, 73L, 520L, 548L, 1272L) */ ((
							/* 232L, 10L, 17L, 521L, 549L, 1273L) */ ((
								/* 233L, 8L, 18L, 522L, 550L, 1274L) */ ((
									/* 234L, 6L, 19L, 523L, 551L, 1275L) */ (~ (
										var_1_21
									))
								) >= (
									var_1_21
								))
							) && (
								var_1_5
							))
						) ? (
							/* 238L, 67L, 527L, 555L, 1279L) */ ((
								var_1_5
							) ? (
								/* 240L, 29L, 529L, 557L, 1281L) */ ((
									var_1_1
								) == (
									/* 240L, 29L, 529L, 557L, 1281L) */ ((unsigned long int) (
										var_1_6
									))
								))
							) : (
								/* 244L, 65L, 533L, 561L, 1285L) */ ((
									var_1_1
								) == (
									/* 244L, 65L, 533L, 561L, 1285L) */ ((unsigned long int) (
										1u
									))
								))
							))
						) : (
							/* 248L, 71L, 537L, 565L, 1289L) */ ((
								var_1_1
							) == (
								/* 248L, 71L, 537L, 565L, 1289L) */ ((unsigned long int) (
									var_1_6
								))
							))
						))
					) : (
						/* 252L, 77L, 541L, 569L, 1293L) */ ((
							var_1_1
						) == (
							/* 252L, 77L, 541L, 569L, 1293L) */ ((unsigned long int) (
								var_1_6
							))
						))
					))
				) && (
					/* 257L, 289L, 718L, 742L, 1298L) */ ((
						/* 258L, 87L, 92L, 719L, 743L, 1299L) */ ((
							/* 259L, 85L, 93L, 720L, 744L, 1300L) */ (! (
								0
							))
						) || (
							var_1_2
						))
					) ? (
						/* 262L, 287L, 723L, 747L, 1303L) */ ((
							var_1_2
						) ? (
							/* 264L, 281L, 725L, 749L, 1305L) */ ((
								/* 265L, 101L, 105L, 726L, 750L, 1306L) */ ((
									var_1_3
								) > (
									var_1_4
								))
							) ? (
								/* 268L, 111L, 729L, 753L, 1309L) */ ((
									var_1_7
								) == (
									/* 268L, 111L, 729L, 753L, 1309L) */ ((signed long int) (
										var_1_8
									))
								))
							) : (
								/* 272L, 279L, 733L, 757L, 1313L) */ ((
									var_1_7
								) == (
									/* 272L, 279L, 733L, 757L, 1313L) */ ((signed long int) (
										var_1_9
									))
								))
							))
						) : (
							/* 276L, 285L, 737L, 761L, 1317L) */ ((
								var_1_7
							) == (
								/* 276L, 285L, 737L, 761L, 1317L) */ ((signed long int) (
									var_1_9
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 281L, 353L, 846L, 886L, 1322L) */ ((
					/* 282L, 298L, 304L, 847L, 887L, 1323L) */ ((
						var_1_5
					) || (
						/* 284L, 297L, 306L, 849L, 889L, 1325L) */ ((
							var_1_2
						) || (
							var_1_11
						))
					))
				) ? (
					/* 287L, 331L, 852L, 892L, 1328L) */ ((
						var_1_11
					) ? (
						/* 289L, 321L, 854L, 894L, 1330L) */ ((
							var_1_10
						) == (
							/* 289L, 321L, 854L, 894L, 1330L) */ ((double) (
								/* 292L, 320L, 857L, 897L, 1333L) */ (min (
									/* 292L, 320L, 857L, 897L, 1333L) */ (
										var_1_12
									) , (
										/* 294L, 319L, 859L, 899L, 1335L) */ (min (
											/* 294L, 319L, 859L, 899L, 1335L) */ (
												/* 295L, 317L, 860L, 900L, 1336L) */ (min (
													/* 295L, 317L, 860L, 900L, 1336L) */ (
														var_1_13
													) , (
														var_1_14
													)
												))
											) , (
												var_1_15
											)
										))
									)
								))
							))
						))
					) : (
						/* 299L, 329L, 864L, 904L, 1340L) */ ((
							var_1_10
						) == (
							/* 299L, 329L, 864L, 904L, 1340L) */ ((double) (
								/* 302L, 328L, 867L, 907L, 1343L) */ ((
									var_1_16
								) - (
									/* 304L, 327L, 869L, 909L, 1345L) */ (max (
										/* 304L, 327L, 869L, 909L, 1345L) */ (
											var_1_17
										) , (
											var_1_18
										)
									))
								))
							))
						))
					))
				) : (
					/* 307L, 351L, 872L, 912L, 1348L) */ ((
						/* 308L, 334L, 338L, 873L, 913L, 1349L) */ ((
							var_1_1
						) != (
							var_1_6
						))
					) ? (
						/* 311L, 345L, 876L, 916L, 1352L) */ ((
							var_1_10
						) == (
							/* 311L, 345L, 876L, 916L, 1352L) */ ((double) (
								/* 314L, 344L, 879L, 919L, 1355L) */ (abs (
									15.5
								))
							))
						))
					) : (
						/* 316L, 349L, 881L, 921L, 1357L) */ ((
							var_1_10
						) == (
							/* 316L, 349L, 881L, 921L, 1357L) */ ((double) (
								var_1_15
							))
						))
					))
				))
			))
		) && (
			/* 321L, 378L, 948L, 959L, 1362L) */ ((
				/* 322L, 362L, 368L, 949L, 960L, 1363L) */ ((
					/* 323L, 360L, 369L, 950L, 961L, 1364L) */ ((
						var_1_8
					) + (
						200
					))
				) > (
					var_1_1
				))
			) ? (
				/* 327L, 376L, 954L, 965L, 1368L) */ ((
					var_1_19
				) == (
					/* 327L, 376L, 954L, 965L, 1368L) */ ((signed char) (
						var_1_20
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 332L, 404L, 996L, 1009L, 1373L) */ ((
			/* 333L, 388L, 392L, 997L, 1010L, 1374L) */ ((
				var_1_13
			) == (
				0.8
			))
		) ? (
			/* 336L, 402L, 1000L, 1013L, 1377L) */ ((
				var_1_21
			) == (
				/* 336L, 402L, 1000L, 1013L, 1377L) */ ((unsigned long int) (
					/* 339L, 401L, 1003L, 1016L, 1380L) */ ((
						var_1_22
					) - (
						/* 341L, 400L, 1005L, 1018L, 1382L) */ ((
							1281391062u
						) - (
							var_1_23
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 346L, 457L, 1067L, 1089L, 1387L) */ ((
		/* 347L, 420L, 430L, 1068L, 1090L, 1388L) */ ((
			/* 348L, 416L, 431L, 1069L, 1091L, 1389L) */ ((
				var_1_26
			) - (
				/* 350L, 415L, 433L, 1071L, 1093L, 1391L) */ ((
					var_1_27
				) + (
					var_1_28
				))
			))
		) == (
			/* 353L, 419L, 436L, 1074L, 1096L, 1394L) */ ((
				var_1_23
			) << (
				var_1_21
			))
		))
	) ? (
		/* 356L, 455L, 1077L, 1099L, 1397L) */ ((
			var_1_11
		) ? (
			/* 358L, 445L, 1079L, 1101L, 1399L) */ ((
				var_1_24
			) == (
				/* 358L, 445L, 1079L, 1101L, 1399L) */ ((signed short int) (
					var_1_20
				))
			))
		) : (
			/* 362L, 453L, 1083L, 1105L, 1403L) */ ((
				var_1_24
			) == (
				/* 362L, 453L, 1083L, 1105L, 1403L) */ ((signed short int) (
					var_1_27
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
