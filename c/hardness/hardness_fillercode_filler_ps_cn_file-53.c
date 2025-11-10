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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch53Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
signed long int var_1_4 = 0;
signed long int var_1_5 = 4;
signed long int var_1_6 = 4;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 10;
float var_1_10 = 99.5;
float var_1_11 = 5.6;
float var_1_12 = 255.5;
float var_1_13 = 31.25;
signed short int var_1_14 = 32;
unsigned long int var_1_15 = 16;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 50;
unsigned char var_1_19 = 50;
signed char var_1_20 = 1;
signed char var_1_21 = -10;
float var_1_22 = 0.5;
signed char var_1_23 = 100;
signed short int var_1_24 = 2;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
float var_1_27 = 64.5;
float var_1_28 = 499.375;
signed short int var_1_29 = -64;
signed short int var_1_30 = 50;
unsigned short int var_1_31 = 8;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
float var_1_35 = 32.4;
float var_1_36 = 8.5;
float var_1_37 = 7.5;
float var_1_38 = 3.2;
unsigned char var_1_39 = 16;
unsigned char var_1_40 = 5;
signed short int var_1_41 = -2;
unsigned char var_1_42 = 10;
unsigned char var_1_43 = 4;
unsigned char var_1_44 = 64;
signed long int var_1_45 = -25;
unsigned short int var_1_46 = 128;
float var_1_47 = 255.6;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned long int last_1_var_1_9 = 10;
signed short int last_1_var_1_14 = 32;
signed char last_1_var_1_20 = 1;
signed char last_1_var_1_23 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 150L) */ if (var_1_25) {
		/* 144L) */ if (var_1_26) {
			/* 142L) */ if (/* 128L, 127L) */ ((var_1_27) <= (/* 130L, 126L) */ (abs (var_1_28))))) {
				/* 141L) */ var_1_24 = (
					/* 140L) */ (min (
						/* 140L) */ (
							var_1_29
						) , (
							var_1_30
						)
					))
				);
			}
		}
	} else {
		/* 149L) */ var_1_24 = (
			var_1_30
		);
	}


	// From: CodeObject2
	/* 192L) */ if (/* 157L, 156L) */ ((var_1_24) >= (var_1_29))) {
		/* 190L) */ if (/* 168L, 167L) */ ((/* 169L, 165L) */ ((4) % (var_1_32))) > (var_1_30))) {
			/* 185L) */ var_1_31 = (
				/* 184L) */ (abs (
					/* 183L) */ ((
						/* 181L) */ (abs (
							var_1_32
						))
					) + (
						256
					))
				))
			);
		} else {
			/* 189L) */ var_1_31 = (
				var_1_32
			);
		}
	}


	// From: CodeObject3
	/* 199L) */ var_1_33 = (
		var_1_34
	);


	// From: CodeObject4
	/* 221L) */ if (/* 207L, 206L) */ ((var_1_24) >= (var_1_29))) {
		/* 220L) */ var_1_35 = (
			/* 219L) */ ((
				/* 217L) */ ((
					var_1_36
				) - (
					var_1_37
				))
			) + (
				var_1_38
			))
		);
	}


	// From: CodeObject5
	/* 240L) */ if (/* 230L, 229L) */ ((var_1_33) || (var_1_25))) {
		/* 239L) */ var_1_39 = (
			var_1_40
		);
	}


	// From: CodeObject6
	/* 258L) */ if (var_1_34) {
		/* 253L) */ var_1_41 = (
			/* 252L) */ (abs (
				var_1_40
			))
		);
	} else {
		/* 257L) */ var_1_41 = (
			var_1_32
		);
	}


	// From: CodeObject7
	/* 282L) */ if (/* 266L, 265L) */ ((var_1_27) <= (/* 268L, 264L) */ (abs (var_1_38))))) {
		/* 281L) */ var_1_42 = (
			/* 280L) */ (abs (
				/* 279L) */ (abs (
					/* 278L) */ ((
						var_1_43
					) + (
						var_1_44
					))
				))
			))
		);
	}


	// From: CodeObject8
	/* 338L) */ if (/* 291L, 290L) */ ((/* 292L, 288L) */ ((var_1_46) / (var_1_32))) >= (var_1_29))) {
		/* 312L) */ if (var_1_34) {
			/* 311L) */ var_1_45 = (
				/* 310L) */ ((
					/* 308L) */ (min (
						/* 308L) */ (
							var_1_46
						) , (
							var_1_43
						)
					))
				) - (
					var_1_44
				))
			);
		}
	} else {
		/* 336L) */ if (/* 320L, 319L) */ ((/* 321L, 315L) */ (abs (var_1_37))) < (/* 323L, 318L) */ ((var_1_47) * (var_1_28))))) {
			/* 335L) */ var_1_45 = (
				4
			);
		}
	}


	// From: Req1Batch53Filler_PS_CN
	unsigned char stepLocal_1 = /* 66L, 21L, 25L, 296L, 316L, 897L, 940L) */ ((last_1_var_1_9) > (/* 65L, 20L, 27L, 298L, 318L, 896L, 943L) */ ((var_1_5) - (var_1_6))));
	unsigned long int stepLocal_0 = /* 73L, 4L, 8L, 290L, 310L, 888L, 933L) */ ((last_1_var_1_9) * (last_1_var_1_14));
	/* 89L, 44L, 288L, 308L, 906L, 958L) */ if (/* 79L, 6L, 7L, 289L, 309L, 891L, 949L) */ ((stepLocal_0) == (last_1_var_1_9))) {
		/* 88L, 42L, 294L, 314L, 905L, 957L) */ if (/* 83L, 23L, 24L, 295L, 315L, 900L, 952L) */ ((stepLocal_1) && (last_1_var_1_1))) {
			/* 87L, 41L, 303L, 323L, 904L, 956L) */ var_1_1 = (
				var_1_8
			);
		}
	}


	// From: Req2Batch53Filler_PS_CN
	unsigned char stepLocal_3 = /* 7L, 54L, 60L, 370L, 393L, 838L, 969L) */ ((last_1_var_1_1) || (/* 6L, 53L, 62L, 372L, 395L, 837L, 972L) */ ((var_1_6) <= (last_1_var_1_23))));
	signed long int stepLocal_2 = /* 12L, 82L, 88L, 383L, 406L, 849L, 964L) */ ((-5) + (var_1_5));
	/* 31L, 104L, 368L, 391L, 856L, 991L) */ if (/* 20L, 58L, 59L, 369L, 392L, 843L, 981L) */ ((stepLocal_3) || (/* 19L, 57L, 65L, 375L, 398L, 842L, 980L) */ ((last_1_var_1_20) != (var_1_4))))) {
		/* 30L, 102L, 378L, 401L, 855L, 990L) */ if (/* 25L, 83L, 84L, 379L, 402L, 850L, 985L) */ ((/* 23L, 79L, 85L, 380L, 403L, 846L, 984L) */ (min (/* 23L, 79L, 85L, 380L, 403L, 846L, 984L) */ (var_1_6) , (0)))) <= (stepLocal_2))) {
			/* 29L, 101L, 386L, 409L, 854L, 989L) */ var_1_9 = (
				var_1_6
			);
		}
	}


	// From: Req3Batch53Filler_PS_CN
	unsigned char stepLocal_5 = /* 1001L, 139L, 145L, 479L, 510L) */ ((var_1_9) != (var_1_6));
	unsigned char stepLocal_4 = /* 997L, 114L, 118L, 462L, 493L) */ (! (var_1_1));
	/* 1029L, 165L, 460L, 491L) */ if (/* 1006L, 116L, 117L, 461L, 492L) */ ((stepLocal_4) || (var_1_8))) {
		/* 1015L, 133L, 465L, 496L) */ var_1_10 = (
			/* 1014L, 132L, 468L, 499L) */ (min (
				/* 1014L, 132L, 468L, 499L) */ (
					/* 1011L, 129L, 469L, 500L) */ ((
						var_1_11
					) + (
						var_1_12
					))
				) , (
					/* 1013L, 131L, 472L, 503L) */ (abs (
						var_1_13
					))
				)
			))
		);
	} else {
		/* 1028L, 163L, 474L, 505L) */ if (/* 1019L, 140L, 141L, 475L, 506L) */ ((/* 1018L, 136L, 142L, 476L, 507L) */ ((var_1_11) < (var_1_12))) || (stepLocal_5))) {
			/* 1023L, 158L, 482L, 513L) */ var_1_10 = (
				var_1_13
			);
		} else {
			/* 1027L, 162L, 486L, 517L) */ var_1_10 = (
				var_1_12
			);
		}
	}


	// From: Req6Batch53Filler_PS_CN
	/* 1083L, 263L, 761L, 767L) */ var_1_20 = (
		var_1_21
	);


	// From: Req7Batch53Filler_PS_CN
	/* 1089L, 273L, 785L, 791L) */ var_1_22 = (
		var_1_12
	);


	// From: Req8Batch53Filler_PS_CN
	/* 1095L, 283L, 809L, 815L) */ var_1_23 = (
		var_1_21
	);


	// From: Req5Batch53Filler_PS_CN
	unsigned long int stepLocal_6 = /* 1062L, 225L, 231L, 694L, 711L) */ ((/* 1063L, 223L, 232L, 695L, 712L) */ (max (/* 1063L, 223L, 232L, 695L, 712L) */ (var_1_15) , (var_1_9)))) / (var_1_17));
	/* 1078L, 254L, 692L, 709L) */ if (/* 1071L, 229L, 230L, 693L, 710L) */ ((stepLocal_6) <= (/* 1070L, 228L, 236L, 699L, 716L) */ ((256u) << (var_1_20))))) {
		/* 1077L, 253L, 702L, 719L) */ var_1_16 = (
			/* 1076L, 252L, 705L, 722L) */ (max (
				/* 1076L, 252L, 705L, 722L) */ (
					var_1_18
				) , (
					var_1_19
				)
			))
		);
	}


	// From: Req4Batch53Filler_PS_CN
	/* 1036L, 211L, 586L, 613L) */ if (var_1_1) {
		/* 1038L, 179L, 588L, 615L) */ var_1_14 = (
			/* 1041L, 178L, 591L, 618L) */ (max (
				/* 1041L, 178L, 591L, 618L) */ (
					var_1_20
				) , (
					var_1_16
				)
			))
		);
	} else {
		/* 1044L, 209L, 594L, 621L) */ if (/* 1045L, 186L, 187L, 595L, 622L) */ ((/* 1046L, 184L, 188L, 596L, 623L) */ ((/* 1047L, 182L, 189L, 597L, 624L) */ ((var_1_9) / (var_1_15))) & (var_1_6))) >= (var_1_9))) {
			/* 1052L, 204L, 602L, 629L) */ var_1_14 = (
				var_1_16
			);
		} else {
			/* 1056L, 208L, 606L, 633L) */ var_1_14 = (
				-128
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 4294967295);
	assume_abort_if_not(var_1_15 != 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 255);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -127);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32767);
	assume_abort_if_not(var_1_29 <= 32766);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 255);
	assume_abort_if_not(var_1_32 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 65535);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	if (/* 341L, 6L, 12L, 329L, 349L, 915L, 1101L, 99L) */ ((/* 342L, 4L, 13L, 330L, 350L, 912L, 1102L, 96L) */ ((last_1_var_1_9) * (last_1_var_1_14))) == (last_1_var_1_9))) {
		if (/* 350L, 23L, 31L, 335L, 355L, 924L, 1110L, 108L) */ ((/* 351L, 21L, 32L, 336L, 356L, 921L, 1111L, 105L) */ ((last_1_var_1_9) > (/* 354L, 20L, 34L, 338L, 358L, 920L, 1114L, 104L) */ ((var_1_5) - (var_1_6))))) && (last_1_var_1_1))) {
		}
	}
	if (/* 365L, 58L, 68L, 415L, 438L, 869L, 1125L, 45L) */ ((/* 366L, 54L, 69L, 416L, 439L, 864L, 1126L, 40L) */ ((last_1_var_1_1) || (/* 369L, 53L, 71L, 418L, 441L, 863L, 1129L, 39L) */ ((var_1_6) <= (last_1_var_1_23))))) || (/* 373L, 57L, 74L, 421L, 444L, 868L, 1133L, 44L) */ ((last_1_var_1_20) != (var_1_4))))) {
		if (/* 378L, 83L, 91L, 425L, 448L, 876L, 1138L, 52L) */ ((/* 379L, 79L, 92L, 426L, 449L, 872L, 1139L, 48L) */ (min (/* 379L, 79L, 92L, 426L, 449L, 872L, 1139L, 48L) */ (var_1_6) , (0)))) <= (/* 382L, 82L, 95L, 429L, 452L, 875L, 1142L, 51L) */ ((-5) + (var_1_5))))) {
		}
	}
	if (/* 391L, 116L, 121L, 523L, 554L, 1151L) */ ((/* 392L, 114L, 122L, 524L, 555L, 1152L) */ (! (var_1_1))) || (var_1_8))) {
	} else {
		if (/* 405L, 140L, 148L, 537L, 568L, 1165L) */ ((/* 406L, 136L, 149L, 538L, 569L, 1166L) */ ((var_1_11) < (var_1_12))) || (/* 409L, 139L, 152L, 541L, 572L, 1169L) */ ((var_1_9) != (var_1_6))))) {
		} else {
		}
	}
	if (var_1_1) {
	} else {
		if (/* 432L, 186L, 194L, 649L, 676L, 1192L) */ ((/* 433L, 184L, 195L, 650L, 677L, 1193L) */ ((/* 434L, 182L, 196L, 651L, 678L, 1194L) */ ((var_1_9) / (var_1_15))) & (var_1_6))) >= (var_1_9))) {
		} else {
		}
	}
	if (/* 449L, 229L, 239L, 727L, 744L, 1209L) */ ((/* 450L, 225L, 240L, 728L, 745L, 1210L) */ ((/* 451L, 223L, 241L, 729L, 746L, 1211L) */ (max (/* 451L, 223L, 241L, 729L, 746L, 1211L) */ (var_1_15) , (var_1_9)))) / (var_1_17))) <= (/* 455L, 228L, 245L, 733L, 750L, 1215L) */ ((256u) << (var_1_20))))) {
	}
	return /* 489L) */ ((
	/* 488L) */ ((
		/* 487L) */ ((
			/* 486L) */ ((
				/* 485L) */ ((
					/* 484L) */ ((
						/* 483L) */ ((
							/* 340L, 45L, 328L, 348L, 930L, 1100L, 114L) */ ((
								/* 341L, 6L, 12L, 329L, 349L, 915L, 1101L, 99L) */ ((
									/* 342L, 4L, 13L, 330L, 350L, 912L, 1102L, 96L) */ ((
										last_1_var_1_9
									) * (
										last_1_var_1_14
									))
								) == (
									last_1_var_1_9
								))
							) ? (
								/* 349L, 43L, 334L, 354L, 929L, 1109L, 113L) */ ((
									/* 350L, 23L, 31L, 335L, 355L, 924L, 1110L, 108L) */ ((
										/* 351L, 21L, 32L, 336L, 356L, 921L, 1111L, 105L) */ ((
											last_1_var_1_9
										) > (
											/* 354L, 20L, 34L, 338L, 358L, 920L, 1114L, 104L) */ ((
												var_1_5
											) - (
												var_1_6
											))
										))
									) && (
										last_1_var_1_1
									))
								) ? (
									/* 359L, 41L, 343L, 363L, 928L, 1119L, 112L) */ ((
										var_1_1
									) == (
										/* 359L, 41L, 343L, 363L, 928L, 1119L, 112L) */ ((unsigned char) (
											var_1_8
										))
									))
								) : (
									1
								))
							) : (
								1
							))
						) && (
							/* 364L, 105L, 414L, 437L, 882L, 1124L, 58L) */ ((
								/* 365L, 58L, 68L, 415L, 438L, 869L, 1125L, 45L) */ ((
									/* 366L, 54L, 69L, 416L, 439L, 864L, 1126L, 40L) */ ((
										last_1_var_1_1
									) || (
										/* 369L, 53L, 71L, 418L, 441L, 863L, 1129L, 39L) */ ((
											var_1_6
										) <= (
											last_1_var_1_23
										))
									))
								) || (
									/* 373L, 57L, 74L, 421L, 444L, 868L, 1133L, 44L) */ ((
										last_1_var_1_20
									) != (
										var_1_4
									))
								))
							) ? (
								/* 377L, 103L, 424L, 447L, 881L, 1137L, 57L) */ ((
									/* 378L, 83L, 91L, 425L, 448L, 876L, 1138L, 52L) */ ((
										/* 379L, 79L, 92L, 426L, 449L, 872L, 1139L, 48L) */ (min (
											/* 379L, 79L, 92L, 426L, 449L, 872L, 1139L, 48L) */ (
												var_1_6
											) , (
												0
											)
										))
									) <= (
										/* 382L, 82L, 95L, 429L, 452L, 875L, 1142L, 51L) */ ((
											-5
										) + (
											var_1_5
										))
									))
								) ? (
									/* 385L, 101L, 432L, 455L, 880L, 1145L, 56L) */ ((
										var_1_9
									) == (
										/* 385L, 101L, 432L, 455L, 880L, 1145L, 56L) */ ((unsigned long int) (
											var_1_6
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
						/* 390L, 166L, 522L, 553L, 1150L) */ ((
							/* 391L, 116L, 121L, 523L, 554L, 1151L) */ ((
								/* 392L, 114L, 122L, 524L, 555L, 1152L) */ (! (
									var_1_1
								))
							) || (
								var_1_8
							))
						) ? (
							/* 395L, 133L, 527L, 558L, 1155L) */ ((
								var_1_10
							) == (
								/* 395L, 133L, 527L, 558L, 1155L) */ ((float) (
									/* 398L, 132L, 530L, 561L, 1158L) */ (min (
										/* 398L, 132L, 530L, 561L, 1158L) */ (
											/* 399L, 129L, 531L, 562L, 1159L) */ ((
												var_1_11
											) + (
												var_1_12
											))
										) , (
											/* 402L, 131L, 534L, 565L, 1162L) */ (abs (
												var_1_13
											))
										)
									))
								))
							))
						) : (
							/* 404L, 164L, 536L, 567L, 1164L) */ ((
								/* 405L, 140L, 148L, 537L, 568L, 1165L) */ ((
									/* 406L, 136L, 149L, 538L, 569L, 1166L) */ ((
										var_1_11
									) < (
										var_1_12
									))
								) || (
									/* 409L, 139L, 152L, 541L, 572L, 1169L) */ ((
										var_1_9
									) != (
										var_1_6
									))
								))
							) ? (
								/* 412L, 158L, 544L, 575L, 1172L) */ ((
									var_1_10
								) == (
									/* 412L, 158L, 544L, 575L, 1172L) */ ((float) (
										var_1_13
									))
								))
							) : (
								/* 416L, 162L, 548L, 579L, 1176L) */ ((
									var_1_10
								) == (
									/* 416L, 162L, 548L, 579L, 1176L) */ ((float) (
										var_1_12
									))
								))
							))
						))
					))
				) && (
					/* 423L, 212L, 640L, 667L, 1183L) */ ((
						var_1_1
					) ? (
						/* 425L, 179L, 642L, 669L, 1185L) */ ((
							var_1_14
						) == (
							/* 425L, 179L, 642L, 669L, 1185L) */ ((signed short int) (
								/* 428L, 178L, 645L, 672L, 1188L) */ (max (
									/* 428L, 178L, 645L, 672L, 1188L) */ (
										var_1_20
									) , (
										var_1_16
									)
								))
							))
						))
					) : (
						/* 431L, 210L, 648L, 675L, 1191L) */ ((
							/* 432L, 186L, 194L, 649L, 676L, 1192L) */ ((
								/* 433L, 184L, 195L, 650L, 677L, 1193L) */ ((
									/* 434L, 182L, 196L, 651L, 678L, 1194L) */ ((
										var_1_9
									) / (
										var_1_15
									))
								) & (
									var_1_6
								))
							) >= (
								var_1_9
							))
						) ? (
							/* 439L, 204L, 656L, 683L, 1199L) */ ((
								var_1_14
							) == (
								/* 439L, 204L, 656L, 683L, 1199L) */ ((signed short int) (
									var_1_16
								))
							))
						) : (
							/* 443L, 208L, 660L, 687L, 1203L) */ ((
								var_1_14
							) == (
								/* 443L, 208L, 660L, 687L, 1203L) */ ((signed short int) (
									-128
								))
							))
						))
					))
				))
			) && (
				/* 448L, 255L, 726L, 743L, 1208L) */ ((
					/* 449L, 229L, 239L, 727L, 744L, 1209L) */ ((
						/* 450L, 225L, 240L, 728L, 745L, 1210L) */ ((
							/* 451L, 223L, 241L, 729L, 746L, 1211L) */ (max (
								/* 451L, 223L, 241L, 729L, 746L, 1211L) */ (
									var_1_15
								) , (
									var_1_9
								)
							))
						) / (
							var_1_17
						))
					) <= (
						/* 455L, 228L, 245L, 733L, 750L, 1215L) */ ((
							256u
						) << (
							var_1_20
						))
					))
				) ? (
					/* 458L, 253L, 736L, 753L, 1218L) */ ((
						var_1_16
					) == (
						/* 458L, 253L, 736L, 753L, 1218L) */ ((unsigned char) (
							/* 461L, 252L, 739L, 756L, 1221L) */ (max (
								/* 461L, 252L, 739L, 756L, 1221L) */ (
									var_1_18
								) , (
									var_1_19
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 466L, 263L, 773L, 779L, 1226L) */ ((
				var_1_20
			) == (
				/* 466L, 263L, 773L, 779L, 1226L) */ ((signed char) (
					var_1_21
				))
			))
		))
	) && (
		/* 472L, 273L, 797L, 803L, 1232L) */ ((
			var_1_22
		) == (
			/* 472L, 273L, 797L, 803L, 1232L) */ ((float) (
				var_1_12
			))
		))
	))
) && (
	/* 478L, 283L, 821L, 827L, 1238L) */ ((
		var_1_23
	) == (
		/* 478L, 283L, 821L, 827L, 1238L) */ ((signed char) (
			var_1_21
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
