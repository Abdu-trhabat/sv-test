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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch185Filler_PR_CN.c", 13, "reach_error"); }
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
float var_1_1 = 31.25;
unsigned short int var_1_2 = 45232;
unsigned short int var_1_3 = 16;
signed long int var_1_4 = -32;
signed long int var_1_5 = -8;
float var_1_8 = 256.875;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 10;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned short int var_1_16 = 50;
unsigned short int var_1_17 = 4;
signed short int var_1_18 = 128;
float var_1_19 = 64.4;
float var_1_20 = 32.5;
float var_1_21 = 128.3;
float var_1_22 = 24.8;
float var_1_23 = 31.75;
signed short int var_1_24 = -2;
signed short int var_1_25 = 4;
float var_1_26 = 256.8;
float var_1_27 = 999999.6;
float var_1_28 = 3.2;
float var_1_29 = 50.75;
unsigned short int var_1_30 = 50;
float var_1_31 = 1000000000000.75;
float var_1_32 = 15.586;
unsigned short int var_1_33 = 0;
unsigned long int var_1_34 = 16;
unsigned long int var_1_35 = 4068294875;
unsigned long int var_1_36 = 64;
unsigned long int var_1_37 = 10;
double var_1_38 = 4.6;
double var_1_39 = 32.8;
signed long int var_1_40 = 0;
signed char var_1_41 = 10;
signed char var_1_42 = -1;
signed long int var_1_43 = 64;
float var_1_44 = 100.7;
signed short int var_1_45 = 64;
float var_1_46 = 200.3;
unsigned short int var_1_47 = 0;
unsigned char var_1_48 = 1;
unsigned short int var_1_49 = 32;
unsigned long int var_1_50 = 2;

// Calibration values

// Last'ed variables
float last_1_var_1_29 = 50.75;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch185Filler_PR_CN
	unsigned short int stepLocal_3 = var_1_3;
	/* 22L, 110L, 439L, 459L, 854L, 947L) */ if (/* 6L, 81L, 82L, 440L, 460L, 838L, 932L) */ ((var_1_8) > (last_1_var_1_29))) {
		/* 15L, 102L, 443L, 463L, 847L, 940L) */ if (/* 9L, 90L, 91L, 444L, 464L, 841L, 934L) */ ((var_1_10) >= (stepLocal_3))) {
			/* 14L, 101L, 447L, 467L, 846L, 939L) */ var_1_13 = (
				/* 13L, 100L, 450L, 470L, 845L, 938L) */ (! (
					var_1_11
				))
			);
		}
	} else {
		/* 21L, 109L, 452L, 472L, 853L, 946L) */ var_1_13 = (
			/* 20L, 108L, 455L, 475L, 852L, 945L) */ ((
				var_1_14
			) || (
				var_1_15
			))
		);
	}


	// From: CodeObject6
	/* 153L) */ var_1_44 = (
		/* 152L) */ (min (
			/* 152L) */ (
				/* 150L) */ (abs (
					/* 149L) */ (abs (
						var_1_39
					))
				))
			) , (
				99.6f
			)
		))
	);


	// From: CodeObject7
	/* 179L) */ if (/* 163L, 162L) */ ((var_1_44) <= (/* 165L, 161L) */ ((var_1_38) / (var_1_46))))) {
		/* 178L) */ var_1_45 = (
			/* 177L) */ (min (
				/* 177L) */ (
					var_1_42
				) , (
					-8
				)
			))
		);
	}


	// From: Req7Batch185Filler_PR_CN
	/* 1016L, 279L, 757L, 777L) */ if (/* 1017L, 252L, 253L, 758L, 778L) */ ((var_1_10) >= (var_1_3))) {
		/* 1020L, 263L, 761L, 781L) */ var_1_29 = (
			/* 1023L, 262L, 764L, 784L) */ (abs (
				var_1_27
			))
		);
	} else {
		/* 1025L, 277L, 766L, 786L) */ if (/* 1026L, 266L, 267L, 767L, 787L) */ ((var_1_13) || (var_1_14))) {
			/* 1029L, 276L, 770L, 790L) */ var_1_29 = (
				64.125f
			);
		}
	}


	// From: CodeObject1
	/* 63L) */ if (/* 51L, 50L) */ ((var_1_31) > (var_1_32))) {
		/* 62L) */ var_1_30 = (
			/* 61L) */ (max (
				/* 61L) */ (
					16
				) , (
					var_1_33
				)
			))
		);
	}


	// From: Req2Batch185Filler_PR_CN
	signed long int stepLocal_2 = /* 906L, 50L, 54L, 373L, 390L) */ ((var_1_3) / (var_1_10));
	/* 922L, 73L, 371L, 388L) */ if (/* 911L, 52L, 53L, 372L, 389L) */ ((stepLocal_2) <= (var_1_4))) {
		/* 921L, 72L, 377L, 394L) */ var_1_9 = (
			/* 920L, 71L, 380L, 397L) */ ((
				/* 918L, 69L, 381L, 398L) */ ((
					/* 916L, 67L, 382L, 399L) */ ((
						var_1_8
					) >= (
						var_1_29
					))
				) || (
					var_1_11
				))
			) && (
				var_1_12
			))
		);
	}


	// From: Req5Batch185Filler_PR_CN
	/* 983L, 221L, 628L, 646L) */ if (/* 984L, 196L, 197L, 629L, 647L) */ ((/* 985L, 192L, 198L, 630L, 648L) */ ((/* 986L, 190L, 199L, 631L, 649L) */ (max (/* 986L, 190L, 199L, 631L, 649L) */ (var_1_19) , (var_1_20)))) - (var_1_21))) >= (/* 990L, 195L, 203L, 635L, 653L) */ ((var_1_22) - (var_1_23))))) {
		/* 993L, 220L, 638L, 656L) */ var_1_18 = (
			/* 996L, 219L, 641L, 659L) */ (min (
				/* 996L, 219L, 641L, 659L) */ (
					var_1_24
				) , (
					var_1_25
				)
			))
		);
	}


	// From: CodeObject3
	/* 104L) */ var_1_37 = (
		var_1_33
	);


	// From: CodeObject4
	/* 112L) */ var_1_38 = (
		var_1_39
	);


	// From: CodeObject8
	/* 220L) */ if (/* 187L, 186L) */ ((var_1_36) >= (/* 189L, 185L) */ (abs (var_1_41))))) {
		/* 218L) */ if (/* 200L, 199L) */ ((var_1_48) && (/* 202L, 198L) */ ((var_1_39) > (var_1_38))))) {
			/* 217L) */ var_1_47 = (
				/* 216L) */ (max (
					/* 216L) */ (
						var_1_41
					) , (
						/* 215L) */ (max (
							/* 215L) */ (
								var_1_33
							) , (
								var_1_49
							)
						))
					)
				))
			);
		}
	}


	// From: Req6Batch185Filler_PR_CN
	/* 1001L, 242L, 700L, 714L) */ if (var_1_11) {
		/* 1003L, 237L, 702L, 716L) */ var_1_26 = (
			/* 1006L, 236L, 705L, 719L) */ ((
				var_1_27
			) + (
				var_1_28
			))
		);
	} else {
		/* 1009L, 241L, 708L, 722L) */ var_1_26 = (
			var_1_28
		);
	}


	// From: CodeObject2
	/* 97L) */ if (/* 71L, 70L) */ ((var_1_33) > (/* 73L, 69L) */ (abs (var_1_30))))) {
		/* 83L) */ var_1_34 = (
			/* 82L) */ (abs (
				var_1_30
			))
		);
	} else {
		/* 96L) */ var_1_34 = (
			/* 95L) */ (min (
				/* 95L) */ (
					/* 90L) */ ((
						/* 88L) */ ((
							var_1_35
						) - (
							var_1_30
						))
					) - (
						var_1_33
					))
				) , (
					/* 94L) */ (abs (
						/* 93L) */ ((
							100u
						) + (
							var_1_36
						))
					))
				)
			))
		);
	}


	// From: CodeObject5
	/* 142L) */ if (/* 124L, 123L) */ ((/* 125L, 121L) */ ((var_1_35) % (/* 127L, 120L) */ (abs (var_1_42))))) < (var_1_41))) {
		/* 141L) */ var_1_40 = (
			/* 140L) */ (min (
				/* 140L) */ (
					var_1_43
				) , (
					var_1_30
				)
			))
		);
	}


	// From: Req1Batch185Filler_PR_CN
	signed long int stepLocal_1 = /* 881L, 7L, 13L, 292L, 313L) */ (max (/* 881L, 7L, 13L, 292L, 313L) */ (var_1_4) , (var_1_5)));
	unsigned char stepLocal_0 = var_1_13;
	/* 900L, 42L, 287L, 308L) */ if (/* 888L, 8L, 9L, 288L, 309L) */ ((/* 887L, 4L, 10L, 289L, 310L) */ ((var_1_2) - (var_1_3))) <= (stepLocal_1))) {
		/* 895L, 36L, 295L, 316L) */ if (/* 890L, 25L, 26L, 296L, 317L) */ ((var_1_9) || (stepLocal_0))) {
			/* 894L, 35L, 299L, 320L) */ var_1_1 = (
				var_1_8
			);
		}
	} else {
		/* 899L, 41L, 303L, 324L) */ var_1_1 = (
			var_1_8
		);
	}


	// From: Req4Batch185Filler_PR_CN
	signed short int stepLocal_4 = var_1_10;
	/* 978L, 182L, 519L, 546L) */ if (/* 956L, 118L, 119L, 520L, 547L) */ ((var_1_8) < (var_1_26))) {
		/* 973L, 176L, 523L, 550L) */ if (/* 964L, 133L, 134L, 524L, 551L) */ ((stepLocal_4) == (/* 963L, 132L, 136L, 526L, 553L) */ ((/* 959L, 128L, 137L, 527L, 554L) */ ((var_1_4) * (var_1_5))) + (/* 962L, 131L, 140L, 530L, 557L) */ ((var_1_3) >> (2))))))) {
			/* 968L, 155L, 533L, 560L) */ var_1_16 = (
				var_1_3
			);
		} else {
			/* 972L, 175L, 537L, 564L) */ var_1_16 = (
				var_1_17
			);
		}
	} else {
		/* 977L, 181L, 541L, 568L) */ var_1_16 = (
			var_1_17
		);
	}


	// From: CodeObject9
	/* 269L) */ if (/* 228L, 227L) */ ((/* 229L, 225L) */ (abs (var_1_41))) == (128))) {
		/* 263L) */ if (/* 241L, 240L) */ ((var_1_34) <= (/* 243L, 239L) */ ((var_1_35) - (var_1_30))))) {
			/* 258L) */ var_1_50 = (
				/* 257L) */ ((
					/* 255L) */ ((
						2054545849u
					) - (
						var_1_49
					))
				) + (
					25u
				))
			);
		} else {
			/* 262L) */ var_1_50 = (
				8u
			);
		}
	} else {
		/* 268L) */ var_1_50 = (
			var_1_36
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 32767);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32768);
	assume_abort_if_not(var_1_10 <= 32767);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32767);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32767);
	assume_abort_if_not(var_1_25 <= 32766);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 3221225470);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -127);
	assume_abort_if_not(var_1_42 <= 127);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483647);
	assume_abort_if_not(var_1_43 <= 2147483646);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	assume_abort_if_not(var_1_46 != 0.0F);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	if (/* 274L, 8L, 16L, 330L, 351L, 1035L) */ ((/* 275L, 4L, 17L, 331L, 352L, 1036L) */ ((var_1_2) - (var_1_3))) <= (/* 278L, 7L, 20L, 334L, 355L, 1039L) */ (max (/* 278L, 7L, 20L, 334L, 355L, 1039L) */ (var_1_4) , (var_1_5)))))) {
		if (/* 282L, 25L, 29L, 338L, 359L, 1043L) */ ((var_1_9) || (var_1_13))) {
		}
	} else {
	}
	if (/* 295L, 52L, 58L, 406L, 423L, 1056L) */ ((/* 296L, 50L, 59L, 407L, 424L, 1057L) */ ((var_1_3) / (var_1_10))) <= (var_1_4))) {
	}
	if (/* 312L, 81L, 85L, 480L, 500L, 859L, 1073L, 28L) */ ((var_1_8) > (last_1_var_1_29))) {
		if (/* 317L, 90L, 94L, 484L, 504L, 862L, 1078L, 31L) */ ((var_1_10) >= (var_1_3))) {
		}
	} else {
	}
	if (/* 333L, 118L, 122L, 574L, 601L, 1094L) */ ((var_1_8) < (var_1_26))) {
		if (/* 337L, 133L, 143L, 578L, 605L, 1098L) */ ((var_1_10) == (/* 339L, 132L, 145L, 580L, 607L, 1100L) */ ((/* 340L, 128L, 146L, 581L, 608L, 1101L) */ ((var_1_4) * (var_1_5))) + (/* 343L, 131L, 149L, 584L, 611L, 1104L) */ ((var_1_3) >> (2))))))) {
		} else {
		}
	} else {
	}
	if (/* 361L, 196L, 206L, 665L, 683L, 1122L) */ ((/* 362L, 192L, 207L, 666L, 684L, 1123L) */ ((/* 363L, 190L, 208L, 667L, 685L, 1124L) */ (max (/* 363L, 190L, 208L, 667L, 685L, 1124L) */ (var_1_19) , (var_1_20)))) - (var_1_21))) >= (/* 367L, 195L, 212L, 671L, 689L, 1128L) */ ((var_1_22) - (var_1_23))))) {
	}
	if (var_1_11) {
	} else {
	}
	if (/* 394L, 252L, 256L, 798L, 818L, 1155L) */ ((var_1_10) >= (var_1_3))) {
	} else {
		if (/* 403L, 266L, 270L, 807L, 827L, 1164L) */ ((var_1_13) || (var_1_14))) {
		}
	}
	return /* 416L) */ ((
	/* 415L) */ ((
		/* 414L) */ ((
			/* 413L) */ ((
				/* 412L) */ ((
					/* 411L) */ ((
						/* 273L, 43L, 329L, 350L, 1034L) */ ((
							/* 274L, 8L, 16L, 330L, 351L, 1035L) */ ((
								/* 275L, 4L, 17L, 331L, 352L, 1036L) */ ((
									var_1_2
								) - (
									var_1_3
								))
							) <= (
								/* 278L, 7L, 20L, 334L, 355L, 1039L) */ (max (
									/* 278L, 7L, 20L, 334L, 355L, 1039L) */ (
										var_1_4
									) , (
										var_1_5
									)
								))
							))
						) ? (
							/* 281L, 37L, 337L, 358L, 1042L) */ ((
								/* 282L, 25L, 29L, 338L, 359L, 1043L) */ ((
									var_1_9
								) || (
									var_1_13
								))
							) ? (
								/* 285L, 35L, 341L, 362L, 1046L) */ ((
									var_1_1
								) == (
									/* 285L, 35L, 341L, 362L, 1046L) */ ((float) (
										var_1_8
									))
								))
							) : (
								1
							))
						) : (
							/* 289L, 41L, 345L, 366L, 1050L) */ ((
								var_1_1
							) == (
								/* 289L, 41L, 345L, 366L, 1050L) */ ((float) (
									var_1_8
								))
							))
						))
					) && (
						/* 294L, 74L, 405L, 422L, 1055L) */ ((
							/* 295L, 52L, 58L, 406L, 423L, 1056L) */ ((
								/* 296L, 50L, 59L, 407L, 424L, 1057L) */ ((
									var_1_3
								) / (
									var_1_10
								))
							) <= (
								var_1_4
							))
						) ? (
							/* 300L, 72L, 411L, 428L, 1061L) */ ((
								var_1_9
							) == (
								/* 300L, 72L, 411L, 428L, 1061L) */ ((unsigned char) (
									/* 303L, 71L, 414L, 431L, 1064L) */ ((
										/* 304L, 69L, 415L, 432L, 1065L) */ ((
											/* 305L, 67L, 416L, 433L, 1066L) */ ((
												var_1_8
											) >= (
												var_1_29
											))
										) || (
											var_1_11
										))
									) && (
										var_1_12
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 311L, 111L, 479L, 499L, 875L, 1072L, 44L) */ ((
						/* 312L, 81L, 85L, 480L, 500L, 859L, 1073L, 28L) */ ((
							var_1_8
						) > (
							last_1_var_1_29
						))
					) ? (
						/* 316L, 103L, 483L, 503L, 868L, 1077L, 37L) */ ((
							/* 317L, 90L, 94L, 484L, 504L, 862L, 1078L, 31L) */ ((
								var_1_10
							) >= (
								var_1_3
							))
						) ? (
							/* 320L, 101L, 487L, 507L, 867L, 1081L, 36L) */ ((
								var_1_13
							) == (
								/* 320L, 101L, 487L, 507L, 867L, 1081L, 36L) */ ((unsigned char) (
									/* 323L, 100L, 490L, 510L, 866L, 1084L, 35L) */ (! (
										var_1_11
									))
								))
							))
						) : (
							1
						))
					) : (
						/* 325L, 109L, 492L, 512L, 874L, 1086L, 43L) */ ((
							var_1_13
						) == (
							/* 325L, 109L, 492L, 512L, 874L, 1086L, 43L) */ ((unsigned char) (
								/* 328L, 108L, 495L, 515L, 873L, 1089L, 42L) */ ((
									var_1_14
								) || (
									var_1_15
								))
							))
						))
					))
				))
			) && (
				/* 332L, 183L, 573L, 600L, 1093L) */ ((
					/* 333L, 118L, 122L, 574L, 601L, 1094L) */ ((
						var_1_8
					) < (
						var_1_26
					))
				) ? (
					/* 336L, 177L, 577L, 604L, 1097L) */ ((
						/* 337L, 133L, 143L, 578L, 605L, 1098L) */ ((
							var_1_10
						) == (
							/* 339L, 132L, 145L, 580L, 607L, 1100L) */ ((
								/* 340L, 128L, 146L, 581L, 608L, 1101L) */ ((
									var_1_4
								) * (
									var_1_5
								))
							) + (
								/* 343L, 131L, 149L, 584L, 611L, 1104L) */ ((
									var_1_3
								) >> (
									2
								))
							))
						))
					) ? (
						/* 346L, 155L, 587L, 614L, 1107L) */ ((
							var_1_16
						) == (
							/* 346L, 155L, 587L, 614L, 1107L) */ ((unsigned short int) (
								var_1_3
							))
						))
					) : (
						/* 350L, 175L, 591L, 618L, 1111L) */ ((
							var_1_16
						) == (
							/* 350L, 175L, 591L, 618L, 1111L) */ ((unsigned short int) (
								var_1_17
							))
						))
					))
				) : (
					/* 354L, 181L, 595L, 622L, 1115L) */ ((
						var_1_16
					) == (
						/* 354L, 181L, 595L, 622L, 1115L) */ ((unsigned short int) (
							var_1_17
						))
					))
				))
			))
		) && (
			/* 360L, 222L, 664L, 682L, 1121L) */ ((
				/* 361L, 196L, 206L, 665L, 683L, 1122L) */ ((
					/* 362L, 192L, 207L, 666L, 684L, 1123L) */ ((
						/* 363L, 190L, 208L, 667L, 685L, 1124L) */ (max (
							/* 363L, 190L, 208L, 667L, 685L, 1124L) */ (
								var_1_19
							) , (
								var_1_20
							)
						))
					) - (
						var_1_21
					))
				) >= (
					/* 367L, 195L, 212L, 671L, 689L, 1128L) */ ((
						var_1_22
					) - (
						var_1_23
					))
				))
			) ? (
				/* 370L, 220L, 674L, 692L, 1131L) */ ((
					var_1_18
				) == (
					/* 370L, 220L, 674L, 692L, 1131L) */ ((signed short int) (
						/* 373L, 219L, 677L, 695L, 1134L) */ (min (
							/* 373L, 219L, 677L, 695L, 1134L) */ (
								var_1_24
							) , (
								var_1_25
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 378L, 243L, 728L, 742L, 1139L) */ ((
			var_1_11
		) ? (
			/* 380L, 237L, 730L, 744L, 1141L) */ ((
				var_1_26
			) == (
				/* 380L, 237L, 730L, 744L, 1141L) */ ((float) (
					/* 383L, 236L, 733L, 747L, 1144L) */ ((
						var_1_27
					) + (
						var_1_28
					))
				))
			))
		) : (
			/* 386L, 241L, 736L, 750L, 1147L) */ ((
				var_1_26
			) == (
				/* 386L, 241L, 736L, 750L, 1147L) */ ((float) (
					var_1_28
				))
			))
		))
	))
) && (
	/* 393L, 280L, 797L, 817L, 1154L) */ ((
		/* 394L, 252L, 256L, 798L, 818L, 1155L) */ ((
			var_1_10
		) >= (
			var_1_3
		))
	) ? (
		/* 397L, 263L, 801L, 821L, 1158L) */ ((
			var_1_29
		) == (
			/* 397L, 263L, 801L, 821L, 1158L) */ ((float) (
				/* 400L, 262L, 804L, 824L, 1161L) */ (abs (
					var_1_27
				))
			))
		))
	) : (
		/* 402L, 278L, 806L, 826L, 1163L) */ ((
			/* 403L, 266L, 270L, 807L, 827L, 1164L) */ ((
				var_1_13
			) || (
				var_1_14
			))
		) ? (
			/* 406L, 276L, 810L, 830L, 1167L) */ ((
				var_1_29
			) == (
				/* 406L, 276L, 810L, 830L, 1167L) */ ((float) (
					64.125f
				))
			))
		) : (
			1
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
