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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch75Filler_PR_CN.c", 13, "reach_error"); }
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
float var_1_1 = 63.6;
signed long int var_1_3 = -256;
float var_1_4 = 128.75;
float var_1_5 = 25.125;
float var_1_6 = 1000000.75;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 0;
signed long int var_1_10 = 64;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
float var_1_15 = 25.75;
double var_1_16 = 0.4;
double var_1_17 = 0.0;
double var_1_18 = 0.0;
double var_1_19 = 1000000000000.5;
double var_1_20 = 24.8;
signed char var_1_21 = 1;
double var_1_22 = 200.8;
unsigned short int var_1_23 = 40076;
unsigned short int var_1_24 = 8;
unsigned long int var_1_25 = 2;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -256;
signed short int var_1_28 = 64;
signed long int var_1_29 = -10;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
float var_1_33 = 10.775;
signed long int var_1_34 = -25;
signed long int var_1_35 = -2;
float var_1_36 = 9999.1;
float var_1_37 = 64.625;
float var_1_38 = 7.5;
float var_1_39 = 4.3;
float var_1_40 = 8.25;
unsigned long int var_1_41 = 256;
unsigned long int var_1_42 = 1;
unsigned long int var_1_43 = 128;
unsigned long int var_1_44 = 64;
float var_1_45 = 9.79;
signed long int var_1_46 = -10;
unsigned char var_1_47 = 16;
unsigned char var_1_48 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 1;
unsigned long int last_1_var_1_25 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch75Filler_PR_CN
	unsigned char stepLocal_0 = /* 4L, 6L, 10L, 274L, 289L, 955L, 987L) */ ((-1) <= (last_1_var_1_25));
	/* 18L, 27L, 272L, 287L, 967L, 1003L) */ if (/* 9L, 8L, 9L, 273L, 288L, 958L, 994L) */ ((stepLocal_0) || (last_1_var_1_7))) {
		/* 17L, 26L, 278L, 293L, 966L, 1002L) */ var_1_1 = (
			/* 16L, 25L, 281L, 296L, 965L, 1001L) */ ((
				var_1_4
			) + (
				/* 15L, 24L, 283L, 298L, 964L, 1000L) */ ((
					var_1_5
				) + (
					var_1_6
				))
			))
		);
	}


	// From: Req2Batch75Filler_PR_CN
	/* 1010L, 87L, 403L, 437L) */ if (/* 1011L, 41L, 42L, 404L, 438L) */ ((/* 1012L, 39L, 43L, 405L, 439L) */ (min (/* 1012L, 39L, 43L, 405L, 439L) */ (/* 1013L, 35L, 44L, 406L, 440L) */ ((var_1_3) + (var_1_8))) , (/* 1016L, 38L, 47L, 409L, 443L) */ ((4) | (var_1_9)))))) >= (var_1_10))) {
		/* 1020L, 67L, 413L, 447L) */ var_1_7 = (
			/* 1023L, 66L, 416L, 450L) */ ((
				/* 1024L, 64L, 417L, 451L) */ ((
					var_1_11
				) && (
					var_1_12
				))
			) && (
				var_1_13
			))
		);
	} else {
		/* 1028L, 85L, 421L, 455L) */ if (/* 1029L, 70L, 71L, 422L, 456L) */ ((var_1_6) == (var_1_1))) {
			/* 1032L, 80L, 425L, 459L) */ var_1_7 = (
				var_1_14
			);
		} else {
			/* 1036L, 84L, 429L, 463L) */ var_1_7 = (
				var_1_13
			);
		}
	}


	// From: Req3Batch75Filler_PR_CN
	/* 1042L, 115L, 537L, 548L) */ if (/* 1043L, 102L, 103L, 538L, 549L) */ (! (/* 1044L, 101L, 104L, 539L, 550L) */ ((var_1_4) < (16.8f))))) {
		/* 1047L, 114L, 542L, 553L) */ var_1_15 = (
			var_1_6
		);
	}


	// From: CodeObject2
	/* 144L) */ if (/* 83L, 82L) */ ((/* 84L, 77L) */ ((var_1_27) ^ (/* 86L, 76L) */ ((var_1_28) + (var_1_29))))) <= (/* 89L, 81L) */ (abs (/* 90L, 80L) */ (min (/* 90L, 80L) */ (var_1_34) , (var_1_35)))))))) {
		/* 111L) */ var_1_33 = (
			/* 110L) */ (abs (
				/* 109L) */ (min (
					/* 109L) */ (
						/* 107L) */ (min (
							/* 107L) */ (
								var_1_36
							) , (
								var_1_37
							)
						))
					) , (
						var_1_38
					)
				))
			))
		);
	} else {
		/* 142L) */ if (/* 119L, 118L) */ ((var_1_38) >= (/* 121L, 117L) */ (max (/* 121L, 117L) */ (var_1_37) , (/* 123L, 116L) */ ((var_1_36) * (var_1_39)))))))) {
			/* 140L) */ if (var_1_31) {
				/* 139L) */ var_1_33 = (
					var_1_40
				);
			}
		}
	}


	// From: Req4Batch75Filler_PR_CN
	/* 1053L, 173L, 645L, 677L) */ if (/* 1054L, 125L, 126L, 646L, 678L) */ ((var_1_8) > (var_1_3))) {
		/* 1057L, 141L, 649L, 681L) */ var_1_16 = (
			/* 1060L, 140L, 652L, 684L) */ ((
				/* 1061L, 138L, 653L, 685L) */ ((
					/* 1062L, 136L, 654L, 686L) */ (min (
						/* 1062L, 136L, 654L, 686L) */ (
							var_1_17
						) , (
							var_1_18
						)
					))
				) - (
					var_1_19
				))
			) - (
				var_1_20
			))
		);
	} else {
		/* 1067L, 171L, 659L, 691L) */ if (/* 1068L, 148L, 149L, 660L, 692L) */ ((var_1_18) > (/* 1070L, 147L, 151L, 662L, 694L) */ ((var_1_20) + (/* 1072L, 146L, 153L, 664L, 696L) */ ((var_1_19) * (var_1_17))))))) {
			/* 1075L, 166L, 667L, 699L) */ var_1_16 = (
				var_1_6
			);
		} else {
			/* 1079L, 170L, 671L, 703L) */ var_1_16 = (
				var_1_20
			);
		}
	}


	// From: CodeObject6
	/* 277L) */ if (/* 248L, 247L) */ ((var_1_36) < (/* 250L, 246L) */ (max (/* 250L, 246L) */ (/* 251L, 242L) */ ((var_1_33) * (var_1_37))) , (/* 254L, 245L) */ (min (/* 254L, 245L) */ (var_1_38) , (-0.8f))))))))) {
		/* 272L) */ var_1_47 = (
			/* 271L) */ (min (
				/* 271L) */ (
					/* 269L) */ (abs (
						var_1_48
					))
				) , (
					4
				)
			))
		);
	} else {
		/* 276L) */ var_1_47 = (
			var_1_48
		);
	}


	// From: Req5Batch75Filler_PR_CN
	/* 1085L, 204L, 773L, 787L) */ if (/* 1086L, 186L, 187L, 774L, 788L) */ ((/* 1087L, 184L, 188L, 775L, 789L) */ (- (/* 1088L, 183L, 189L, 776L, 790L) */ ((var_1_17) + (var_1_16))))) >= (var_1_16))) {
		/* 1092L, 203L, 780L, 794L) */ var_1_21 = (
			/* 1095L, 202L, 783L, 797L) */ (abs (
				-50
			))
		);
	}


	// From: Req7Batch75Filler_PR_CN
	/* 1128L, 267L, 929L, 935L) */ var_1_25 = (
		var_1_23
	);


	// From: CodeObject1
	/* 69L) */ if (/* 45L, 44L) */ ((/* 46L, 42L) */ ((var_1_27) % (var_1_28))) >= (var_1_29))) {
		/* 60L) */ var_1_26 = (
			/* 59L) */ ((
				var_1_30
			) || (
				var_1_31
			))
		);
	} else {
		/* 68L) */ var_1_26 = (
			/* 67L) */ ((
				var_1_30
			) && (
				/* 66L) */ ((
					var_1_31
				) && (
					var_1_32
				))
			))
		);
	}


	// From: CodeObject3
	/* 194L) */ if (/* 153L, 152L) */ ((/* 154L, 150L) */ ((var_1_29) & (var_1_42))) <= (var_1_43))) {
		/* 192L) */ if (/* 166L, 165L) */ ((var_1_38) <= (var_1_33))) {
			/* 190L) */ if (/* 174L, 173L) */ (! (var_1_31))) {
				/* 181L) */ var_1_41 = (
					var_1_44
				);
			} else {
				/* 189L) */ var_1_41 = (
					1000u
				);
			}
		}
	}


	// From: CodeObject5
	/* 235L) */ if (/* 212L, 211L) */ ((/* 213L, 208L) */ ((var_1_27) ^ (0))) >= (/* 216L, 210L) */ (~ (var_1_43))))) {
		/* 227L) */ var_1_46 = (
			var_1_28
		);
	} else {
		/* 234L) */ var_1_46 = (
			/* 233L) */ (abs (
				/* 232L) */ (max (
					/* 232L) */ (
						var_1_28
					) , (
						var_1_27
					)
				))
			))
		);
	}


	// From: Req6Batch75Filler_PR_CN
	signed long int stepLocal_1 = /* 1099L, 231L, 235L, 836L, 861L) */ ((var_1_23) - (var_1_24));
	/* 1123L, 258L, 828L, 853L) */ if (/* 1107L, 216L, 217L, 829L, 854L) */ ((var_1_18) < (/* 1106L, 215L, 219L, 831L, 856L) */ ((var_1_16) * (var_1_4))))) {
		/* 1118L, 252L, 834L, 859L) */ if (/* 1109L, 233L, 234L, 835L, 860L) */ ((stepLocal_1) < (var_1_25))) {
			/* 1113L, 247L, 840L, 865L) */ var_1_22 = (
				var_1_5
			);
		} else {
			/* 1117L, 251L, 844L, 869L) */ var_1_22 = (
				var_1_17
			);
		}
	} else {
		/* 1122L, 257L, 848L, 873L) */ var_1_22 = (
			var_1_20
		);
	}


	// From: CodeObject4
	/* 201L) */ var_1_45 = (
		var_1_40
	);
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -230584.3009213691400e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -230584.3009213691400e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65535);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65535);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 4611686.018427383000e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32768);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483647);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483647);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854766000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 4294967295);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 4294967295);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 4294967294);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_25 = var_1_25;
}

int property(void) {
	if (/* 280L, 8L, 14L, 303L, 318L, 975L, 1134L, 27L) */ ((/* 281L, 6L, 15L, 304L, 319L, 972L, 1135L, 24L) */ ((-1) <= (last_1_var_1_25))) || (last_1_var_1_7))) {
	}
	if (/* 300L, 41L, 51L, 472L, 506L, 1154L) */ ((/* 301L, 39L, 52L, 473L, 507L, 1155L) */ (min (/* 301L, 39L, 52L, 473L, 507L, 1155L) */ (/* 302L, 35L, 53L, 474L, 508L, 1156L) */ ((var_1_3) + (var_1_8))) , (/* 305L, 38L, 56L, 477L, 511L, 1159L) */ ((4) | (var_1_9)))))) >= (var_1_10))) {
	} else {
		if (/* 318L, 70L, 74L, 490L, 524L, 1172L) */ ((var_1_6) == (var_1_1))) {
		} else {
		}
	}
	if (/* 332L, 102L, 107L, 560L, 571L, 1186L) */ (! (/* 333L, 101L, 108L, 561L, 572L, 1187L) */ ((var_1_4) < (16.8f))))) {
	}
	if (/* 343L, 125L, 129L, 710L, 742L, 1197L) */ ((var_1_8) > (var_1_3))) {
	} else {
		if (/* 357L, 148L, 156L, 724L, 756L, 1211L) */ ((var_1_18) > (/* 359L, 147L, 158L, 726L, 758L, 1213L) */ ((var_1_20) + (/* 361L, 146L, 160L, 728L, 760L, 1215L) */ ((var_1_19) * (var_1_17))))))) {
		} else {
		}
	}
	if (/* 375L, 186L, 193L, 802L, 816L, 1229L) */ ((/* 376L, 184L, 194L, 803L, 817L, 1230L) */ (- (/* 377L, 183L, 195L, 804L, 818L, 1231L) */ ((var_1_17) + (var_1_16))))) >= (var_1_16))) {
	}
	if (/* 388L, 216L, 222L, 879L, 904L, 1242L) */ ((var_1_18) < (/* 390L, 215L, 224L, 881L, 906L, 1244L) */ ((var_1_16) * (var_1_4))))) {
		if (/* 394L, 233L, 239L, 885L, 910L, 1248L) */ ((/* 395L, 231L, 240L, 886L, 911L, 1249L) */ ((var_1_23) - (var_1_24))) < (var_1_25))) {
		} else {
		}
	} else {
	}
	return /* 423L) */ ((
	/* 422L) */ ((
		/* 421L) */ ((
			/* 420L) */ ((
				/* 419L) */ ((
					/* 418L) */ ((
						/* 279L, 28L, 302L, 317L, 984L, 1133L, 36L) */ ((
							/* 280L, 8L, 14L, 303L, 318L, 975L, 1134L, 27L) */ ((
								/* 281L, 6L, 15L, 304L, 319L, 972L, 1135L, 24L) */ ((
									-1
								) <= (
									last_1_var_1_25
								))
							) || (
								last_1_var_1_7
							))
						) ? (
							/* 287L, 26L, 308L, 323L, 983L, 1141L, 35L) */ ((
								var_1_1
							) == (
								/* 287L, 26L, 308L, 323L, 983L, 1141L, 35L) */ ((float) (
									/* 290L, 25L, 311L, 326L, 982L, 1144L, 34L) */ ((
										var_1_4
									) + (
										/* 292L, 24L, 313L, 328L, 981L, 1146L, 33L) */ ((
											var_1_5
										) + (
											var_1_6
										))
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 299L, 88L, 471L, 505L, 1153L) */ ((
							/* 300L, 41L, 51L, 472L, 506L, 1154L) */ ((
								/* 301L, 39L, 52L, 473L, 507L, 1155L) */ (min (
									/* 301L, 39L, 52L, 473L, 507L, 1155L) */ (
										/* 302L, 35L, 53L, 474L, 508L, 1156L) */ ((
											var_1_3
										) + (
											var_1_8
										))
									) , (
										/* 305L, 38L, 56L, 477L, 511L, 1159L) */ ((
											4
										) | (
											var_1_9
										))
									)
								))
							) >= (
								var_1_10
							))
						) ? (
							/* 309L, 67L, 481L, 515L, 1163L) */ ((
								var_1_7
							) == (
								/* 309L, 67L, 481L, 515L, 1163L) */ ((unsigned char) (
									/* 312L, 66L, 484L, 518L, 1166L) */ ((
										/* 313L, 64L, 485L, 519L, 1167L) */ ((
											var_1_11
										) && (
											var_1_12
										))
									) && (
										var_1_13
									))
								))
							))
						) : (
							/* 317L, 86L, 489L, 523L, 1171L) */ ((
								/* 318L, 70L, 74L, 490L, 524L, 1172L) */ ((
									var_1_6
								) == (
									var_1_1
								))
							) ? (
								/* 321L, 80L, 493L, 527L, 1175L) */ ((
									var_1_7
								) == (
									/* 321L, 80L, 493L, 527L, 1175L) */ ((unsigned char) (
										var_1_14
									))
								))
							) : (
								/* 325L, 84L, 497L, 531L, 1179L) */ ((
									var_1_7
								) == (
									/* 325L, 84L, 497L, 531L, 1179L) */ ((unsigned char) (
										var_1_13
									))
								))
							))
						))
					))
				) && (
					/* 331L, 116L, 559L, 570L, 1185L) */ ((
						/* 332L, 102L, 107L, 560L, 571L, 1186L) */ (! (
							/* 333L, 101L, 108L, 561L, 572L, 1187L) */ ((
								var_1_4
							) < (
								16.8f
							))
						))
					) ? (
						/* 336L, 114L, 564L, 575L, 1190L) */ ((
							var_1_15
						) == (
							/* 336L, 114L, 564L, 575L, 1190L) */ ((float) (
								var_1_6
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 342L, 174L, 709L, 741L, 1196L) */ ((
					/* 343L, 125L, 129L, 710L, 742L, 1197L) */ ((
						var_1_8
					) > (
						var_1_3
					))
				) ? (
					/* 346L, 141L, 713L, 745L, 1200L) */ ((
						var_1_16
					) == (
						/* 346L, 141L, 713L, 745L, 1200L) */ ((double) (
							/* 349L, 140L, 716L, 748L, 1203L) */ ((
								/* 350L, 138L, 717L, 749L, 1204L) */ ((
									/* 351L, 136L, 718L, 750L, 1205L) */ (min (
										/* 351L, 136L, 718L, 750L, 1205L) */ (
											var_1_17
										) , (
											var_1_18
										)
									))
								) - (
									var_1_19
								))
							) - (
								var_1_20
							))
						))
					))
				) : (
					/* 356L, 172L, 723L, 755L, 1210L) */ ((
						/* 357L, 148L, 156L, 724L, 756L, 1211L) */ ((
							var_1_18
						) > (
							/* 359L, 147L, 158L, 726L, 758L, 1213L) */ ((
								var_1_20
							) + (
								/* 361L, 146L, 160L, 728L, 760L, 1215L) */ ((
									var_1_19
								) * (
									var_1_17
								))
							))
						))
					) ? (
						/* 364L, 166L, 731L, 763L, 1218L) */ ((
							var_1_16
						) == (
							/* 364L, 166L, 731L, 763L, 1218L) */ ((double) (
								var_1_6
							))
						))
					) : (
						/* 368L, 170L, 735L, 767L, 1222L) */ ((
							var_1_16
						) == (
							/* 368L, 170L, 735L, 767L, 1222L) */ ((double) (
								var_1_20
							))
						))
					))
				))
			))
		) && (
			/* 374L, 205L, 801L, 815L, 1228L) */ ((
				/* 375L, 186L, 193L, 802L, 816L, 1229L) */ ((
					/* 376L, 184L, 194L, 803L, 817L, 1230L) */ (- (
						/* 377L, 183L, 195L, 804L, 818L, 1231L) */ ((
							var_1_17
						) + (
							var_1_16
						))
					))
				) >= (
					var_1_16
				))
			) ? (
				/* 381L, 203L, 808L, 822L, 1235L) */ ((
					var_1_21
				) == (
					/* 381L, 203L, 808L, 822L, 1235L) */ ((signed char) (
						/* 384L, 202L, 811L, 825L, 1238L) */ (abs (
							-50
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 387L, 259L, 878L, 903L, 1241L) */ ((
			/* 388L, 216L, 222L, 879L, 904L, 1242L) */ ((
				var_1_18
			) < (
				/* 390L, 215L, 224L, 881L, 906L, 1244L) */ ((
					var_1_16
				) * (
					var_1_4
				))
			))
		) ? (
			/* 393L, 253L, 884L, 909L, 1247L) */ ((
				/* 394L, 233L, 239L, 885L, 910L, 1248L) */ ((
					/* 395L, 231L, 240L, 886L, 911L, 1249L) */ ((
						var_1_23
					) - (
						var_1_24
					))
				) < (
					var_1_25
				))
			) ? (
				/* 399L, 247L, 890L, 915L, 1253L) */ ((
					var_1_22
				) == (
					/* 399L, 247L, 890L, 915L, 1253L) */ ((double) (
						var_1_5
					))
				))
			) : (
				/* 403L, 251L, 894L, 919L, 1257L) */ ((
					var_1_22
				) == (
					/* 403L, 251L, 894L, 919L, 1257L) */ ((double) (
						var_1_17
					))
				))
			))
		) : (
			/* 407L, 257L, 898L, 923L, 1261L) */ ((
				var_1_22
			) == (
				/* 407L, 257L, 898L, 923L, 1261L) */ ((double) (
					var_1_20
				))
			))
		))
	))
) && (
	/* 413L, 267L, 941L, 947L, 1267L) */ ((
		var_1_25
	) == (
		/* 413L, 267L, 941L, 947L, 1267L) */ ((unsigned long int) (
			var_1_23
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
