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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch158Filler_PR_CN.c", 13, "reach_error"); }
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
signed long int var_1_1 = -128;
unsigned char var_1_2 = 0;
signed long int var_1_3 = 1;
signed long int var_1_4 = -64;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
double var_1_7 = 500.625;
double var_1_8 = 16.5;
double var_1_9 = 99.5;
signed long int var_1_10 = 5;
signed long int var_1_11 = 64;
signed long int var_1_12 = -5;
signed long int var_1_13 = 1;
unsigned long int var_1_14 = 2;
signed long int var_1_15 = 256;
signed long int var_1_17 = -10;
signed short int var_1_18 = 256;
signed short int var_1_19 = 10;
signed short int var_1_20 = -128;
unsigned char var_1_21 = 4;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
signed char var_1_25 = -32;
signed char var_1_26 = -10;
signed long int var_1_27 = 128;
signed long int var_1_28 = 256;
double var_1_29 = 15.5;
double var_1_30 = 9.3;
signed long int var_1_31 = -64;
signed long int var_1_32 = -1000;
signed long int var_1_33 = -8;
double var_1_34 = 1.93;
double var_1_35 = 8.45;
double var_1_36 = 64.3;
double var_1_37 = 256.6;
unsigned long int var_1_38 = 128;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
unsigned long int var_1_41 = 32;
double var_1_42 = 16.4;
unsigned char var_1_43 = 10;
unsigned char var_1_44 = 200;
unsigned char var_1_45 = 10;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 100;
double var_1_48 = 100.1;
double var_1_49 = 7.8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch158Filler_PR_CN
	unsigned char stepLocal_0 = /* 1068L, 5L, 13L, 529L, 563L) */ ((var_1_3) < (var_1_4));
	/* 1101L, 70L, 527L, 561L) */ if (/* 1077L, 11L, 12L, 528L, 562L) */ ((stepLocal_0) && (/* 1076L, 10L, 16L, 532L, 566L) */ ((/* 1074L, 8L, 17L, 533L, 567L) */ ((var_1_2) || (var_1_5))) && (var_1_6))))) {
		/* 1096L, 64L, 537L, 571L) */ if (/* 1085L, 37L, 38L, 538L, 572L) */ ((/* 1081L, 33L, 39L, 539L, 573L) */ (- (/* 1080L, 32L, 40L, 540L, 574L) */ ((9.75) + (var_1_7))))) >= (/* 1084L, 36L, 43L, 543L, 577L) */ ((var_1_8) - (var_1_9))))) {
			/* 1091L, 59L, 546L, 580L) */ var_1_1 = (
				/* 1090L, 58L, 549L, 583L) */ ((
					var_1_10
				) + (
					var_1_11
				))
			);
		} else {
			/* 1095L, 63L, 552L, 586L) */ var_1_1 = (
				var_1_10
			);
		}
	} else {
		/* 1100L, 69L, 556L, 590L) */ var_1_1 = (
			var_1_10
		);
	}


	// From: Req2Batch158Filler_PR_CN
	signed long int stepLocal_1 = /* 1106L, 78L, 84L, 665L, 682L) */ ((var_1_13) >> (var_1_14));
	/* 1122L, 123L, 663L, 680L) */ if (/* 1113L, 82L, 83L, 664L, 681L) */ ((stepLocal_1) < (/* 1112L, 81L, 87L, 668L, 685L) */ ((var_1_10) * (-32))))) {
		/* 1117L, 118L, 671L, 688L) */ var_1_12 = (
			var_1_17
		);
	} else {
		/* 1121L, 122L, 675L, 692L) */ var_1_12 = (
			var_1_11
		);
	}


	// From: Req3Batch158Filler_PR_CN
	/* 1130L, 153L, 735L, 748L) */ if (/* 1131L, 142L, 143L, 736L, 749L) */ ((var_1_7) > (var_1_9))) {
		/* 1134L, 152L, 739L, 752L) */ var_1_18 = (
			var_1_20
		);
	}


	// From: Req5Batch158Filler_PR_CN
	/* 1157L, 201L, 836L, 847L) */ var_1_22 = (
		/* 1160L, 200L, 839L, 850L) */ ((
			/* 1161L, 197L, 840L, 851L) */ ((
				var_1_2
			) && (
				var_1_23
			))
		) || (
			/* 1164L, 199L, 843L, 854L) */ (! (
				var_1_24
			))
		))
	);


	// From: CodeObject2
	/* 70L) */ if (/* 32L, 31L) */ ((/* 33L, 29L) */ (- (var_1_28))) <= (var_1_31))) {
		/* 49L) */ var_1_34 = (
			/* 48L) */ ((
				/* 44L) */ (abs (
					/* 43L) */ (abs (
						var_1_35
					))
				))
			) - (
				/* 47L) */ (min (
					/* 47L) */ (
						var_1_36
					) , (
						var_1_37
					)
				))
			))
		);
	} else {
		/* 68L) */ if (/* 54L, 53L) */ ((/* 55L, 51L) */ (abs (var_1_29))) > (var_1_36))) {
			/* 67L) */ var_1_34 = (
				/* 66L) */ (min (
					/* 66L) */ (
						var_1_36
					) , (
						99.5
					)
				))
			);
		}
	}


	// From: CodeObject4
	/* 105L) */ var_1_42 = (
		var_1_37
	);


	// From: CodeObject5
	/* 144L) */ if (var_1_39) {
		/* 120L) */ var_1_43 = (
			/* 119L) */ (abs (
				/* 118L) */ (abs (
					/* 117L) */ (min (
						/* 117L) */ (
							var_1_44
						) , (
							var_1_45
						)
					))
				))
			))
		);
	} else {
		/* 142L) */ if (/* 126L, 125L) */ ((var_1_40) || (/* 128L, 124L) */ ((var_1_29) <= (var_1_34))))) {
			/* 141L) */ var_1_43 = (
				/* 140L) */ ((
					var_1_46
				) - (
					var_1_47
				))
			);
		}
	}


	// From: Req6Batch158Filler_PR_CN
	unsigned char stepLocal_5 = var_1_22;
	signed long int stepLocal_4 = /* 1173L, 229L, 237L, 891L, 926L) */ ((var_1_19) * (var_1_12));
	unsigned long int stepLocal_3 = /* 1168L, 261L, 265L, 901L, 936L) */ ((var_1_13) / (var_1_14));
	/* 1206L, 292L, 879L, 914L) */ if (/* 1183L, 212L, 213L, 880L, 915L) */ ((stepLocal_5) || (/* 1182L, 211L, 215L, 882L, 917L) */ ((var_1_17) < (var_1_1))))) {
		/* 1187L, 226L, 885L, 920L) */ var_1_25 = (
			var_1_14
		);
	} else {
		/* 1205L, 290L, 889L, 924L) */ if (/* 1193L, 235L, 236L, 890L, 925L) */ ((stepLocal_4) > (/* 1192L, 234L, 240L, 894L, 929L) */ ((/* 1190L, 232L, 241L, 895L, 930L) */ (max (/* 1190L, 232L, 241L, 895L, 930L) */ (var_1_15) , (var_1_13)))) - (var_1_1))))) {
			/* 1204L, 288L, 899L, 934L) */ if (/* 1195L, 263L, 264L, 900L, 935L) */ ((stepLocal_3) <= (var_1_15))) {
				/* 1199L, 283L, 905L, 940L) */ var_1_25 = (
					var_1_14
				);
			} else {
				/* 1203L, 287L, 909L, 944L) */ var_1_25 = (
					var_1_26
				);
			}
		}
	}


	// From: Req7Batch158Filler_PR_CN
	/* 1213L, 317L, 1020L, 1032L) */ if (/* 1214L, 302L, 303L, 1021L, 1033L) */ ((var_1_26) <= (/* 1216L, 301L, 305L, 1023L, 1035L) */ ((-1) * (var_1_12))))) {
		/* 1219L, 316L, 1026L, 1038L) */ var_1_27 = (
			var_1_18
		);
	}


	// From: CodeObject3
	/* 94L) */ if (/* 77L, 76L) */ ((var_1_39) || (var_1_40))) {
		/* 87L) */ var_1_38 = (
			/* 86L) */ (abs (
				var_1_41
			))
		);
	} else {
		/* 93L) */ var_1_38 = (
			/* 92L) */ (min (
				/* 92L) */ (
					var_1_41
				) , (
					8u
				)
			))
		);
	}


	// From: CodeObject6
	/* 159L) */ if (var_1_39) {
		/* 158L) */ var_1_48 = (
			/* 157L) */ (abs (
				/* 156L) */ (abs (
					var_1_36
				))
			))
		);
	}


	// From: CodeObject7
	/* 199L) */ if (/* 168L, 167L) */ ((var_1_32) < (/* 170L, 166L) */ (abs (/* 171L, 165L) */ (abs (var_1_44))))))) {
		/* 193L) */ if (var_1_39) {
			/* 188L) */ var_1_49 = (
				/* 187L) */ (min (
					/* 187L) */ (
						var_1_36
					) , (
						/* 186L) */ (max (
							/* 186L) */ (
								var_1_37
							) , (
								var_1_35
							)
						))
					)
				))
			);
		} else {
			/* 192L) */ var_1_49 = (
				var_1_36
			);
		}
	} else {
		/* 198L) */ var_1_49 = (
			var_1_37
		);
	}


	// From: Req4Batch158Filler_PR_CN
	signed long int stepLocal_2 = -256;
	/* 1152L, 187L, 783L, 796L) */ if (var_1_22) {
		/* 1151L, 185L, 785L, 798L) */ if (/* 1144L, 172L, 173L, 786L, 799L) */ ((var_1_17) > (stepLocal_2))) {
			/* 1150L, 184L, 789L, 802L) */ var_1_21 = (
				/* 1149L, 183L, 792L, 805L) */ (max (
					/* 1149L, 183L, 792L, 805L) */ (
						8
					) , (
						var_1_14
					)
				))
			);
		}
	}


	// From: CodeObject1
	/* 22L) */ if (/* 5L, 4L) */ ((var_1_29) >= (var_1_30))) {
		/* 15L) */ var_1_28 = (
			/* 14L) */ (abs (
				var_1_31
			))
		);
	} else {
		/* 21L) */ var_1_28 = (
			/* 20L) */ ((
				var_1_32
			) + (
				var_1_33
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -1073741823);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1073741823);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 30);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -268435455);
	assume_abort_if_not(var_1_17 <= 268435456);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32767);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483646);
	assume_abort_if_not(var_1_31 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -1073741823);
	assume_abort_if_not(var_1_32 <= 1073741823);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -1073741823);
	assume_abort_if_not(var_1_33 <= 1073741823);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 127);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 202L, 11L, 21L, 596L, 630L, 1225L) */ ((/* 203L, 5L, 22L, 597L, 631L, 1226L) */ ((var_1_3) < (var_1_4))) && (/* 206L, 10L, 25L, 600L, 634L, 1229L) */ ((/* 207L, 8L, 26L, 601L, 635L, 1230L) */ ((var_1_2) || (var_1_5))) && (var_1_6))))) {
		if (/* 212L, 37L, 46L, 606L, 640L, 1235L) */ ((/* 213L, 33L, 47L, 607L, 641L, 1236L) */ (- (/* 214L, 32L, 48L, 608L, 642L, 1237L) */ ((9.75) + (var_1_7))))) >= (/* 217L, 36L, 51L, 611L, 645L, 1240L) */ ((var_1_8) - (var_1_9))))) {
		} else {
		}
	} else {
	}
	if (/* 236L, 82L, 90L, 698L, 715L, 1259L) */ ((/* 237L, 78L, 91L, 699L, 716L, 1260L) */ ((var_1_13) >> (var_1_14))) < (/* 240L, 81L, 94L, 702L, 719L, 1263L) */ ((var_1_10) * (-32))))) {
	} else {
	}
	if (/* 257L, 142L, 146L, 762L, 775L, 1280L) */ ((var_1_7) > (var_1_9))) {
	}
	if (var_1_22) {
		if (/* 268L, 172L, 176L, 812L, 825L, 1291L) */ ((var_1_17) > (-256))) {
		}
	}
	if (/* 290L, 212L, 218L, 950L, 985L, 1313L) */ ((var_1_22) || (/* 292L, 211L, 220L, 952L, 987L, 1315L) */ ((var_1_17) < (var_1_1))))) {
	} else {
		if (/* 300L, 235L, 245L, 960L, 995L, 1323L) */ ((/* 301L, 229L, 246L, 961L, 996L, 1324L) */ ((var_1_19) * (var_1_12))) > (/* 304L, 234L, 249L, 964L, 999L, 1327L) */ ((/* 305L, 232L, 250L, 965L, 1000L, 1328L) */ (max (/* 305L, 232L, 250L, 965L, 1000L, 1328L) */ (var_1_15) , (var_1_13)))) - (var_1_1))))) {
			if (/* 310L, 263L, 269L, 970L, 1005L, 1333L) */ ((/* 311L, 261L, 270L, 971L, 1006L, 1334L) */ ((var_1_13) / (var_1_14))) <= (var_1_15))) {
			} else {
			}
		}
	}
	if (/* 326L, 302L, 308L, 1045L, 1057L, 1349L) */ ((var_1_26) <= (/* 328L, 301L, 310L, 1047L, 1059L, 1351L) */ ((-1) * (var_1_12))))) {
	}
	return /* 341L) */ ((
	/* 340L) */ ((
		/* 339L) */ ((
			/* 338L) */ ((
				/* 337L) */ ((
					/* 336L) */ ((
						/* 201L, 71L, 595L, 629L, 1224L) */ ((
							/* 202L, 11L, 21L, 596L, 630L, 1225L) */ ((
								/* 203L, 5L, 22L, 597L, 631L, 1226L) */ ((
									var_1_3
								) < (
									var_1_4
								))
							) && (
								/* 206L, 10L, 25L, 600L, 634L, 1229L) */ ((
									/* 207L, 8L, 26L, 601L, 635L, 1230L) */ ((
										var_1_2
									) || (
										var_1_5
									))
								) && (
									var_1_6
								))
							))
						) ? (
							/* 211L, 65L, 605L, 639L, 1234L) */ ((
								/* 212L, 37L, 46L, 606L, 640L, 1235L) */ ((
									/* 213L, 33L, 47L, 607L, 641L, 1236L) */ (- (
										/* 214L, 32L, 48L, 608L, 642L, 1237L) */ ((
											9.75
										) + (
											var_1_7
										))
									))
								) >= (
									/* 217L, 36L, 51L, 611L, 645L, 1240L) */ ((
										var_1_8
									) - (
										var_1_9
									))
								))
							) ? (
								/* 220L, 59L, 614L, 648L, 1243L) */ ((
									var_1_1
								) == (
									/* 220L, 59L, 614L, 648L, 1243L) */ ((signed long int) (
										/* 223L, 58L, 617L, 651L, 1246L) */ ((
											var_1_10
										) + (
											var_1_11
										))
									))
								))
							) : (
								/* 226L, 63L, 620L, 654L, 1249L) */ ((
									var_1_1
								) == (
									/* 226L, 63L, 620L, 654L, 1249L) */ ((signed long int) (
										var_1_10
									))
								))
							))
						) : (
							/* 230L, 69L, 624L, 658L, 1253L) */ ((
								var_1_1
							) == (
								/* 230L, 69L, 624L, 658L, 1253L) */ ((signed long int) (
									var_1_10
								))
							))
						))
					) && (
						/* 235L, 124L, 697L, 714L, 1258L) */ ((
							/* 236L, 82L, 90L, 698L, 715L, 1259L) */ ((
								/* 237L, 78L, 91L, 699L, 716L, 1260L) */ ((
									var_1_13
								) >> (
									var_1_14
								))
							) < (
								/* 240L, 81L, 94L, 702L, 719L, 1263L) */ ((
									var_1_10
								) * (
									-32
								))
							))
						) ? (
							/* 243L, 118L, 705L, 722L, 1266L) */ ((
								var_1_12
							) == (
								/* 243L, 118L, 705L, 722L, 1266L) */ ((signed long int) (
									var_1_17
								))
							))
						) : (
							/* 247L, 122L, 709L, 726L, 1270L) */ ((
								var_1_12
							) == (
								/* 247L, 122L, 709L, 726L, 1270L) */ ((signed long int) (
									var_1_11
								))
							))
						))
					))
				) && (
					/* 256L, 154L, 761L, 774L, 1279L) */ ((
						/* 257L, 142L, 146L, 762L, 775L, 1280L) */ ((
							var_1_7
						) > (
							var_1_9
						))
					) ? (
						/* 260L, 152L, 765L, 778L, 1283L) */ ((
							var_1_18
						) == (
							/* 260L, 152L, 765L, 778L, 1283L) */ ((signed short int) (
								var_1_20
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 265L, 188L, 809L, 822L, 1288L) */ ((
					var_1_22
				) ? (
					/* 267L, 186L, 811L, 824L, 1290L) */ ((
						/* 268L, 172L, 176L, 812L, 825L, 1291L) */ ((
							var_1_17
						) > (
							-256
						))
					) ? (
						/* 271L, 184L, 815L, 828L, 1294L) */ ((
							var_1_21
						) == (
							/* 271L, 184L, 815L, 828L, 1294L) */ ((unsigned char) (
								/* 274L, 183L, 818L, 831L, 1297L) */ (max (
									/* 274L, 183L, 818L, 831L, 1297L) */ (
										8
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
			/* 279L, 201L, 858L, 869L, 1302L) */ ((
				var_1_22
			) == (
				/* 279L, 201L, 858L, 869L, 1302L) */ ((unsigned char) (
					/* 282L, 200L, 861L, 872L, 1305L) */ ((
						/* 283L, 197L, 862L, 873L, 1306L) */ ((
							var_1_2
						) && (
							var_1_23
						))
					) || (
						/* 286L, 199L, 865L, 876L, 1309L) */ (! (
							var_1_24
						))
					))
				))
			))
		))
	) && (
		/* 289L, 293L, 949L, 984L, 1312L) */ ((
			/* 290L, 212L, 218L, 950L, 985L, 1313L) */ ((
				var_1_22
			) || (
				/* 292L, 211L, 220L, 952L, 987L, 1315L) */ ((
					var_1_17
				) < (
					var_1_1
				))
			))
		) ? (
			/* 295L, 226L, 955L, 990L, 1318L) */ ((
				var_1_25
			) == (
				/* 295L, 226L, 955L, 990L, 1318L) */ ((signed char) (
					var_1_14
				))
			))
		) : (
			/* 299L, 291L, 959L, 994L, 1322L) */ ((
				/* 300L, 235L, 245L, 960L, 995L, 1323L) */ ((
					/* 301L, 229L, 246L, 961L, 996L, 1324L) */ ((
						var_1_19
					) * (
						var_1_12
					))
				) > (
					/* 304L, 234L, 249L, 964L, 999L, 1327L) */ ((
						/* 305L, 232L, 250L, 965L, 1000L, 1328L) */ (max (
							/* 305L, 232L, 250L, 965L, 1000L, 1328L) */ (
								var_1_15
							) , (
								var_1_13
							)
						))
					) - (
						var_1_1
					))
				))
			) ? (
				/* 309L, 289L, 969L, 1004L, 1332L) */ ((
					/* 310L, 263L, 269L, 970L, 1005L, 1333L) */ ((
						/* 311L, 261L, 270L, 971L, 1006L, 1334L) */ ((
							var_1_13
						) / (
							var_1_14
						))
					) <= (
						var_1_15
					))
				) ? (
					/* 315L, 283L, 975L, 1010L, 1338L) */ ((
						var_1_25
					) == (
						/* 315L, 283L, 975L, 1010L, 1338L) */ ((signed char) (
							var_1_14
						))
					))
				) : (
					/* 319L, 287L, 979L, 1014L, 1342L) */ ((
						var_1_25
					) == (
						/* 319L, 287L, 979L, 1014L, 1342L) */ ((signed char) (
							var_1_26
						))
					))
				))
			) : (
				1
			))
		))
	))
) && (
	/* 325L, 318L, 1044L, 1056L, 1348L) */ ((
		/* 326L, 302L, 308L, 1045L, 1057L, 1349L) */ ((
			var_1_26
		) <= (
			/* 328L, 301L, 310L, 1047L, 1059L, 1351L) */ ((
				-1
			) * (
				var_1_12
			))
		))
	) ? (
		/* 331L, 316L, 1050L, 1062L, 1354L) */ ((
			var_1_27
		) == (
			/* 331L, 316L, 1050L, 1062L, 1354L) */ ((signed long int) (
				var_1_18
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
