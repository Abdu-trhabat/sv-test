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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2Filler_PS_CN.c", 13, "reach_error"); }
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
float var_1_1 = 3.95;
unsigned char var_1_2 = 50;
unsigned char var_1_3 = 10;
float var_1_4 = 9999999.8;
float var_1_5 = 8.6;
unsigned long int var_1_6 = 10000;
double var_1_8 = 64.5;
float var_1_10 = 255.25;
float var_1_11 = 7.5;
float var_1_12 = 0.0;
float var_1_13 = 64.8;
double var_1_14 = 127.75;
signed char var_1_15 = 8;
signed char var_1_16 = 32;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
signed short int var_1_20 = -32;
float var_1_21 = 256.5;
unsigned char var_1_22 = 2;
unsigned char var_1_23 = 1;
float var_1_24 = 1.375;
float var_1_25 = 10.25;
signed char var_1_26 = -64;
signed long int var_1_27 = -1;
signed long int var_1_28 = 5;
signed char var_1_29 = -10;
unsigned long int var_1_30 = 8;
double var_1_31 = 499.75;
unsigned char var_1_32 = 0;
double var_1_33 = 25.1;
double var_1_34 = 0.0;
double var_1_35 = 3.15;
double var_1_36 = 16.5;
unsigned char var_1_37 = 8;
unsigned char var_1_38 = 1;
float var_1_39 = 255.8;
signed long int var_1_40 = -1;
signed short int var_1_41 = 28397;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_6 = 10000;
float last_1_var_1_10 = 255.25;
double last_1_var_1_14 = 127.75;
unsigned char last_1_var_1_17 = 0;
signed short int last_1_var_1_20 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 155L) */ if (/* 143L, 142L) */ ((var_1_22) >= (var_1_23))) {
		/* 154L) */ var_1_21 = (
			/* 153L) */ ((
				var_1_24
			) + (
				var_1_25
			))
		);
	}


	// From: CodeObject2
	/* 210L) */ if (/* 166L, 165L) */ ((/* 167L, 163L) */ ((/* 168L, 161L) */ ((var_1_24) + (127.75f))) * (var_1_21))) < (var_1_25))) {
		/* 208L) */ if (/* 188L, 187L) */ ((/* 189L, 181L) */ (abs (var_1_23))) <= (/* 191L, 186L) */ ((/* 192L, 184L) */ (min (/* 192L, 184L) */ (var_1_22) , (var_1_27)))) & (var_1_28))))) {
			/* 207L) */ var_1_26 = (
				var_1_29
			);
		}
	}


	// From: CodeObject3
	/* 241L) */ if (/* 218L, 217L) */ ((var_1_29) < (/* 220L, 216L) */ (~ (var_1_23))))) {
		/* 239L) */ if (/* 229L, 228L) */ ((var_1_26) < (var_1_22))) {
			/* 238L) */ var_1_30 = (
				var_1_22
			);
		}
	}


	// From: CodeObject4
	/* 299L) */ if (/* 248L, 247L) */ ((var_1_25) == (var_1_21))) {
		/* 289L) */ if (/* 264L, 263L) */ ((var_1_26) >= (var_1_29))) {
			/* 287L) */ if (/* 272L, 271L) */ (! (var_1_32))) {
				/* 286L) */ var_1_31 = (
					/* 285L) */ ((
						var_1_33
					) - (
						/* 284L) */ (max (
							/* 284L) */ (
								var_1_36
							) , (
								var_1_35
							)
						))
					))
				);
			}
		}
	} else {
		/* 298L) */ var_1_31 = (
			/* 297L) */ (abs (
				/* 296L) */ (abs (
					/* 295L) */ ((
						var_1_34
					) - (
						9.5
					))
				))
			))
		);
	}


	// From: CodeObject5
	/* 319L) */ if (/* 307L, 306L) */ (! (/* 308L, 305L) */ ((var_1_25) <= (var_1_21))))) {
		/* 318L) */ var_1_37 = (
			var_1_38
		);
	}


	// From: CodeObject6
	/* 352L) */ if (/* 340L, 339L) */ ((128) != (/* 342L, 338L) */ (~ (var_1_23))))) {
		/* 351L) */ var_1_39 = (
			var_1_33
		);
	}


	// From: CodeObject7
	/* 405L) */ if (/* 359L, 358L) */ ((var_1_36) != (var_1_33))) {
		/* 399L) */ if (/* 375L, 374L) */ ((/* 376L, 370L) */ ((/* 377L, 367L) */ ((var_1_41) - (var_1_38))) - (/* 380L, 369L) */ (abs (var_1_26))))) <= (/* 382L, 373L) */ ((var_1_28) * (var_1_23))))) {
			/* 398L) */ var_1_40 = (
				var_1_38
			);
		}
	} else {
		/* 404L) */ var_1_40 = (
			var_1_29
		);
	}


	// From: Req2Batch2Filler_PS_CN
	unsigned char stepLocal_0 = last_1_var_1_17;
	/* 97L, 109L, 461L, 496L, 977L, 1137L) */ if (last_1_var_1_17) {
		/* 92L, 103L, 463L, 498L, 972L, 1132L) */ if (/* 73L, 55L, 56L, 464L, 499L, 952L, 1114L) */ ((/* 69L, 51L, 57L, 465L, 500L, 948L, 1110L) */ (max (/* 69L, 51L, 57L, 465L, 500L, 948L, 1110L) */ (last_1_var_1_14) , (/* 68L, 50L, 59L, 467L, 502L, 947L, 1109L) */ (max (/* 68L, 50L, 59L, 467L, 502L, 947L, 1109L) */ (var_1_5) , (199.78))))))) != (/* 72L, 54L, 62L, 470L, 505L, 951L, 1113L) */ ((var_1_4) - (var_1_8))))) {
			/* 87L, 97L, 473L, 508L, 967L, 1127L) */ if (/* 78L, 78L, 79L, 474L, 509L, 958L, 1118L) */ ((/* 76L, 76L, 80L, 475L, 510L, 955L, 1117L) */ ((var_1_2) != (var_1_3))) || (stepLocal_0))) {
				/* 82L, 92L, 479L, 514L, 962L, 1122L) */ var_1_6 = (
					var_1_2
				);
			} else {
				/* 86L, 96L, 483L, 518L, 966L, 1126L) */ var_1_6 = (
					5u
				);
			}
		} else {
			/* 91L, 102L, 487L, 522L, 971L, 1131L) */ var_1_6 = (
				var_1_2
			);
		}
	} else {
		/* 96L, 108L, 491L, 526L, 976L, 1136L) */ var_1_6 = (
			var_1_2
		);
	}


	// From: Req4Batch2Filler_PS_CN
	/* 1166L, 183L, 698L, 712L) */ if (/* 1167L, 164L, 165L, 699L, 713L) */ ((/* 1168L, 162L, 166L, 700L, 714L) */ ((var_1_15) - (/* 1170L, 161L, 168L, 702L, 716L) */ (min (/* 1170L, 161L, 168L, 702L, 716L) */ (0) , (var_1_16)))))) > (var_1_6))) {
		/* 1174L, 182L, 706L, 720L) */ var_1_14 = (
			var_1_12
		);
	}


	// From: Req5Batch2Filler_PS_CN
	/* 26L, 243L, 754L, 780L, 1043L, 1180L) */ if (/* 6L, 195L, 196L, 755L, 781L, 1023L, 1181L) */ ((last_1_var_1_6) <= (/* 5L, 194L, 198L, 757L, 783L, 1022L, 1184L) */ ((var_1_16) * (last_1_var_1_20))))) {
		/* 21L, 237L, 760L, 786L, 1038L, 1188L) */ if (/* 12L, 210L, 211L, 761L, 787L, 1029L, 1189L) */ ((/* 10L, 208L, 212L, 762L, 788L, 1027L, 1190L) */ ((var_1_5) + (last_1_var_1_10))) <= (127.025f))) {
			/* 16L, 224L, 766L, 792L, 1033L, 1195L) */ var_1_17 = (
				var_1_18
			);
		} else {
			/* 20L, 236L, 770L, 796L, 1037L, 1199L) */ var_1_17 = (
				var_1_19
			);
		}
	} else {
		/* 25L, 242L, 774L, 800L, 1042L, 1203L) */ var_1_17 = (
			var_1_19
		);
	}


	// From: Req6Batch2Filler_PS_CN
	unsigned char stepLocal_1 = /* 1209L, 269L, 273L, 866L, 887L) */ ((var_1_19) && (var_1_17));
	/* 1229L, 291L, 857L, 878L) */ if (/* 1217L, 255L, 256L, 858L, 879L) */ ((-0.25) < (/* 1216L, 254L, 258L, 860L, 881L) */ ((256.4) - (var_1_5))))) {
		/* 1224L, 285L, 863L, 884L) */ if (/* 1219L, 270L, 271L, 864L, 885L) */ ((var_1_17) && (stepLocal_1))) {
			/* 1223L, 284L, 869L, 890L) */ var_1_20 = (
				var_1_15
			);
		}
	} else {
		/* 1228L, 290L, 873L, 894L) */ var_1_20 = (
			1
		);
	}


	// From: Req1Batch2Filler_PS_CN
	/* 1076L, 36L, 296L, 320L) */ if (/* 1077L, 4L, 5L, 297L, 321L) */ ((var_1_6) <= (var_1_20))) {
		/* 1080L, 30L, 300L, 324L) */ if (/* 1081L, 13L, 14L, 301L, 325L) */ ((var_1_20) > (var_1_6))) {
			/* 1084L, 25L, 304L, 328L) */ var_1_1 = (
				/* 1087L, 24L, 307L, 331L) */ ((
					var_1_4
				) - (
					var_1_5
				))
			);
		} else {
			/* 1090L, 29L, 310L, 334L) */ var_1_1 = (
				var_1_5
			);
		}
	} else {
		/* 1094L, 35L, 314L, 338L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: Req3Batch2Filler_PS_CN
	/* 1142L, 150L, 602L, 626L) */ if (/* 1143L, 121L, 122L, 603L, 627L) */ ((/* 1144L, 117L, 123L, 604L, 628L) */ ((var_1_5) / (var_1_11))) >= (/* 1147L, 120L, 126L, 607L, 631L) */ ((var_1_8) - (var_1_4))))) {
		/* 1150L, 145L, 610L, 634L) */ var_1_10 = (
			/* 1153L, 144L, 613L, 637L) */ (min (
				/* 1153L, 144L, 613L, 637L) */ (
					/* 1154L, 142L, 614L, 638L) */ ((
						var_1_5
					) - (
						/* 1156L, 141L, 616L, 640L) */ ((
							var_1_12
						) - (
							var_1_13
						))
					))
				) , (
					var_1_4
				)
			))
		);
	} else {
		/* 1160L, 149L, 620L, 644L) */ var_1_10 = (
			4.2f
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 4611686.018427383000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 255);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 255);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -127);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 6917529.027641074000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 409L, 4L, 8L, 345L, 369L, 1235L) */ ((var_1_6) <= (var_1_20))) {
		if (/* 413L, 13L, 17L, 349L, 373L, 1239L) */ ((var_1_20) > (var_1_6))) {
		} else {
		}
	} else {
	}
	if (last_1_var_1_17) {
		if (/* 435L, 55L, 65L, 534L, 569L, 990L, 1261L, 111L) */ ((/* 436L, 51L, 66L, 535L, 570L, 986L, 1262L, 107L) */ (max (/* 436L, 51L, 66L, 535L, 570L, 986L, 1262L, 107L) */ (last_1_var_1_14) , (/* 439L, 50L, 68L, 537L, 572L, 985L, 1265L, 106L) */ (max (/* 439L, 50L, 68L, 537L, 572L, 985L, 1265L, 106L) */ (var_1_5) , (199.78))))))) != (/* 442L, 54L, 71L, 540L, 575L, 989L, 1268L, 110L) */ ((var_1_4) - (var_1_8))))) {
			if (/* 446L, 78L, 84L, 544L, 579L, 996L, 1272L, 117L) */ ((/* 447L, 76L, 85L, 545L, 580L, 993L, 1273L, 114L) */ ((var_1_2) != (var_1_3))) || (last_1_var_1_17))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 471L, 121L, 129L, 651L, 675L, 1297L) */ ((/* 472L, 117L, 130L, 652L, 676L, 1298L) */ ((var_1_5) / (var_1_11))) >= (/* 475L, 120L, 133L, 655L, 679L, 1301L) */ ((var_1_8) - (var_1_4))))) {
	} else {
	}
	if (/* 495L, 164L, 172L, 727L, 741L, 1321L) */ ((/* 496L, 162L, 173L, 728L, 742L, 1322L) */ ((var_1_15) - (/* 498L, 161L, 175L, 730L, 744L, 1324L) */ (min (/* 498L, 161L, 175L, 730L, 744L, 1324L) */ (0) , (var_1_16)))))) > (var_1_6))) {
	}
	if (/* 509L, 195L, 201L, 807L, 833L, 1052L, 1335L, 35L) */ ((last_1_var_1_6) <= (/* 512L, 194L, 203L, 809L, 835L, 1051L, 1338L, 34L) */ ((var_1_16) * (last_1_var_1_20))))) {
		if (/* 517L, 210L, 216L, 813L, 839L, 1058L, 1343L, 41L) */ ((/* 518L, 208L, 217L, 814L, 840L, 1056L, 1344L, 39L) */ ((var_1_5) + (last_1_var_1_10))) <= (127.025f))) {
		} else {
		}
	} else {
	}
	if (/* 537L, 255L, 261L, 900L, 921L, 1363L) */ ((-0.25) < (/* 539L, 254L, 263L, 902L, 923L, 1365L) */ ((256.4) - (var_1_5))))) {
		if (/* 543L, 270L, 276L, 906L, 927L, 1369L) */ ((var_1_17) && (/* 545L, 269L, 278L, 908L, 929L, 1371L) */ ((var_1_19) && (var_1_17))))) {
		}
	} else {
	}
	return /* 561L) */ ((
	/* 560L) */ ((
		/* 559L) */ ((
			/* 558L) */ ((
				/* 557L) */ ((
					/* 408L, 37L, 344L, 368L, 1234L) */ ((
						/* 409L, 4L, 8L, 345L, 369L, 1235L) */ ((
							var_1_6
						) <= (
							var_1_20
						))
					) ? (
						/* 412L, 31L, 348L, 372L, 1238L) */ ((
							/* 413L, 13L, 17L, 349L, 373L, 1239L) */ ((
								var_1_20
							) > (
								var_1_6
							))
						) ? (
							/* 416L, 25L, 352L, 376L, 1242L) */ ((
								var_1_1
							) == (
								/* 416L, 25L, 352L, 376L, 1242L) */ ((float) (
									/* 419L, 24L, 355L, 379L, 1245L) */ ((
										var_1_4
									) - (
										var_1_5
									))
								))
							))
						) : (
							/* 422L, 29L, 358L, 382L, 1248L) */ ((
								var_1_1
							) == (
								/* 422L, 29L, 358L, 382L, 1248L) */ ((float) (
									var_1_5
								))
							))
						))
					) : (
						/* 426L, 35L, 362L, 386L, 1252L) */ ((
							var_1_1
						) == (
							/* 426L, 35L, 362L, 386L, 1252L) */ ((float) (
								var_1_4
							))
						))
					))
				) && (
					/* 431L, 110L, 531L, 566L, 1015L, 1257L, 136L) */ ((
						last_1_var_1_17
					) ? (
						/* 434L, 104L, 533L, 568L, 1010L, 1260L, 131L) */ ((
							/* 435L, 55L, 65L, 534L, 569L, 990L, 1261L, 111L) */ ((
								/* 436L, 51L, 66L, 535L, 570L, 986L, 1262L, 107L) */ (max (
									/* 436L, 51L, 66L, 535L, 570L, 986L, 1262L, 107L) */ (
										last_1_var_1_14
									) , (
										/* 439L, 50L, 68L, 537L, 572L, 985L, 1265L, 106L) */ (max (
											/* 439L, 50L, 68L, 537L, 572L, 985L, 1265L, 106L) */ (
												var_1_5
											) , (
												199.78
											)
										))
									)
								))
							) != (
								/* 442L, 54L, 71L, 540L, 575L, 989L, 1268L, 110L) */ ((
									var_1_4
								) - (
									var_1_8
								))
							))
						) ? (
							/* 445L, 98L, 543L, 578L, 1005L, 1271L, 126L) */ ((
								/* 446L, 78L, 84L, 544L, 579L, 996L, 1272L, 117L) */ ((
									/* 447L, 76L, 85L, 545L, 580L, 993L, 1273L, 114L) */ ((
										var_1_2
									) != (
										var_1_3
									))
								) || (
									last_1_var_1_17
								))
							) ? (
								/* 452L, 92L, 549L, 584L, 1000L, 1278L, 121L) */ ((
									var_1_6
								) == (
									/* 452L, 92L, 549L, 584L, 1000L, 1278L, 121L) */ ((unsigned long int) (
										var_1_2
									))
								))
							) : (
								/* 456L, 96L, 553L, 588L, 1004L, 1282L, 125L) */ ((
									var_1_6
								) == (
									/* 456L, 96L, 553L, 588L, 1004L, 1282L, 125L) */ ((unsigned long int) (
										5u
									))
								))
							))
						) : (
							/* 460L, 102L, 557L, 592L, 1009L, 1286L, 130L) */ ((
								var_1_6
							) == (
								/* 460L, 102L, 557L, 592L, 1009L, 1286L, 130L) */ ((unsigned long int) (
									var_1_2
								))
							))
						))
					) : (
						/* 464L, 108L, 561L, 596L, 1014L, 1290L, 135L) */ ((
							var_1_6
						) == (
							/* 464L, 108L, 561L, 596L, 1014L, 1290L, 135L) */ ((unsigned long int) (
								var_1_2
							))
						))
					))
				))
			) && (
				/* 470L, 151L, 650L, 674L, 1296L) */ ((
					/* 471L, 121L, 129L, 651L, 675L, 1297L) */ ((
						/* 472L, 117L, 130L, 652L, 676L, 1298L) */ ((
							var_1_5
						) / (
							var_1_11
						))
					) >= (
						/* 475L, 120L, 133L, 655L, 679L, 1301L) */ ((
							var_1_8
						) - (
							var_1_4
						))
					))
				) ? (
					/* 478L, 145L, 658L, 682L, 1304L) */ ((
						var_1_10
					) == (
						/* 478L, 145L, 658L, 682L, 1304L) */ ((float) (
							/* 481L, 144L, 661L, 685L, 1307L) */ (min (
								/* 481L, 144L, 661L, 685L, 1307L) */ (
									/* 482L, 142L, 662L, 686L, 1308L) */ ((
										var_1_5
									) - (
										/* 484L, 141L, 664L, 688L, 1310L) */ ((
											var_1_12
										) - (
											var_1_13
										))
									))
								) , (
									var_1_4
								)
							))
						))
					))
				) : (
					/* 488L, 149L, 668L, 692L, 1314L) */ ((
						var_1_10
					) == (
						/* 488L, 149L, 668L, 692L, 1314L) */ ((float) (
							4.2f
						))
					))
				))
			))
		) && (
			/* 494L, 184L, 726L, 740L, 1320L) */ ((
				/* 495L, 164L, 172L, 727L, 741L, 1321L) */ ((
					/* 496L, 162L, 173L, 728L, 742L, 1322L) */ ((
						var_1_15
					) - (
						/* 498L, 161L, 175L, 730L, 744L, 1324L) */ (min (
							/* 498L, 161L, 175L, 730L, 744L, 1324L) */ (
								0
							) , (
								var_1_16
							)
						))
					))
				) > (
					var_1_6
				))
			) ? (
				/* 502L, 182L, 734L, 748L, 1328L) */ ((
					var_1_14
				) == (
					/* 502L, 182L, 734L, 748L, 1328L) */ ((double) (
						var_1_12
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 508L, 244L, 806L, 832L, 1072L, 1334L, 55L) */ ((
			/* 509L, 195L, 201L, 807L, 833L, 1052L, 1335L, 35L) */ ((
				last_1_var_1_6
			) <= (
				/* 512L, 194L, 203L, 809L, 835L, 1051L, 1338L, 34L) */ ((
					var_1_16
				) * (
					last_1_var_1_20
				))
			))
		) ? (
			/* 516L, 238L, 812L, 838L, 1067L, 1342L, 50L) */ ((
				/* 517L, 210L, 216L, 813L, 839L, 1058L, 1343L, 41L) */ ((
					/* 518L, 208L, 217L, 814L, 840L, 1056L, 1344L, 39L) */ ((
						var_1_5
					) + (
						last_1_var_1_10
					))
				) <= (
					127.025f
				))
			) ? (
				/* 523L, 224L, 818L, 844L, 1062L, 1349L, 45L) */ ((
					var_1_17
				) == (
					/* 523L, 224L, 818L, 844L, 1062L, 1349L, 45L) */ ((unsigned char) (
						var_1_18
					))
				))
			) : (
				/* 527L, 236L, 822L, 848L, 1066L, 1353L, 49L) */ ((
					var_1_17
				) == (
					/* 527L, 236L, 822L, 848L, 1066L, 1353L, 49L) */ ((unsigned char) (
						var_1_19
					))
				))
			))
		) : (
			/* 531L, 242L, 826L, 852L, 1071L, 1357L, 54L) */ ((
				var_1_17
			) == (
				/* 531L, 242L, 826L, 852L, 1071L, 1357L, 54L) */ ((unsigned char) (
					var_1_19
				))
			))
		))
	))
) && (
	/* 536L, 292L, 899L, 920L, 1362L) */ ((
		/* 537L, 255L, 261L, 900L, 921L, 1363L) */ ((
			-0.25
		) < (
			/* 539L, 254L, 263L, 902L, 923L, 1365L) */ ((
				256.4
			) - (
				var_1_5
			))
		))
	) ? (
		/* 542L, 286L, 905L, 926L, 1368L) */ ((
			/* 543L, 270L, 276L, 906L, 927L, 1369L) */ ((
				var_1_17
			) && (
				/* 545L, 269L, 278L, 908L, 929L, 1371L) */ ((
					var_1_19
				) && (
					var_1_17
				))
			))
		) ? (
			/* 548L, 284L, 911L, 932L, 1374L) */ ((
				var_1_20
			) == (
				/* 548L, 284L, 911L, 932L, 1374L) */ ((signed short int) (
					var_1_15
				))
			))
		) : (
			1
		))
	) : (
		/* 552L, 290L, 915L, 936L, 1378L) */ ((
			var_1_20
		) == (
			/* 552L, 290L, 915L, 936L, 1378L) */ ((signed short int) (
				1
			))
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
