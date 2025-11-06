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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch48Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 10;
unsigned char var_1_2 = 1;
double var_1_3 = 0.0;
double var_1_4 = 128.2;
double var_1_5 = 50.1;
double var_1_6 = 64.5;
unsigned short int var_1_7 = 1;
unsigned char var_1_8 = 5;
double var_1_9 = 15.35;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 2;
signed long int var_1_12 = 32;
signed long int var_1_13 = 256;
signed char var_1_14 = 1;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 0;
signed char var_1_17 = -64;
unsigned short int var_1_18 = 64;
unsigned short int var_1_20 = 8;
unsigned short int var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
float var_1_24 = 5.4;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
float var_1_27 = 10000000.6;
unsigned char var_1_28 = 0;
double var_1_29 = 50.2;
double var_1_30 = 99.75;
double var_1_31 = 199.5;
signed char var_1_32 = -25;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 16;
signed char var_1_35 = -16;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
signed short int var_1_38 = -4;
signed short int var_1_40 = 1;
signed short int var_1_41 = 1;
float var_1_42 = 16.2;
float var_1_43 = 10.75;
float var_1_44 = 999.6;
float var_1_45 = 64.5;
signed long int var_1_46 = -2;
unsigned char var_1_47 = 5;
float var_1_48 = 100000000.5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_18 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 284L, 63L) */ var_1_20 = (
		var_1_21
	);


	// From: CodeObject2
	/* 288L, 89L) */ if (/* 289L, 72L, 73L) */ ((var_1_23) || (/* 291L, 71L, 75L) */ ((2.65f) > (var_1_24))))) {
		/* 294L, 88L) */ var_1_22 = (
			/* 297L, 87L) */ (! (
				/* 298L, 86L) */ (! (
					var_1_25
				))
			))
		);
	}


	// From: CodeObject3
	/* 300L, 105L) */ if (var_1_23) {
		/* 302L, 104L) */ var_1_26 = (
			/* 305L, 103L) */ (! (
				/* 306L, 102L) */ ((
					/* 307L, 100L) */ ((
						var_1_24
					) >= (
						var_1_27
					))
				) && (
					var_1_28
				))
			))
		);
	}


	// From: CodeObject4
	/* 311L, 118L) */ if (var_1_26) {
		/* 313L, 117L) */ var_1_29 = (
			/* 316L, 116L) */ (min (
				/* 316L, 116L) */ (
					var_1_30
				) , (
					var_1_31
				)
			))
		);
	}


	// From: CodeObject5
	/* 319L, 148L) */ if (/* 320L, 128L, 129L) */ ((/* 321L, 126L, 130L) */ ((/* 322L, 123L, 131L) */ (abs (var_1_33))) - (/* 324L, 125L, 133L) */ (abs (var_1_34))))) <= (var_1_21))) {
		/* 327L, 147L) */ var_1_32 = (
			/* 330L, 146L) */ (abs (
				var_1_35
			))
		);
	}


	// From: CodeObject6
	/* 332L, 198L) */ if (/* 333L, 160L, 161L) */ ((/* 334L, 154L, 162L) */ ((var_1_34) & (var_1_1))) <= (/* 337L, 159L, 165L) */ ((/* 338L, 157L, 166L) */ ((var_1_33) - (var_1_21))) + (-16))))) {
		/* 342L, 182L) */ var_1_36 = (
			var_1_25
		);
	} else {
		/* 346L, 196L) */ if (var_1_28) {
			/* 348L, 191L) */ var_1_36 = (
				/* 351L, 190L) */ (! (
					/* 352L, 189L) */ (! (
						var_1_37
					))
				))
			);
		} else {
			/* 354L, 195L) */ var_1_36 = (
				var_1_37
			);
		}
	}


	// From: CodeObject7
	/* 358L, 241L) */ if (/* 359L, 212L, 213L) */ ((/* 360L, 206L, 214L) */ ((/* 361L, 204L, 215L) */ ((var_1_18) | (1))) % (var_1_33))) >= (/* 365L, 211L, 219L) */ ((var_1_34) << (/* 367L, 210L, 221L) */ (max (/* 367L, 210L, 221L) */ (var_1_40) , (var_1_41)))))))) {
		/* 370L, 240L) */ var_1_38 = (
			/* 373L, 239L) */ (abs (
				/* 374L, 238L) */ (abs (
					var_1_18
				))
			))
		);
	}


	// From: CodeObject8
	/* 376L, 257L) */ if (var_1_37) {
		/* 378L, 256L) */ var_1_42 = (
			/* 381L, 255L) */ ((
				/* 382L, 252L) */ (max (
					/* 382L, 252L) */ (
						var_1_43
					) , (
						var_1_44
					)
				))
			) + (
				/* 385L, 254L) */ (abs (
					var_1_45
				))
			))
		);
	}


	// From: CodeObject9
	/* 388L, 264L) */ var_1_46 = (
		var_1_33
	);


	// From: CodeObject10
	/* 393L, 272L) */ var_1_47 = (
		var_1_41
	);


	// From: CodeObject11
	/* 398L, 280L) */ var_1_48 = (
		var_1_30
	);


	// From: Req2Batch48Filler_PS_CO
	signed long int stepLocal_0 = last_1_var_1_18;
	/* 28L, 99L, 385L, 411L, 886L, 969L) */ if (/* 10L, 60L, 61L, 386L, 412L, 867L, 952L) */ ((var_1_6) > (/* 9L, 59L, 63L, 388L, 414L, 866L, 951L) */ ((var_1_5) / (/* 8L, 58L, 65L, 390L, 416L, 865L, 950L) */ (max (/* 8L, 58L, 65L, 390L, 416L, 865L, 950L) */ (var_1_3) , (var_1_9)))))))) {
		/* 15L, 79L, 393L, 419L, 872L, 957L) */ var_1_8 = (
			/* 14L, 78L, 396L, 422L, 871L, 956L) */ (abs (
				var_1_10
			))
		);
	} else {
		/* 27L, 97L, 398L, 424L, 885L, 968L) */ if (/* 18L, 82L, 83L, 399L, 425L, 876L, 959L) */ ((stepLocal_0) <= (var_1_7))) {
			/* 22L, 92L, 402L, 428L, 880L, 963L) */ var_1_8 = (
				var_1_10
			);
		} else {
			/* 26L, 96L, 406L, 432L, 884L, 967L) */ var_1_8 = (
				var_1_11
			);
		}
	}


	// From: Req1Batch48Filler_PS_CO
	/* 915L, 48L, 277L, 304L) */ if (var_1_2) {
		/* 917L, 42L, 279L, 306L) */ if (/* 918L, 13L, 14L, 280L, 307L) */ ((/* 919L, 9L, 15L, 281L, 308L) */ ((/* 920L, 7L, 16L, 282L, 309L) */ ((var_1_3) - (var_1_4))) - (var_1_5))) == (/* 924L, 12L, 20L, 286L, 313L) */ ((15.75) - (var_1_6))))) {
			/* 927L, 37L, 289L, 316L) */ var_1_1 = (
				/* 930L, 36L, 292L, 319L) */ ((
					5
				) + (
					var_1_7
				))
			);
		} else {
			/* 933L, 41L, 295L, 322L) */ var_1_1 = (
				var_1_7
			);
		}
	} else {
		/* 937L, 47L, 299L, 326L) */ var_1_1 = (
			1
		);
	}


	// From: Req4Batch48Filler_PS_CO
	/* 1004L, 169L, 613L, 620L) */ if (var_1_2) {
		/* 1006L, 168L, 615L, 622L) */ var_1_13 = (
			var_1_11
		);
	}


	// From: Req5Batch48Filler_PS_CO
	unsigned char stepLocal_1 = var_1_10;
	/* 1029L, 205L, 641L, 659L) */ if (/* 1019L, 181L, 182L, 642L, 660L) */ ((stepLocal_1) == (/* 1018L, 180L, 184L, 644L, 662L) */ (max (/* 1018L, 180L, 184L, 644L, 662L) */ (/* 1016L, 178L, 185L, 645L, 663L) */ ((var_1_15) - (var_1_16))) , (var_1_13)))))) {
		/* 1024L, 200L, 649L, 667L) */ var_1_14 = (
			/* 1023L, 199L, 652L, 670L) */ (abs (
				var_1_17
			))
		);
	} else {
		/* 1028L, 204L, 654L, 672L) */ var_1_14 = (
			var_1_17
		);
	}


	// From: Req3Batch48Filler_PS_CO
	/* 975L, 152L, 491L, 522L) */ if (var_1_2) {
		/* 977L, 146L, 493L, 524L) */ if (/* 978L, 110L, 111L, 494L, 525L) */ ((-128) > (var_1_10))) {
			/* 981L, 144L, 497L, 528L) */ if (/* 982L, 121L, 122L, 498L, 529L) */ ((var_1_3) >= (/* 984L, 120L, 124L, 500L, 531L) */ ((2.75) / (var_1_9))))) {
				/* 987L, 139L, 503L, 534L) */ var_1_12 = (
					/* 990L, 138L, 506L, 537L) */ ((
						var_1_11
					) + (
						/* 992L, 137L, 508L, 539L) */ ((
							var_1_13
						) + (
							var_1_10
						))
					))
				);
			} else {
				/* 995L, 143L, 511L, 542L) */ var_1_12 = (
					var_1_13
				);
			}
		}
	} else {
		/* 999L, 151L, 515L, 546L) */ var_1_12 = (
			var_1_1
		);
	}


	// From: Req6Batch48Filler_PS_CO
	/* 1037L, 265L, 717L, 754L) */ if (/* 1038L, 216L, 217L, 718L, 755L) */ ((var_1_7) == (var_1_12))) {
		/* 1041L, 230L, 721L, 758L) */ var_1_18 = (
			/* 1044L, 229L, 724L, 761L) */ ((
				var_1_10
			) + (
				/* 1046L, 228L, 726L, 763L) */ (min (
					/* 1046L, 228L, 726L, 763L) */ (
						var_1_8
					) , (
						var_1_16
					)
				))
			))
		);
	} else {
		/* 1049L, 263L, 729L, 766L) */ if (/* 1050L, 233L, 234L, 730L, 767L) */ ((var_1_14) != (var_1_16))) {
			/* 1053L, 257L, 733L, 770L) */ if (/* 1054L, 242L, 243L, 734L, 771L) */ ((-256) >= (var_1_13))) {
				/* 1057L, 252L, 737L, 774L) */ var_1_18 = (
					var_1_16
				);
			} else {
				/* 1061L, 256L, 741L, 778L) */ var_1_18 = (
					var_1_15
				);
			}
		} else {
			/* 1065L, 262L, 745L, 782L) */ var_1_18 = (
				var_1_10
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 4611686.018427388000e+12F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427388000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -126);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 255);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -126);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (var_1_2) {
		if (/* 405L, 13L, 23L, 334L, 361L, 1073L) */ ((/* 406L, 9L, 24L, 335L, 362L, 1074L) */ ((/* 407L, 7L, 25L, 336L, 363L, 1075L) */ ((var_1_3) - (var_1_4))) - (var_1_5))) == (/* 411L, 12L, 29L, 340L, 367L, 1079L) */ ((15.75) - (var_1_6))))) {
		} else {
		}
	} else {
	}
	if (/* 430L, 60L, 68L, 438L, 464L, 894L, 1098L, 37L) */ ((var_1_6) > (/* 432L, 59L, 70L, 440L, 466L, 893L, 1100L, 36L) */ ((var_1_5) / (/* 434L, 58L, 72L, 442L, 468L, 892L, 1102L, 35L) */ (max (/* 434L, 58L, 72L, 442L, 468L, 892L, 1102L, 35L) */ (var_1_3) , (var_1_9)))))))) {
	} else {
		if (/* 443L, 82L, 86L, 451L, 477L, 903L, 1111L, 46L) */ ((last_1_var_1_18) <= (var_1_7))) {
		} else {
		}
	}
	if (var_1_2) {
		if (/* 461L, 110L, 114L, 556L, 587L, 1129L) */ ((-128) > (var_1_10))) {
			if (/* 465L, 121L, 127L, 560L, 591L, 1133L) */ ((var_1_3) >= (/* 467L, 120L, 129L, 562L, 593L, 1135L) */ ((2.75) / (var_1_9))))) {
			} else {
			}
		}
	} else {
	}
	if (var_1_2) {
	}
	if (/* 495L, 181L, 189L, 678L, 696L, 1163L) */ ((var_1_10) == (/* 497L, 180L, 191L, 680L, 698L, 1165L) */ (max (/* 497L, 180L, 191L, 680L, 698L, 1165L) */ (/* 498L, 178L, 192L, 681L, 699L, 1166L) */ ((var_1_15) - (var_1_16))) , (var_1_13)))))) {
	} else {
	}
	if (/* 517L, 216L, 220L, 792L, 829L, 1185L) */ ((var_1_7) == (var_1_12))) {
	} else {
		if (/* 529L, 233L, 237L, 804L, 841L, 1197L) */ ((var_1_14) != (var_1_16))) {
			if (/* 533L, 242L, 246L, 808L, 845L, 1201L) */ ((-256) >= (var_1_13))) {
			} else {
			}
		} else {
		}
	}
	return /* 553L) */ ((
	/* 552L) */ ((
		/* 551L) */ ((
			/* 550L) */ ((
				/* 549L) */ ((
					/* 402L, 49L, 331L, 358L, 1070L) */ ((
						var_1_2
					) ? (
						/* 404L, 43L, 333L, 360L, 1072L) */ ((
							/* 405L, 13L, 23L, 334L, 361L, 1073L) */ ((
								/* 406L, 9L, 24L, 335L, 362L, 1074L) */ ((
									/* 407L, 7L, 25L, 336L, 363L, 1075L) */ ((
										var_1_3
									) - (
										var_1_4
									))
								) - (
									var_1_5
								))
							) == (
								/* 411L, 12L, 29L, 340L, 367L, 1079L) */ ((
									15.75
								) - (
									var_1_6
								))
							))
						) ? (
							/* 414L, 37L, 343L, 370L, 1082L) */ ((
								var_1_1
							) == (
								/* 414L, 37L, 343L, 370L, 1082L) */ ((unsigned short int) (
									/* 417L, 36L, 346L, 373L, 1085L) */ ((
										5
									) + (
										var_1_7
									))
								))
							))
						) : (
							/* 420L, 41L, 349L, 376L, 1088L) */ ((
								var_1_1
							) == (
								/* 420L, 41L, 349L, 376L, 1088L) */ ((unsigned short int) (
									var_1_7
								))
							))
						))
					) : (
						/* 424L, 47L, 353L, 380L, 1092L) */ ((
							var_1_1
						) == (
							/* 424L, 47L, 353L, 380L, 1092L) */ ((unsigned short int) (
								1
							))
						))
					))
				) && (
					/* 429L, 100L, 437L, 463L, 913L, 1097L, 56L) */ ((
						/* 430L, 60L, 68L, 438L, 464L, 894L, 1098L, 37L) */ ((
							var_1_6
						) > (
							/* 432L, 59L, 70L, 440L, 466L, 893L, 1100L, 36L) */ ((
								var_1_5
							) / (
								/* 434L, 58L, 72L, 442L, 468L, 892L, 1102L, 35L) */ (max (
									/* 434L, 58L, 72L, 442L, 468L, 892L, 1102L, 35L) */ (
										var_1_3
									) , (
										var_1_9
									)
								))
							))
						))
					) ? (
						/* 437L, 79L, 445L, 471L, 899L, 1105L, 42L) */ ((
							var_1_8
						) == (
							/* 437L, 79L, 445L, 471L, 899L, 1105L, 42L) */ ((unsigned char) (
								/* 440L, 78L, 448L, 474L, 898L, 1108L, 41L) */ (abs (
									var_1_10
								))
							))
						))
					) : (
						/* 442L, 98L, 450L, 476L, 912L, 1110L, 55L) */ ((
							/* 443L, 82L, 86L, 451L, 477L, 903L, 1111L, 46L) */ ((
								last_1_var_1_18
							) <= (
								var_1_7
							))
						) ? (
							/* 447L, 92L, 454L, 480L, 907L, 1115L, 50L) */ ((
								var_1_8
							) == (
								/* 447L, 92L, 454L, 480L, 907L, 1115L, 50L) */ ((unsigned char) (
									var_1_10
								))
							))
						) : (
							/* 451L, 96L, 458L, 484L, 911L, 1119L, 54L) */ ((
								var_1_8
							) == (
								/* 451L, 96L, 458L, 484L, 911L, 1119L, 54L) */ ((unsigned char) (
									var_1_11
								))
							))
						))
					))
				))
			) && (
				/* 458L, 153L, 553L, 584L, 1126L) */ ((
					var_1_2
				) ? (
					/* 460L, 147L, 555L, 586L, 1128L) */ ((
						/* 461L, 110L, 114L, 556L, 587L, 1129L) */ ((
							-128
						) > (
							var_1_10
						))
					) ? (
						/* 464L, 145L, 559L, 590L, 1132L) */ ((
							/* 465L, 121L, 127L, 560L, 591L, 1133L) */ ((
								var_1_3
							) >= (
								/* 467L, 120L, 129L, 562L, 593L, 1135L) */ ((
									2.75
								) / (
									var_1_9
								))
							))
						) ? (
							/* 470L, 139L, 565L, 596L, 1138L) */ ((
								var_1_12
							) == (
								/* 470L, 139L, 565L, 596L, 1138L) */ ((signed long int) (
									/* 473L, 138L, 568L, 599L, 1141L) */ ((
										var_1_11
									) + (
										/* 475L, 137L, 570L, 601L, 1143L) */ ((
											var_1_13
										) + (
											var_1_10
										))
									))
								))
							))
						) : (
							/* 478L, 143L, 573L, 604L, 1146L) */ ((
								var_1_12
							) == (
								/* 478L, 143L, 573L, 604L, 1146L) */ ((signed long int) (
									var_1_13
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 482L, 151L, 577L, 608L, 1150L) */ ((
						var_1_12
					) == (
						/* 482L, 151L, 577L, 608L, 1150L) */ ((signed long int) (
							var_1_1
						))
					))
				))
			))
		) && (
			/* 487L, 170L, 627L, 634L, 1155L) */ ((
				var_1_2
			) ? (
				/* 489L, 168L, 629L, 636L, 1157L) */ ((
					var_1_13
				) == (
					/* 489L, 168L, 629L, 636L, 1157L) */ ((signed long int) (
						var_1_11
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 494L, 206L, 677L, 695L, 1162L) */ ((
			/* 495L, 181L, 189L, 678L, 696L, 1163L) */ ((
				var_1_10
			) == (
				/* 497L, 180L, 191L, 680L, 698L, 1165L) */ (max (
					/* 497L, 180L, 191L, 680L, 698L, 1165L) */ (
						/* 498L, 178L, 192L, 681L, 699L, 1166L) */ ((
							var_1_15
						) - (
							var_1_16
						))
					) , (
						var_1_13
					)
				))
			))
		) ? (
			/* 502L, 200L, 685L, 703L, 1170L) */ ((
				var_1_14
			) == (
				/* 502L, 200L, 685L, 703L, 1170L) */ ((signed char) (
					/* 505L, 199L, 688L, 706L, 1173L) */ (abs (
						var_1_17
					))
				))
			))
		) : (
			/* 507L, 204L, 690L, 708L, 1175L) */ ((
				var_1_14
			) == (
				/* 507L, 204L, 690L, 708L, 1175L) */ ((signed char) (
					var_1_17
				))
			))
		))
	))
) && (
	/* 516L, 266L, 791L, 828L, 1184L) */ ((
		/* 517L, 216L, 220L, 792L, 829L, 1185L) */ ((
			var_1_7
		) == (
			var_1_12
		))
	) ? (
		/* 520L, 230L, 795L, 832L, 1188L) */ ((
			var_1_18
		) == (
			/* 520L, 230L, 795L, 832L, 1188L) */ ((unsigned short int) (
				/* 523L, 229L, 798L, 835L, 1191L) */ ((
					var_1_10
				) + (
					/* 525L, 228L, 800L, 837L, 1193L) */ (min (
						/* 525L, 228L, 800L, 837L, 1193L) */ (
							var_1_8
						) , (
							var_1_16
						)
					))
				))
			))
		))
	) : (
		/* 528L, 264L, 803L, 840L, 1196L) */ ((
			/* 529L, 233L, 237L, 804L, 841L, 1197L) */ ((
				var_1_14
			) != (
				var_1_16
			))
		) ? (
			/* 532L, 258L, 807L, 844L, 1200L) */ ((
				/* 533L, 242L, 246L, 808L, 845L, 1201L) */ ((
					-256
				) >= (
					var_1_13
				))
			) ? (
				/* 536L, 252L, 811L, 848L, 1204L) */ ((
					var_1_18
				) == (
					/* 536L, 252L, 811L, 848L, 1204L) */ ((unsigned short int) (
						var_1_16
					))
				))
			) : (
				/* 540L, 256L, 815L, 852L, 1208L) */ ((
					var_1_18
				) == (
					/* 540L, 256L, 815L, 852L, 1208L) */ ((unsigned short int) (
						var_1_15
					))
				))
			))
		) : (
			/* 544L, 262L, 819L, 856L, 1212L) */ ((
				var_1_18
			) == (
				/* 544L, 262L, 819L, 856L, 1212L) */ ((unsigned short int) (
					var_1_10
				))
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
